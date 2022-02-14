
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_hazard; char max_interesting; } ;
typedef TYPE_1__ max_parallel_hazard_context ;


 int FUNC_0 (int) ;
 int VAR_0 ;



 int FUNC_1 (int ,char*,char) ;

__attribute__((used)) static bool
FUNC_2(char VAR_1, max_parallel_hazard_context *VAR_2)
{
 switch (VAR_1)
 {
  case 129:

   break;
  case 130:

   FUNC_0(VAR_2->max_hazard != 128);
   VAR_2->max_hazard = VAR_1;

   if (VAR_2->max_interesting == VAR_1)
    return 1;
   break;
  case 128:
   VAR_2->max_hazard = VAR_1;

   return 1;
  default:
   FUNC_1(VAR_0, "unrecognized proparallel value \"%c\"", VAR_1);
   break;
 }
 return 0;
}
