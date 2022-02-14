
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int buf; } ;
typedef TYPE_1__ deparse_context ;
struct TYPE_8__ {int consttype; int consttypmod; int constvalue; scalar_t__ constisnull; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef TYPE_2__ Const ;





 char* FUNC_0 (int ,int ) ;

 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (int,int ) ;
 int FUNC_4 (int,int *,int*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (unsigned char) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(Const *VAR_0, deparse_context *VAR_1, int VAR_2)
{
 StringInfo VAR_3 = VAR_1->buf;
 Oid VAR_4;
 bool VAR_5;
 char *VAR_6;
 bool VAR_7 = 0;

 if (VAR_0->constisnull)
 {




  FUNC_2(VAR_3, "NULL");
  if (VAR_2 >= 0)
  {
   FUNC_1(VAR_3, "::%s",
        FUNC_3(VAR_0->consttype,
               VAR_0->consttypmod));
   FUNC_5(VAR_0, VAR_1);
  }
  return;
 }

 FUNC_4(VAR_0->consttype,
       &VAR_4, &VAR_5);

 VAR_6 = FUNC_0(VAR_4, VAR_0->constvalue);

 switch (VAR_0->consttype)
 {
  case 130:
   if (VAR_6[0] != '-')
    FUNC_2(VAR_3, VAR_6);
   else
   {
    FUNC_1(VAR_3, "'%s'", VAR_6);
    VAR_7 = 1;
   }
   break;

  case 129:






   if (FUNC_6((unsigned char) VAR_6[0]) &&
    FUNC_10(VAR_6, "eE.") != FUNC_11(VAR_6))
   {
    FUNC_2(VAR_3, VAR_6);
   }
   else
   {
    FUNC_1(VAR_3, "'%s'", VAR_6);
    VAR_7 = 1;
   }
   break;

  case 131:
   if (FUNC_9(VAR_6, "t") == 0)
    FUNC_2(VAR_3, "true");
   else
    FUNC_2(VAR_3, "false");
   break;

  default:
   FUNC_8(VAR_3, VAR_6);
   break;
 }

 FUNC_7(VAR_6);

 if (VAR_2 < 0)
  return;
 switch (VAR_0->consttype)
 {
  case 131:
  case 128:

   VAR_7 = 0;
   break;
  case 130:

   break;
  case 129:






   VAR_7 |= (VAR_0->consttypmod >= 0);
   break;
  default:
   VAR_7 = 1;
   break;
 }
 if (VAR_7 || VAR_2 > 0)
  FUNC_1(VAR_3, "::%s",
       FUNC_3(VAR_0->consttype,
              VAR_0->consttypmod));

 FUNC_5(VAR_0, VAR_1);
}
