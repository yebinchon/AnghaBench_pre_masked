
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_channel {int midi_pitchbend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_0(unsigned char *VAR_3, unsigned char *VAR_4,
    int VAR_5, struct snd_midi_channel *VAR_6)
{
 int VAR_7 = ((VAR_5 / 12) & 0x07) - 1;
 int VAR_8 = (VAR_5 % 12) + 2;
 int VAR_9;

 if (VAR_6->midi_pitchbend) {
  int VAR_10 = VAR_6->midi_pitchbend;
  int VAR_11;

  if (VAR_10 < -0x2000)
   VAR_10 = -0x2000;
  if (VAR_10 > 0x1FFF)
   VAR_10 = 0x1FFF;

  VAR_11 = VAR_10 / 0x1000;
  VAR_9 = VAR_2[VAR_8+VAR_11];
  VAR_9 += ((VAR_2[VAR_8+VAR_11+1] - VAR_9) *
    (VAR_10 % 0x1000)) / 0x1000;
 } else {
  VAR_9 = VAR_2[VAR_8];
 }

 *VAR_3 = (unsigned char) VAR_9;
 *VAR_4 = ((VAR_9 >> 8) & VAR_1) |
  ((VAR_7 << 2) & VAR_0);
}
