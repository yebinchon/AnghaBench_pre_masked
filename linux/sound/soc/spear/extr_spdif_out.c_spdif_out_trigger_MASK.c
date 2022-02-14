
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mute; } ;
struct spdif_out_dev {scalar_t__ io_base; TYPE_1__ saved_params; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 struct spdif_out_dev* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_8, int VAR_9,
  struct snd_soc_dai *VAR_10)
{
 struct spdif_out_dev *VAR_11 = FUNC_1(VAR_10);
 u32 VAR_12;
 int VAR_13 = 0;

 if (VAR_8->stream != VAR_1)
  return -VAR_0;

 switch (VAR_9) {
 case 130:
 case 131:
 case 132:
   VAR_12 = FUNC_0(VAR_11->io_base + VAR_6);
   VAR_12 &= ~VAR_3;
   if (!VAR_11->saved_params.mute)
    VAR_12 |= VAR_2 |
     VAR_7;
   else
    VAR_12 |= VAR_4;
   FUNC_2(VAR_12, VAR_11->io_base + VAR_6);
  break;

 case 129:
 case 128:
 case 133:
  VAR_12 = FUNC_0(VAR_11->io_base + VAR_6);
  VAR_12 &= ~VAR_3;
  VAR_12 |= VAR_5;
  FUNC_2(VAR_12, VAR_11->io_base + VAR_6);
  break;

 default:
  VAR_13 = -VAR_0;
  break;
 }
 return VAR_13;
}
