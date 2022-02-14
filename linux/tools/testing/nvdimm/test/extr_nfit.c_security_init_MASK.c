
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfit_test_sec {int ext_state; } ;
struct nfit_test {int num_dcr; } ;


 int VAR_0 ;
 struct nfit_test_sec* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct nfit_test *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_dcr; VAR_3++) {
  struct nfit_test_sec *VAR_4 = &VAR_1[VAR_3];

  VAR_4->ext_state = VAR_0;
 }
}
