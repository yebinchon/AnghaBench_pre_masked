
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_pcm_runtime {int cpu_dai; TYPE_1__* card; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_8,
       struct snd_pcm_hw_params *VAR_9)
{
 struct snd_soc_pcm_runtime *VAR_10 = VAR_8->private_data;
 struct device *VAR_11 = VAR_10->card->dev;
 bool VAR_12 = VAR_8->stream == VAR_1;
 unsigned int VAR_13 = VAR_6 | VAR_7;
 u32 VAR_14 = FUNC_2(VAR_9);
 int VAR_15, VAR_16;


 VAR_13 |= VAR_12 ? VAR_5 : VAR_4;
 VAR_16 = VAR_12 ? VAR_3 : VAR_2;


 VAR_15 = FUNC_3(VAR_10->cpu_dai, VAR_13);
 if (VAR_15) {
  FUNC_1(VAR_11, "failed to set cpu dai fmt: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_4(VAR_10->cpu_dai, VAR_0, 0, VAR_16);
 if (VAR_15) {
  FUNC_1(VAR_11, "failed to set cpu sysclk: %d\n", VAR_15);
  return VAR_15;
 }





 VAR_15 = FUNC_5(VAR_10->cpu_dai, FUNC_0(VAR_14) - 1,
           FUNC_0(VAR_14) - 1, 8, 32);
 if (VAR_15)
  FUNC_1(VAR_11, "failed to set cpu dai tdm slot: %d\n", VAR_15);

 return VAR_15;
}
