
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_5__ {int data; } ;
struct TYPE_6__ {scalar_t__ type; int argc; TYPE_1__ lines; int * argv; int first_line; } ;
typedef TYPE_2__ Command ;


 int FUNC_0 (int) ;



 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 size_t FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_6(Command *VAR_2)
{
 char VAR_3[128];

 FUNC_0(VAR_2->type == VAR_0);


 FUNC_5(VAR_3, VAR_2->lines.data, sizeof(VAR_3));
 VAR_3[FUNC_4(VAR_3, "\n\r")] = '\0';
 VAR_2->first_line = FUNC_3(VAR_3);


 switch (VAR_1)
 {
  case 128:
   VAR_2->argv[0] = VAR_2->lines.data;
   VAR_2->argc++;
   break;
  case 130:
  case 129:
   if (!FUNC_2(VAR_2))
    FUNC_1(1);
   break;
  default:
   FUNC_1(1);
 }
}
