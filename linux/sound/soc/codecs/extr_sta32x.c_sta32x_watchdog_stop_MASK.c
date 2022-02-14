
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta32x_priv {int shutdown; int watchdog_work; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ needs_esd_watchdog; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct sta32x_priv *VAR_0)
{
 if (VAR_0->pdata->needs_esd_watchdog) {
  VAR_0->shutdown = 1;
  FUNC_0(&VAR_0->watchdog_work);
 }
}
