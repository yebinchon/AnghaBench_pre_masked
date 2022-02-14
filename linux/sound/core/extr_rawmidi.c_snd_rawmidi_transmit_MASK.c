
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int opened; struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_rawmidi_substream*,int) ;
 int FUNC_1 (struct snd_rawmidi_substream*,unsigned char*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct snd_rawmidi_substream *VAR_1,
    unsigned char *VAR_2, int VAR_3)
{
 struct snd_rawmidi_runtime *VAR_4 = VAR_1->runtime;
 int VAR_5;
 unsigned long VAR_6;

 FUNC_2(&VAR_4->lock, VAR_6);
 if (!VAR_1->opened)
  VAR_5 = -VAR_0;
 else {
  VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_3);
  if (VAR_3 <= 0)
   VAR_5 = VAR_3;
  else
   VAR_5 = FUNC_0(VAR_1, VAR_3);
 }
 FUNC_3(&VAR_4->lock, VAR_6);
 return VAR_5;
}
