
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dev; int cpu_dai; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int min; int max; } ;


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
 int FUNC_0 (int ,char*,int) ;
 struct snd_interval* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_pcm_runtime *VAR_10,
       struct snd_pcm_hw_params *VAR_11)
{
 struct snd_interval *VAR_12 = FUNC_1(VAR_11,
   VAR_5);
 struct snd_interval *VAR_13 = FUNC_1(VAR_11,
      VAR_4);
 int VAR_14, VAR_15;


 VAR_12->min = VAR_12->max = 48000;
 VAR_13->min = VAR_13->max = 2;

 if ((VAR_9 & VAR_0) ||
     (VAR_9 & VAR_1)) {

  FUNC_2(VAR_11, VAR_2);
  VAR_15 = 16;
 } else {

  FUNC_2(VAR_11, VAR_3);
  VAR_15 = 24;
 }






 VAR_14 = FUNC_3(VAR_10->cpu_dai,
      VAR_7 |
      VAR_8 |
      VAR_6
      );

 if (VAR_14 < 0) {
  FUNC_0(VAR_10->dev, "can't set format to I2S, err %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_4(VAR_10->cpu_dai, 0x3, 0x3, 2, VAR_15);
 if (VAR_14 < 0) {
  FUNC_0(VAR_10->dev, "can't set I2S config, err %d\n", VAR_14);
  return VAR_14;
 }

 return 0;
}
