
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sst_drv {int sst_state; int sst_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(
  struct intel_sst_drv *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->sst_lock);
 VAR_0->sst_state = VAR_1;
 FUNC_1(&VAR_0->sst_lock);
}
