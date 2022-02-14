
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_azf3328 {unsigned int shadow_reg_ctrl_6AH; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,int,unsigned int) ;
 int FUNC_1 (struct snd_azf3328*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct snd_azf3328 *VAR_1,
     unsigned VAR_2,
     bool VAR_3
)
{
 bool VAR_4 = !VAR_3;
 if (VAR_4)
  VAR_1->shadow_reg_ctrl_6AH |= VAR_2;
 else
  VAR_1->shadow_reg_ctrl_6AH &= ~VAR_2;
 FUNC_0(VAR_1->card->dev,
  "6AH_update mask 0x%04x do_mask %d: val 0x%04x\n",
  VAR_2, VAR_4, VAR_1->shadow_reg_ctrl_6AH);
 FUNC_1(VAR_1, VAR_0, VAR_1->shadow_reg_ctrl_6AH);
}
