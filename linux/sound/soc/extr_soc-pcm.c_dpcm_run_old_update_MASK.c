
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_pcm_runtime*,int) ;
 int FUNC_2 (struct snd_soc_pcm_runtime*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_2, VAR_3, VAR_0);
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 < 0)
  FUNC_0(VAR_2->dev, "ASoC: failed to shutdown some BEs\n");
 FUNC_2(VAR_2, VAR_3, VAR_1);

 return VAR_4;
}
