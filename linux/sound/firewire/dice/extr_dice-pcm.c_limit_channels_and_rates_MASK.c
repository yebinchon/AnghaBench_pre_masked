
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hardware {scalar_t__ channels_max; int channels_min; int rates; } ;
struct snd_pcm_runtime {struct snd_pcm_hardware hw; } ;
struct snd_dice {unsigned int** tx_pcm_chs; unsigned int** rx_pcm_chs; } ;
typedef enum snd_dice_rate_mode { ____Placeholder_snd_dice_rate_mode } snd_dice_rate_mode ;
typedef enum amdtp_stream_direction { ____Placeholder_amdtp_stream_direction } amdtp_stream_direction ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 unsigned int* VAR_2 ;
 scalar_t__ FUNC_3 (struct snd_dice*,unsigned int,int*) ;
 int FUNC_4 (struct snd_pcm_runtime*) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static int FUNC_6(struct snd_dice *VAR_3,
        struct snd_pcm_runtime *VAR_4,
        enum amdtp_stream_direction VAR_5,
        unsigned int VAR_6)
{
 struct snd_pcm_hardware *VAR_7 = &VAR_4->hw;
 unsigned int *VAR_8;
 unsigned int VAR_9;

 if (VAR_5 == VAR_0)
  VAR_8 = VAR_3->tx_pcm_chs[VAR_6];
 else
  VAR_8 = VAR_3->rx_pcm_chs[VAR_6];

 VAR_7->channels_min = VAR_1;
 VAR_7->channels_max = 0;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); ++VAR_9) {
  enum snd_dice_rate_mode VAR_10;
  unsigned int VAR_11, VAR_12;

  VAR_11 = VAR_2[VAR_9];
  if (FUNC_3(VAR_3, VAR_11, &VAR_10) < 0)
   continue;
  VAR_7->rates |= FUNC_5(VAR_11);

  VAR_12 = VAR_8[VAR_10];
  if (VAR_12 == 0)
   continue;
  VAR_7->channels_min = FUNC_2(VAR_7->channels_min, VAR_12);
  VAR_7->channels_max = FUNC_1(VAR_7->channels_max, VAR_12);
 }

 FUNC_4(VAR_4);

 return 0;
}
