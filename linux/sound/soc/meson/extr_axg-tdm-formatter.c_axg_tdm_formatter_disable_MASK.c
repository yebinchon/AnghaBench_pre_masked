
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct axg_tdm_formatter {int enabled; int sclk; int lrclk; int map; TYPE_2__* drv; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* disable ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct axg_tdm_formatter *VAR_0)
{

 if (!VAR_0->enabled)
  return;

 VAR_0->drv->ops->disable(VAR_0->map);
 FUNC_0(VAR_0->lrclk);
 FUNC_0(VAR_0->sclk);
 VAR_0->enabled = 0;
}
