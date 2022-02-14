
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_rawmidi_substream {int number; } ;
struct snd_fw_async_midi_port {int* buf; int on_sysex; int running_status; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct snd_rawmidi_substream*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_fw_async_midi_port *VAR_0,
   struct snd_rawmidi_substream *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 u8 *VAR_5, *VAR_6;
 u8 VAR_7;


 VAR_5 = VAR_0->buf;
 VAR_6 = VAR_0->buf + 1;

 VAR_4 = FUNC_2(VAR_1, VAR_6, 3);
 if (VAR_4 == 0)
  return 0;


 if (VAR_0->on_sysex) {

  for (VAR_2 = 0; VAR_2 < VAR_4; ++VAR_2) {
   if (VAR_6[VAR_2] == 0xf7) {
    VAR_0->on_sysex = 0;
    break;
   }
  }


  if (!VAR_0->on_sysex) {
   VAR_4 = VAR_2 + 1;
   *VAR_5 = (VAR_1->number << 4) | 0x07;

  } else if (VAR_4 == 3) {
   *VAR_5 = (VAR_1->number << 4) | 0x04;

  } else {
   return 0;
  }

  VAR_3 = VAR_4;
 } else {

  if (VAR_6[0] == 0xf0) {

   VAR_0->on_sysex = 1;
   return 0;
  } else {

   if ((VAR_6[0] & 0x80) != 0x80)
    VAR_7 = VAR_0->running_status;
   else
    VAR_7 = VAR_6[0];


   VAR_3 = FUNC_0(VAR_7);
   if (VAR_3 <= 0)
    return 0;


   if ((VAR_6[0] & 0x80) != 0x80) {

    if (VAR_4 < VAR_3 - 1)
     return 0;
    VAR_4 = VAR_3 - 1;

    VAR_6[2] = VAR_6[1];
    VAR_6[1] = VAR_6[0];
    VAR_6[0] = VAR_0->running_status;
   } else {

    if (VAR_4 < VAR_3)
     return 0;
    VAR_4 = VAR_3;

    VAR_0->running_status = VAR_6[0];
   }
  }

  *VAR_5 = (VAR_1->number << 4) | (VAR_6[0] >> 4);
 }

 if (VAR_3 > 0 && VAR_3 < 3)
  FUNC_1(VAR_6 + VAR_3, 0, 3 - VAR_3);

 return VAR_4;
}
