
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppoatm_vcc {int (* old_release_cb ) (struct atm_vcc*) ;int wakeup_tasklet; int blocked; } ;
struct atm_vcc {int dummy; } ;


 int VAR_0 ;
 struct pppoatm_vcc* FUNC_0 (struct atm_vcc*) ;
 int FUNC_1 (struct atm_vcc*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct atm_vcc *VAR_1)
{
 struct pppoatm_vcc *VAR_2 = FUNC_0(VAR_1);
 if (FUNC_3(VAR_0, &VAR_2->blocked))
  FUNC_2(&VAR_2->wakeup_tasklet);
 if (VAR_2->old_release_cb)
  VAR_2->old_release_cb(VAR_1);
}
