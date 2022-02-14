
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int rmidi; struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {scalar_t__ avail; scalar_t__ buffer_size; int lock; int * buffer; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct snd_rawmidi_substream *VAR_0)
{
 struct snd_rawmidi_runtime *VAR_1 = VAR_0->runtime;
 int VAR_2;
 unsigned long VAR_3;

 if (VAR_1->buffer == ((void*)0)) {
  FUNC_0(VAR_0->rmidi,
     "snd_rawmidi_transmit_empty: output is not active!!!\n");
  return 1;
 }
 FUNC_1(&VAR_1->lock, VAR_3);
 VAR_2 = VAR_1->avail >= VAR_1->buffer_size;
 FUNC_2(&VAR_1->lock, VAR_3);
 return VAR_2;
}
