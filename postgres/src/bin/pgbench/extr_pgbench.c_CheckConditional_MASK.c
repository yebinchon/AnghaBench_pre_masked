
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int meta; } ;
struct TYPE_4__ {int desc; TYPE_2__** commands; } ;
typedef TYPE_1__ ParsedScript ;
typedef int ConditionalStack ;
typedef TYPE_2__ Command ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;




 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(ParsedScript VAR_3)
{

 ConditionalStack VAR_4 = FUNC_1();
 int VAR_5;

 for (VAR_5 = 0; VAR_3.commands[VAR_5] != ((void*)0); VAR_5++)
 {
  Command *VAR_6 = VAR_3.commands[VAR_5];

  if (VAR_6->type == VAR_2)
  {
   switch (VAR_6->meta)
   {
    case 128:
     FUNC_7(VAR_4, VAR_1);
     break;
    case 131:
     if (FUNC_3(VAR_4))
      FUNC_0(VAR_3.desc, VAR_5 + 1, "\\elif without matching \\if");
     if (FUNC_4(VAR_4) == VAR_0)
      FUNC_0(VAR_3.desc, VAR_5 + 1, "\\elif after \\else");
     break;
    case 130:
     if (FUNC_3(VAR_4))
      FUNC_0(VAR_3.desc, VAR_5 + 1, "\\else without matching \\if");
     if (FUNC_4(VAR_4) == VAR_0)
      FUNC_0(VAR_3.desc, VAR_5 + 1, "\\else after \\else");
     FUNC_5(VAR_4, VAR_0);
     break;
    case 129:
     if (!FUNC_6(VAR_4))
      FUNC_0(VAR_3.desc, VAR_5 + 1, "\\endif without matching \\if");
     break;
    default:

     break;
   }
  }
 }
 if (!FUNC_3(VAR_4))
  FUNC_0(VAR_3.desc, VAR_5 + 1, "\\if without matching \\endif");
 FUNC_2(VAR_4);
}
