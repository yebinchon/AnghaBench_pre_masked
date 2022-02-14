
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TypeName ;
struct TYPE_3__ {int * arg; int defname; } ;
typedef int List ;
typedef TYPE_1__ DefElem ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *) ;






 char* FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (char*,long) ;
 char* FUNC_9 (char*) ;
 char* FUNC_10 (int *) ;

char *
FUNC_11(DefElem *VAR_2)
{
 if (VAR_2->arg == ((void*)0))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("%s requires a parameter",
      VAR_2->defname)));
 switch (FUNC_7(VAR_2->arg))
 {
  case 131:
   return FUNC_8("%ld", (long) FUNC_6(VAR_2->arg));
  case 132:





   return FUNC_10(VAR_2->arg);
  case 129:
   return FUNC_10(VAR_2->arg);
  case 128:
   return FUNC_1((TypeName *) VAR_2->arg);
  case 130:
   return FUNC_0((List *) VAR_2->arg);
  case 133:
   return FUNC_9("*");
  default:
   FUNC_2(VAR_1, "unrecognized node type: %d", (int) FUNC_7(VAR_2->arg));
 }
 return ((void*)0);
}
