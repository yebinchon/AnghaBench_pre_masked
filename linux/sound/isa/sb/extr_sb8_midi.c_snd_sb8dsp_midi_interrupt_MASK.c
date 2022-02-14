
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int open; int midi_input_lock; int midi_substream_input; struct snd_rawmidi* rmidi; } ;
struct snd_rawmidi {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_sb*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

irqreturn_t FUNC_5(struct snd_sb *VAR_5)
{
 struct snd_rawmidi *VAR_6;
 int VAR_7 = 64;
 char VAR_8;

 if (!VAR_5)
  return VAR_2;

 VAR_6 = VAR_5->rmidi;
 if (!VAR_6) {
  FUNC_1(FUNC_0(VAR_5, VAR_0));
  return VAR_2;
 }

 FUNC_3(&VAR_5->midi_input_lock);
 while (VAR_7-- > 0) {
  if (FUNC_1(FUNC_0(VAR_5, VAR_0)) & 0x80) {
   VAR_8 = FUNC_1(FUNC_0(VAR_5, VAR_3));
   if (VAR_5->open & VAR_4) {
    FUNC_2(VAR_5->midi_substream_input, &VAR_8, 1);
   }
  }
 }
 FUNC_4(&VAR_5->midi_input_lock);
 return VAR_1;
}
