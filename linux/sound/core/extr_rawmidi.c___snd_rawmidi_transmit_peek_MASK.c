
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int rmidi; struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {unsigned char* buffer; int avail; int buffer_size; size_t hw_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct snd_rawmidi_substream *VAR_1,
         unsigned char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 struct snd_rawmidi_runtime *VAR_6 = VAR_1->runtime;

 if (VAR_6->buffer == ((void*)0)) {
  FUNC_1(VAR_1->rmidi,
     "snd_rawmidi_transmit_peek: output is not active!!!\n");
  return -VAR_0;
 }
 VAR_4 = 0;
 if (VAR_6->avail >= VAR_6->buffer_size) {

  goto __skip;
 }
 if (VAR_3 == 1) {
  *VAR_2 = VAR_6->buffer[VAR_6->hw_ptr];
  VAR_4++;
 } else {
  VAR_5 = VAR_6->buffer_size - VAR_6->hw_ptr;
  if (VAR_5 > VAR_3)
   VAR_5 = VAR_3;
  if (VAR_5 > (int)(VAR_6->buffer_size - VAR_6->avail))
   VAR_5 = VAR_6->buffer_size - VAR_6->avail;
  FUNC_0(VAR_2, VAR_6->buffer + VAR_6->hw_ptr, VAR_5);
  VAR_3 -= VAR_5;
  VAR_4 += VAR_5;
  if (VAR_3 > 0) {
   if (VAR_3 > (int)(VAR_6->buffer_size - VAR_6->avail - VAR_5))
    VAR_3 = VAR_6->buffer_size - VAR_6->avail - VAR_5;
   FUNC_0(VAR_2 + VAR_5, VAR_6->buffer, VAR_3);
   VAR_4 += VAR_3;
  }
 }
      __skip:
 return VAR_4;
}
