
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_component {int dev; } ;
struct skl_dsp_ops {int (* init_fw ) (int ,struct skl_dev*) ;} ;
struct TYPE_5__ {TYPE_3__* astate_cfg; } ;
struct skl_dev {TYPE_2__ cfg; int update_d0i3c; int (* clock_power_gating ) (int ,int) ;int (* enable_miscbdcge ) (int ,int) ;TYPE_1__* pci; int debugfs; struct snd_soc_component* component; } ;
struct hdac_bus {scalar_t__ ppcap; } ;
struct TYPE_6__ {int count; } ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 struct skl_dev* FUNC_0 (struct hdac_bus*) ;
 int FUNC_1 (int ,char*,...) ;
 struct hdac_bus* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct skl_dev*) ;
 int FUNC_7 (struct skl_dev*,int ,TYPE_3__*) ;
 struct skl_dsp_ops* FUNC_8 (int ) ;
 int FUNC_9 (struct skl_dev*) ;
 int FUNC_10 (struct snd_soc_component*,struct hdac_bus*) ;
 int VAR_1 ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,struct skl_dev*) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int) ;

__attribute__((used)) static int FUNC_16(struct snd_soc_component *VAR_2)
{
 struct hdac_bus *VAR_3 = FUNC_2(VAR_2->dev);
 struct skl_dev *VAR_4 = FUNC_0(VAR_3);
 const struct skl_dsp_ops *VAR_5;
 int VAR_6;

 FUNC_3(VAR_2->dev);
 if (VAR_3->ppcap) {
  VAR_4->component = VAR_2;


  VAR_4->debugfs = FUNC_6(VAR_4);

  VAR_6 = FUNC_10(VAR_2, VAR_3);
  if (VAR_6 < 0) {
   FUNC_1(VAR_2->dev, "Failed to init topology!\n");
   return VAR_6;
  }


  VAR_5 = FUNC_8(VAR_4->pci->device);
  if (!VAR_5)
   return -VAR_0;





  VAR_4->enable_miscbdcge(VAR_2->dev, 0);
  VAR_4->clock_power_gating(VAR_2->dev, 0);

  VAR_6 = VAR_5->init_fw(VAR_2->dev, VAR_4);
  VAR_4->enable_miscbdcge(VAR_2->dev, 1);
  VAR_4->clock_power_gating(VAR_2->dev, 1);
  if (VAR_6 < 0) {
   FUNC_1(VAR_2->dev, "Failed to boot first fw: %d\n", VAR_6);
   return VAR_6;
  }
  FUNC_9(VAR_4);
  VAR_4->update_d0i3c = VAR_1;

  if (VAR_4->cfg.astate_cfg != ((void*)0)) {
   FUNC_7(VAR_4,
     VAR_4->cfg.astate_cfg->count,
     VAR_4->cfg.astate_cfg);
  }
 }
 FUNC_4(VAR_2->dev);
 FUNC_5(VAR_2->dev);

 return 0;
}
