
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {int lock; } ;


 int FUNC_0 (struct snd_rawmidi_substream*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 struct snd_rawmidi_runtime *VAR_2 = VAR_0->runtime;
 int VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_2->lock, VAR_4);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_2->lock, VAR_4);
 return VAR_3;
}
