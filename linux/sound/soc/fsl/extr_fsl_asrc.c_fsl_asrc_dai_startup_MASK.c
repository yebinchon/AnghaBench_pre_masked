
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int runtime; } ;
struct fsl_asrc {int channel_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct fsl_asrc* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3,
    struct snd_soc_dai *VAR_4)
{
 struct fsl_asrc *VAR_5 = FUNC_2(VAR_4);


 if (VAR_5->channel_bits == 3)
  FUNC_1(VAR_3->runtime, 0,
        VAR_0, 2);


 return FUNC_0(VAR_3->runtime, 0,
   VAR_1, &VAR_2);
}
