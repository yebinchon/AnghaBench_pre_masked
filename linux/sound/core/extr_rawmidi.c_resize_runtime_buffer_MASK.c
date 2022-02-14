
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_runtime {int buffer_size; char* buffer; int avail_min; int lock; } ;
struct snd_rawmidi_params {int buffer_size; int avail_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_rawmidi_runtime*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_rawmidi_runtime *VAR_3,
     struct snd_rawmidi_params *VAR_4,
     bool VAR_5)
{
 char *VAR_6, *VAR_7;

 if (VAR_4->buffer_size < 32 || VAR_4->buffer_size > 1024L * 1024L)
  return -VAR_0;
 if (VAR_4->avail_min < 1 || VAR_4->avail_min > VAR_4->buffer_size)
  return -VAR_0;
 if (VAR_4->buffer_size != VAR_3->buffer_size) {
  VAR_6 = FUNC_2(VAR_4->buffer_size, VAR_2);
  if (!VAR_6)
   return -VAR_1;
  FUNC_3(&VAR_3->lock);
  VAR_7 = VAR_3->buffer;
  VAR_3->buffer = VAR_6;
  VAR_3->buffer_size = VAR_4->buffer_size;
  FUNC_0(VAR_3, VAR_5);
  FUNC_4(&VAR_3->lock);
  FUNC_1(VAR_7);
 }
 VAR_3->avail_min = VAR_4->avail_min;
 return 0;
}
