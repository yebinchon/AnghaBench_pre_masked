
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int bytes; int rmidi; struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {int avail; int buffer_size; int hw_ptr; int sleep; scalar_t__ drain; int * buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct snd_rawmidi_substream*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct snd_rawmidi_substream *VAR_1, int VAR_2)
{
 struct snd_rawmidi_runtime *VAR_3 = VAR_1->runtime;

 if (VAR_3->buffer == ((void*)0)) {
  FUNC_0(VAR_1->rmidi,
     "snd_rawmidi_transmit_ack: output is not active!!!\n");
  return -VAR_0;
 }
 FUNC_1(VAR_3->avail + VAR_2 > VAR_3->buffer_size);
 VAR_3->hw_ptr += VAR_2;
 VAR_3->hw_ptr %= VAR_3->buffer_size;
 VAR_3->avail += VAR_2;
 VAR_1->bytes += VAR_2;
 if (VAR_2 > 0) {
  if (VAR_3->drain || FUNC_2(VAR_1))
   FUNC_3(&VAR_3->sleep);
 }
 return VAR_2;
}
