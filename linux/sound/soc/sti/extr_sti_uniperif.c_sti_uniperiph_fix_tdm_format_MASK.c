
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u64 ;
struct TYPE_2__ {int slot_width; } ;
struct uniperif {TYPE_1__ tdm_slot; int dev; } ;
struct snd_pcm_hw_rule {int var; struct uniperif* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {int * bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 struct snd_mask* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (int *,int ,int) ;

int FUNC_3(struct snd_pcm_hw_params *VAR_4,
     struct snd_pcm_hw_rule *VAR_5)
{
 struct uniperif *VAR_6 = VAR_5->private;
 struct snd_mask *VAR_7 = FUNC_1(VAR_4, VAR_5->var);
 u64 VAR_8;

 switch (VAR_6->tdm_slot.slot_width) {
 case 16:
  VAR_8 = VAR_2;
  break;
 case 32:
  VAR_8 = VAR_3;
  break;
 default:
  FUNC_0(VAR_6->dev, "format not supported: %d bits\n",
   VAR_6->tdm_slot.slot_width);
  return -VAR_0;
 }

 VAR_7->bits[0] &= (u_int32_t)VAR_8;
 VAR_7->bits[1] &= (u_int32_t)(VAR_8 >> 32);

 FUNC_2(VAR_7->bits + 2, 0, (VAR_1 - 64) / 8);

 if (!VAR_7->bits[0] && !VAR_7->bits[1])
  return -VAR_0;

 return 0;
}
