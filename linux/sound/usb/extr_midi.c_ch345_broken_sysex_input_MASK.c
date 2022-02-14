
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct snd_usb_midi_in_endpoint {int in_sysex; unsigned int last_cin; } ;


 unsigned int* VAR_0 ;
 int FUNC_0 (struct snd_usb_midi_in_endpoint*,int ,int*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct snd_usb_midi_in_endpoint *VAR_1,
         uint8_t *VAR_2, int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;

 for (VAR_4 = 0; VAR_4 + 3 < VAR_3; VAR_4 += 4) {
  if (VAR_2[VAR_4] == 0 && VAR_4 > 0)
   break;
  VAR_5 = VAR_2[VAR_4] & 0x0f;
  if (VAR_1->in_sysex &&
      VAR_5 == VAR_1->last_cin &&
      (VAR_2[VAR_4 + 1 + (VAR_5 == 0x6)] & 0x80) == 0)
   VAR_5 = 0x4;
  VAR_6 = VAR_0[VAR_5];
  FUNC_0(VAR_1, 0, &VAR_2[VAR_4 + 1], VAR_6);
  VAR_1->in_sysex = VAR_5 == 0x4;
  if (!VAR_1->in_sysex)
   VAR_1->last_cin = VAR_5;
 }
}
