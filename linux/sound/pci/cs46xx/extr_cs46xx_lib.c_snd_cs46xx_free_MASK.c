
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_cs46xx_region {scalar_t__ resource; int remap_addr; } ;
struct TYPE_2__ {struct snd_cs46xx_region* idx; } ;
struct snd_cs46xx {int amplifier; scalar_t__ irq; int pci; struct snd_cs46xx* saved_regs; int ba1; int * modules; int * dsp_spos_instance; TYPE_1__ region; int (* active_ctrl ) (struct snd_cs46xx*,int) ;int (* amplifier_ctrl ) (struct snd_cs46xx*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_cs46xx*) ;
 int FUNC_1 (scalar_t__,struct snd_cs46xx*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_cs46xx*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct snd_cs46xx*) ;
 int FUNC_9 (struct snd_cs46xx*) ;
 int FUNC_10 (struct snd_cs46xx*) ;
 int FUNC_11 (struct snd_cs46xx*,int) ;
 int FUNC_12 (struct snd_cs46xx*,int) ;
 int FUNC_13 (struct snd_cs46xx*,int) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct snd_cs46xx *VAR_2)
{
 int VAR_3;

 if (FUNC_7(!VAR_2))
  return -VAR_1;

 if (VAR_2->active_ctrl)
  VAR_2->active_ctrl(VAR_2, 1);

 FUNC_10(VAR_2);

 if (VAR_2->amplifier_ctrl)
  VAR_2->amplifier_ctrl(VAR_2, -VAR_2->amplifier);

 FUNC_9(VAR_2);

 if (VAR_2->region.idx[0].resource)
  FUNC_8(VAR_2);

 if (VAR_2->irq >= 0)
  FUNC_1(VAR_2->irq, VAR_2);

 if (VAR_2->active_ctrl)
  VAR_2->active_ctrl(VAR_2, -VAR_2->amplifier);

 for (VAR_3 = 0; VAR_3 < 5; VAR_3++) {
  struct snd_cs46xx_region *VAR_4 = &VAR_2->region.idx[VAR_3];

  FUNC_3(VAR_4->remap_addr);
  FUNC_6(VAR_4->resource);
 }
 FUNC_14(VAR_2->ba1);






 FUNC_5(VAR_2->pci);
 FUNC_4(VAR_2);
 return 0;
}
