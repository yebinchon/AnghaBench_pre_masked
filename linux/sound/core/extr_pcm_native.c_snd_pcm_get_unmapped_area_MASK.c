
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_area; scalar_t__ control; scalar_t__ status; } ;
struct snd_pcm_file {struct snd_pcm_substream* substream; } ;
struct file {struct snd_pcm_file* private_data; } ;


 unsigned long VAR_0 ;



__attribute__((used)) static unsigned long FUNC_0(struct file *VAR_1,
            unsigned long VAR_2,
            unsigned long VAR_3,
            unsigned long VAR_4,
            unsigned long VAR_5)
{
 struct snd_pcm_file *VAR_6 = VAR_1->private_data;
 struct snd_pcm_substream *VAR_7 = VAR_6->substream;
 struct snd_pcm_runtime *VAR_8 = VAR_7->runtime;
 unsigned long VAR_9 = VAR_4 << VAR_0;

 switch (VAR_9) {
 case 128:
  return (unsigned long)VAR_8->status;
 case 129:
  return (unsigned long)VAR_8->control;
 default:
  return (unsigned long)VAR_8->dma_area + VAR_9;
 }
}
