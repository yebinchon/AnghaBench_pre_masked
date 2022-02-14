
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppoatm_vcc {int chan; int wakeup_tasklet; int old_release_cb; int old_pop; int old_push; } ;
struct atm_vcc {int * user_back; int release_cb; int pop; int push; } ;


 struct pppoatm_vcc* FUNC_0 (struct atm_vcc*) ;
 int FUNC_1 (struct pppoatm_vcc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct atm_vcc *VAR_0)
{
 struct pppoatm_vcc *VAR_1;
 VAR_1 = FUNC_0(VAR_0);
 VAR_0->push = VAR_1->old_push;
 VAR_0->pop = VAR_1->old_pop;
 VAR_0->release_cb = VAR_1->old_release_cb;
 FUNC_3(&VAR_1->wakeup_tasklet);
 FUNC_2(&VAR_1->chan);
 VAR_0->user_back = ((void*)0);
 FUNC_1(VAR_1);
}
