
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct snd_usb_midi_in_endpoint {int dummy; } ;


 int FUNC_0 (struct snd_usb_midi_in_endpoint*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct snd_usb_midi_in_endpoint *VAR_0,
          uint8_t *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 + 3 < VAR_2; VAR_3 += 4)
  if (VAR_1[VAR_3 + 3] != 0) {
   int VAR_4 = VAR_1[VAR_3 + 3] >> 4;
   int VAR_5 = VAR_1[VAR_3 + 3] & 3;
   FUNC_0(VAR_0, VAR_4, &VAR_1[VAR_3], VAR_5);
  }
}
