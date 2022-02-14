
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct s3c_pcm_info {int dma_capture; int dma_playback; } ;


 struct s3c_pcm_info* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_soc_dai*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0)
{
 struct s3c_pcm_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, VAR_1->dma_playback, VAR_1->dma_capture);

 return 0;
}
