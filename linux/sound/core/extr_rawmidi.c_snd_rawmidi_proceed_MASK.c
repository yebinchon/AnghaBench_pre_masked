
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {scalar_t__ avail; scalar_t__ buffer_size; int lock; } ;


 int FUNC_0 (struct snd_rawmidi_substream*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct snd_rawmidi_substream *VAR_0)
{
 struct snd_rawmidi_runtime *VAR_1 = VAR_0->runtime;
 unsigned long VAR_2;
 int VAR_3 = 0;

 FUNC_1(&VAR_1->lock, VAR_2);
 if (VAR_1->avail < VAR_1->buffer_size) {
  VAR_3 = VAR_1->buffer_size - VAR_1->avail;
  FUNC_0(VAR_0, VAR_3);
 }
 FUNC_2(&VAR_1->lock, VAR_2);
 return VAR_3;
}
