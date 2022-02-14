
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta32x_priv {int watchdog_work; scalar_t__ shutdown; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ needs_esd_watchdog; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct sta32x_priv *VAR_2)
{
 if (VAR_2->pdata->needs_esd_watchdog) {
  VAR_2->shutdown = 0;
  FUNC_0(VAR_1,
       &VAR_2->watchdog_work,
       FUNC_1(VAR_0));
 }
}
