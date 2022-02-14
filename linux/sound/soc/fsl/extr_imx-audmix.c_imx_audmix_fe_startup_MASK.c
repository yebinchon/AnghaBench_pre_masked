
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* card; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {int dummy; } ;
struct imx_audmix {int cpu_mclk; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,unsigned long) ;
 int VAR_4 ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int ) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int,int) ;
 struct imx_audmix* FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_5->private_data;
 struct imx_audmix *VAR_7 = FUNC_5(VAR_6->card);
 struct snd_pcm_runtime *VAR_8 = VAR_5->runtime;
 struct device *VAR_9 = VAR_6->card->dev;
 unsigned long VAR_10 = FUNC_0(VAR_7->cpu_mclk);
 int VAR_11;

 if (VAR_10 % 24576000 == 0) {
  VAR_11 = FUNC_2(VAR_8, 0,
       VAR_3,
       &VAR_4);
  if (VAR_11 < 0)
   return VAR_11;
 } else {
  FUNC_1(VAR_9, "mclk may be not supported %lu\n", VAR_10);
 }

 VAR_11 = FUNC_4(VAR_8, VAR_1,
        1, 8);
 if (VAR_11 < 0)
  return VAR_11;

 return FUNC_3(VAR_8, VAR_2,
         VAR_0);
}
