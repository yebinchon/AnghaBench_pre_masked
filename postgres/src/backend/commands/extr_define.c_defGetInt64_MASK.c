
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_3__ {int defname; int * arg; } ;
typedef TYPE_1__ DefElem ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int64
FUNC_9(DefElem *VAR_3)
{
 if (VAR_3->arg == ((void*)0))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("%s requires a numeric value",
      VAR_3->defname)));
 switch (FUNC_7(VAR_3->arg))
 {
  case 128:
   return (int64) FUNC_6(VAR_3->arg);
  case 129:






   return FUNC_1(FUNC_2(VAR_2,
              FUNC_0(FUNC_8(VAR_3->arg))));
  default:
   FUNC_3(VAR_1,
     (FUNC_4(VAR_0),
      FUNC_5("%s requires a numeric value",
       VAR_3->defname)));
 }
 return 0;
}
