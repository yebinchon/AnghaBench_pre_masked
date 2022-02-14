
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nargs; int sublevels_up; int * args; } ;
typedef TYPE_1__ substitute_actual_srf_parameters_context ;
typedef int Query ;
typedef int List ;


 int * FUNC_0 (int *,int ,TYPE_1__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static Query *
FUNC_1(Query *VAR_1, int VAR_2, List *VAR_3)
{
 substitute_actual_srf_parameters_context VAR_4;

 VAR_4.nargs = VAR_2;
 VAR_4.args = VAR_3;
 VAR_4.sublevels_up = 1;

 return FUNC_0(VAR_1,
         VAR_0,
         &VAR_4,
         0);
}
