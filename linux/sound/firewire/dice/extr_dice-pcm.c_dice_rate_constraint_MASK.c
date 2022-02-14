
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* pcm; struct snd_dice* private_data; } ;
struct snd_pcm_hw_rule {struct snd_pcm_substream* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int integer; int max; int min; } ;
struct snd_dice {unsigned int** tx_pcm_chs; unsigned int** rx_pcm_chs; } ;
typedef enum snd_dice_rate_mode { ____Placeholder_snd_dice_rate_mode } snd_dice_rate_mode ;
struct TYPE_2__ {unsigned int device; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct snd_interval* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 struct snd_interval* FUNC_2 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,unsigned int) ;
 unsigned int* VAR_4 ;
 scalar_t__ FUNC_5 (struct snd_dice*,unsigned int,int*) ;
 int FUNC_6 (struct snd_interval*,struct snd_interval*) ;
 int FUNC_7 (struct snd_interval const*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_hw_params *VAR_5,
    struct snd_pcm_hw_rule *VAR_6)
{
 struct snd_pcm_substream *VAR_7 = VAR_6->private;
 struct snd_dice *VAR_8 = VAR_7->private_data;
 unsigned int VAR_9 = VAR_7->pcm->device;

 const struct snd_interval *VAR_10 =
  FUNC_2(VAR_5, VAR_0);
 struct snd_interval *VAR_11 =
  FUNC_1(VAR_5, VAR_1);
 struct snd_interval VAR_12 = {
  .min = VAR_3, .max = 0, .integer = 1
 };
 unsigned int *VAR_13;
 enum snd_dice_rate_mode VAR_14;
 unsigned int VAR_15, VAR_16;

 if (VAR_7->stream == VAR_2)
  VAR_13 = VAR_8->tx_pcm_chs[VAR_9];
 else
  VAR_13 = VAR_8->rx_pcm_chs[VAR_9];

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_4); ++VAR_15) {
  VAR_16 = VAR_4[VAR_15];
  if (FUNC_5(VAR_8, VAR_16, &VAR_14) < 0)
   continue;

  if (!FUNC_7(VAR_10, VAR_13[VAR_14]))
   continue;

  VAR_12.min = FUNC_4(VAR_12.min, VAR_16);
  VAR_12.max = FUNC_3(VAR_12.max, VAR_16);
 }

 return FUNC_6(VAR_11, &VAR_12);
}
