
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_riptide {struct snd_pcm_substream* capture_substream; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct pcmhw* private_data; int hw; } ;
struct pcmhw {int* intdec; int state; int source; int id; int paths; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pcmhw* FUNC_0 (int,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 struct snd_riptide* FUNC_2 (struct snd_pcm_substream*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_8)
{
 struct snd_riptide *VAR_9 = FUNC_2(VAR_8);
 struct snd_pcm_runtime *VAR_10 = VAR_8->runtime;
 struct pcmhw *VAR_11;

 VAR_9->capture_substream = VAR_8;
 VAR_10->hw = VAR_7;

 VAR_11 = FUNC_0(sizeof(struct pcmhw), VAR_2);
 if (VAR_11 == ((void*)0))
  return -VAR_1;
 VAR_11->paths = VAR_6;
 VAR_11->id = VAR_3;
 VAR_11->source = VAR_0;
 VAR_11->intdec[0] = 0xff;
 VAR_11->intdec[1] = 0xff;
 VAR_11->state = VAR_5;
 VAR_10->private_data = VAR_11;
 return FUNC_1(VAR_10,
          VAR_4);
}
