
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ area; } ;
struct snd_ymfpci {scalar_t__ irq; int controller_microcode; int dsp_microcode; int pci; int old_legacy_ctrl; scalar_t__ res_reg_area; TYPE_1__ work_ptr; int reg_area_virt; scalar_t__ fm_res; scalar_t__ mpu_res; struct snd_ymfpci* saved_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (scalar_t__,struct snd_ymfpci*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_ymfpci*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct snd_ymfpci*) ;
 int FUNC_11 (struct snd_ymfpci*) ;
 int FUNC_12 (struct snd_ymfpci*) ;
 int FUNC_13 (struct snd_ymfpci*,int ) ;
 int FUNC_14 (struct snd_ymfpci*,int ,int ) ;
 int FUNC_15 (struct snd_ymfpci*,int ,int) ;

__attribute__((used)) static int FUNC_16(struct snd_ymfpci *VAR_12)
{
 u16 VAR_13;

 if (FUNC_8(!VAR_12))
  return -VAR_0;

 if (VAR_12->res_reg_area) {
  FUNC_14(VAR_12, VAR_6, 0);
  FUNC_14(VAR_12, VAR_2, 0);
  FUNC_14(VAR_12, VAR_5, 0);
  FUNC_14(VAR_12, VAR_9, ~0);
  FUNC_11(VAR_12);
  FUNC_14(VAR_12, VAR_7, 0);
  FUNC_14(VAR_12, VAR_8, 0);
  FUNC_14(VAR_12, VAR_3, 0);
  FUNC_14(VAR_12, VAR_10, 0);
  FUNC_14(VAR_12, VAR_11, 0);
  VAR_13 = FUNC_13(VAR_12, VAR_4);
  FUNC_15(VAR_12, VAR_4, VAR_13 & ~0x0007);
 }

 FUNC_10(VAR_12);
 if (VAR_12->irq >= 0)
  FUNC_0(VAR_12->irq, VAR_12);
 FUNC_6(VAR_12->mpu_res);
 FUNC_6(VAR_12->fm_res);
 FUNC_12(VAR_12);
 FUNC_1(VAR_12->reg_area_virt);
 if (VAR_12->work_ptr.area)
  FUNC_9(&VAR_12->work_ptr);

 FUNC_6(VAR_12->res_reg_area);

 FUNC_5(VAR_12->pci, 0x40, VAR_12->old_legacy_ctrl);

 FUNC_3(VAR_12->pci);
 FUNC_7(VAR_12->dsp_microcode);
 FUNC_7(VAR_12->controller_microcode);
 FUNC_2(VAR_12);
 return 0;
}
