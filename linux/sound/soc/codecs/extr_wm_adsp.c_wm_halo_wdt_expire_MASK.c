
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm_adsp {int pwr_lock; TYPE_1__* ops; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* stop_watchdog ) (struct wm_adsp*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct wm_adsp*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wm_adsp*) ;
 int FUNC_4 (struct wm_adsp*) ;

irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct wm_adsp *VAR_3 = VAR_2;

 FUNC_1(&VAR_3->pwr_lock);

 FUNC_0(VAR_3, "WDT Expiry Fault\n");
 VAR_3->ops->stop_watchdog(VAR_3);
 FUNC_4(VAR_3);

 FUNC_2(&VAR_3->pwr_lock);

 return VAR_0;
}
