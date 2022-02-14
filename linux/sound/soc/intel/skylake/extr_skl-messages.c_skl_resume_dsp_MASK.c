
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* astate_cfg; } ;
struct skl_dev {TYPE_1__ cfg; int dev; int (* clock_power_gating ) (int ,int) ;int (* enable_miscbdcge ) (int ,int) ;int dsp; scalar_t__ is_first_boot; } ;
struct hdac_bus {int ppcap; } ;
struct TYPE_4__ {int count; } ;


 int FUNC_0 (struct skl_dev*,int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 struct hdac_bus* FUNC_2 (struct skl_dev*) ;
 int FUNC_3 (struct hdac_bus*,int) ;
 int FUNC_4 (struct hdac_bus*,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;

int FUNC_9(struct skl_dev *VAR_0)
{
 struct hdac_bus *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;


 if (!VAR_1->ppcap)
  return 0;


 FUNC_3(VAR_1, 1);
 FUNC_4(VAR_1, 1);


 if (VAR_0->is_first_boot)
  return 0;





 VAR_0->enable_miscbdcge(VAR_0->dev, 0);
 VAR_0->clock_power_gating(VAR_0->dev, 0);

 VAR_2 = FUNC_1(VAR_0->dsp);
 VAR_0->enable_miscbdcge(VAR_0->dev, 1);
 VAR_0->clock_power_gating(VAR_0->dev, 1);
 if (VAR_2 < 0)
  return VAR_2;

 if (VAR_0->cfg.astate_cfg != ((void*)0)) {
  FUNC_0(VAR_0, VAR_0->cfg.astate_cfg->count,
     VAR_0->cfg.astate_cfg);
 }
 return VAR_2;
}
