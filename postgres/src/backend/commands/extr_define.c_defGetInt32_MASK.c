
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_3__ {int defname; int * arg; } ;
typedef TYPE_1__ DefElem ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int32
FUNC_5(DefElem *VAR_2)
{
 if (VAR_2->arg == ((void*)0))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("%s requires an integer value",
      VAR_2->defname)));
 switch (FUNC_4(VAR_2->arg))
 {
  case 128:
   return (int32) FUNC_3(VAR_2->arg);
  default:
   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_2("%s requires an integer value",
       VAR_2->defname)));
 }
 return 0;
}
