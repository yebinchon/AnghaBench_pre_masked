
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TypeName ;
struct TYPE_4__ {int defname; int * arg; } ;
typedef TYPE_1__ DefElem ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int *) ;

int
FUNC_10(DefElem *VAR_2)
{
 if (VAR_2->arg == ((void*)0))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("%s requires a parameter",
      VAR_2->defname)));
 switch (FUNC_7(VAR_2->arg))
 {
  case 131:
   return FUNC_6(VAR_2->arg);
  case 132:
   FUNC_3(VAR_1,
     (FUNC_4(VAR_0),
      FUNC_5("%s requires an integer value",
       VAR_2->defname)));
   break;
  case 129:
   if (FUNC_8(FUNC_9(VAR_2->arg), "variable") == 0)
    return -1;
   break;
  case 128:

   if (FUNC_8(FUNC_0((TypeName *) VAR_2->arg),
         "variable") == 0)
    return -1;
   break;
  case 130:

   break;
  default:
   FUNC_2(VAR_1, "unrecognized node type: %d", (int) FUNC_7(VAR_2->arg));
 }
 FUNC_3(VAR_1,
   (FUNC_4(VAR_0),
    FUNC_5("invalid argument for %s: \"%s\"",
     VAR_2->defname, FUNC_1(VAR_2))));
 return 0;
}
