
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int defname; int * arg; } ;
typedef TYPE_1__ DefElem ;


 int VAR_0 ;
 int VAR_1 ;

 char* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*) ;

bool
FUNC_7(DefElem *VAR_2)
{



 if (VAR_2->arg == ((void*)0))
  return 1;




 switch (FUNC_5(VAR_2->arg))
 {
  case 128:
   switch (FUNC_4(VAR_2->arg))
   {
    case 0:
     return 0;
    case 1:
     return 1;
    default:

     break;
   }
   break;
  default:
   {
    char *VAR_3 = FUNC_0(VAR_2);





    if (FUNC_6(VAR_3, "true") == 0)
     return 1;
    if (FUNC_6(VAR_3, "false") == 0)
     return 0;
    if (FUNC_6(VAR_3, "on") == 0)
     return 1;
    if (FUNC_6(VAR_3, "off") == 0)
     return 0;
   }
   break;
 }
 FUNC_1(VAR_1,
   (FUNC_2(VAR_0),
    FUNC_3("%s requires a Boolean value",
     VAR_2->defname)));
 return 0;
}
