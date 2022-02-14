
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct pcm_substream {int active; int lock; } ;
struct pcm_runtime {scalar_t__ panic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 struct pcm_runtime* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct pcm_substream* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3, int VAR_4)
{
 struct pcm_substream *VAR_5 = FUNC_3(VAR_3);
 struct pcm_runtime *VAR_6 = FUNC_0(VAR_3);
 unsigned long VAR_7;

 if (VAR_6->panic)
  return -VAR_2;
 if (!VAR_5)
  return -VAR_1;

 switch (VAR_4) {
 case 129:
 case 130:
  FUNC_1(&VAR_5->lock, VAR_7);
  VAR_5->active = 1;
  FUNC_2(&VAR_5->lock, VAR_7);
  return 0;

 case 128:
 case 131:
  FUNC_1(&VAR_5->lock, VAR_7);
  VAR_5->active = 0;
  FUNC_2(&VAR_5->lock, VAR_7);
  return 0;

 default:
  return -VAR_0;
 }
}
