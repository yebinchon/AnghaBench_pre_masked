
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct fsl_asrc_pair* private_data; } ;
struct fsl_asrc_pair {int * dma_chan; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3, int VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 struct fsl_asrc_pair *VAR_6 = VAR_5->private_data;
 int VAR_7;

 switch (VAR_4) {
 case 130:
 case 131:
 case 132:
  VAR_7 = FUNC_2(VAR_3);
  if (VAR_7)
   return VAR_7;
  FUNC_0(VAR_6->dma_chan[VAR_1]);
  FUNC_0(VAR_6->dma_chan[VAR_2]);
  break;
 case 129:
 case 128:
 case 133:
  FUNC_1(VAR_6->dma_chan[VAR_2]);
  FUNC_1(VAR_6->dma_chan[VAR_1]);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
