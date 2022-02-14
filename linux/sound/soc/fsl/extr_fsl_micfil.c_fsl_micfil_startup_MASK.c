
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct fsl_micfil {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct fsl_micfil* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
         struct snd_soc_dai *VAR_2)
{
 struct fsl_micfil *VAR_3 = FUNC_1(VAR_2);

 if (!VAR_3) {
  FUNC_0(VAR_2->dev,
   "micfil dai priv_data not set\n");
  return -VAR_0;
 }

 return 0;
}
