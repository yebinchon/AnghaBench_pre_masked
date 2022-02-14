
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
 int FUNC_0 (int ,char*,int) ;
 struct snd_interval* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*,int ) ;
 int VAR_8 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_pcm_runtime *VAR_9,
       struct snd_pcm_hw_params *VAR_10)
{
 struct snd_interval *VAR_11 = FUNC_1(VAR_10,
   VAR_4);
 struct snd_interval *VAR_12 = FUNC_1(VAR_10,
      VAR_3);
 int VAR_13, VAR_14;


 VAR_11->min = VAR_11->max = 48000;
 VAR_12->min = VAR_12->max = 2;

 if (VAR_8 & VAR_0) {

  FUNC_2(VAR_10, VAR_1);
  VAR_14 = 16;
 } else {

  FUNC_2(VAR_10, VAR_2);
  VAR_14 = 24;
 }






 VAR_13 = FUNC_3(VAR_9->cpu_dai,
    VAR_6 |
    VAR_7 |
    VAR_5
  );
 if (VAR_13 < 0) {
  FUNC_0(VAR_9->dev, "can't set format to I2S, err %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_4(VAR_9->cpu_dai, 0x3, 0x3, 2, VAR_14);
 if (VAR_13 < 0) {
  FUNC_0(VAR_9->dev, "can't set I2S config, err %d\n", VAR_13);
  return VAR_13;
 }

 return 0;
}
