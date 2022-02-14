
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pppoatm_vcc {int wakeup_tasklet; int blocked; int inflight; int (* old_pop ) (struct atm_vcc*,struct sk_buff*) ;} ;
struct atm_vcc {int dummy; } ;


 int VAR_0 ;
 struct pppoatm_vcc* FUNC_0 (struct atm_vcc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct atm_vcc *VAR_1, struct sk_buff *VAR_2)
{
 struct pppoatm_vcc *VAR_3 = FUNC_0(VAR_1);

 VAR_3->old_pop(VAR_1, VAR_2);
 FUNC_1(&VAR_3->inflight);
 if (FUNC_4(VAR_0, &VAR_3->blocked))
  FUNC_3(&VAR_3->wakeup_tasklet);
}
