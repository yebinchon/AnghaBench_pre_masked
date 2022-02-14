
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int device_config; int adc_i2s_format; int (* set_adc_params ) (struct oxygen*,struct snd_pcm_hw_params*) ;} ;
struct oxygen {int mutex; TYPE_1__ model; int reg_lock; scalar_t__ has_ac97_1; } ;


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
 int FUNC_0 (struct oxygen*,int ,struct snd_pcm_hw_params*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct oxygen*,int ,int,int) ;
 int FUNC_8 (struct oxygen*,int ,int,int ) ;
 struct oxygen* FUNC_9 (struct snd_pcm_substream*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct oxygen*,struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_10,
      struct snd_pcm_hw_params *VAR_11)
{
 struct oxygen *VAR_12 = FUNC_9(VAR_10);
 int VAR_13;
 int VAR_14;

 VAR_14 = FUNC_4(VAR_10, VAR_11);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_13 = VAR_12->has_ac97_1 &&
  (VAR_12->model.device_config & VAR_0);

 FUNC_10(&VAR_12->reg_lock);
 FUNC_8(VAR_12, VAR_6,
        FUNC_3(VAR_11) << VAR_8,
        VAR_7);
 if (!VAR_13)
  FUNC_7(VAR_12, VAR_2,
          FUNC_6(VAR_11) |
          VAR_12->model.adc_i2s_format |
          FUNC_0(VAR_12, VAR_9, VAR_11) |
          FUNC_5(VAR_11),
          VAR_5 |
          VAR_3 |
          VAR_4 |
          VAR_1);
 FUNC_11(&VAR_12->reg_lock);

 if (!VAR_13) {
  FUNC_1(&VAR_12->mutex);
  VAR_12->model.set_adc_params(VAR_12, VAR_11);
  FUNC_2(&VAR_12->mutex);
 }
 return 0;
}
