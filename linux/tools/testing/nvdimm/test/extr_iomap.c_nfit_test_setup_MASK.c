
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int nfit_test_lookup_fn ;
typedef int nfit_test_evaluate_dsm_fn ;
struct TYPE_2__ {int list; int evaluate_dsm; int nfit_test_lookup; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int *) ;

void FUNC_1(nfit_test_lookup_fn VAR_2,
  nfit_test_evaluate_dsm_fn VAR_3)
{
 VAR_1.nfit_test_lookup = VAR_2;
 VAR_1.evaluate_dsm = VAR_3;
 FUNC_0(&VAR_1.list, &VAR_0);
}
