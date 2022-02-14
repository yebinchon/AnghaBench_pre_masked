
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8000 {int bass_level; int treble_level; } ;


 int FUNC_0 (struct snd_emu8000*,int,unsigned short) ;
 int FUNC_1 (struct snd_emu8000*,int,unsigned short) ;
 unsigned short** VAR_0 ;
 unsigned short** VAR_1 ;

void
FUNC_2(struct snd_emu8000 *VAR_2)
{
 unsigned short VAR_3;
 int VAR_4 = VAR_2->bass_level;
 int VAR_5 = VAR_2->treble_level;

 if (VAR_4 < 0 || VAR_4 > 11 || VAR_5 < 0 || VAR_5 > 11)
  return;
 FUNC_1(VAR_2, 0x01, VAR_0[VAR_4][0]);
 FUNC_1(VAR_2, 0x11, VAR_0[VAR_4][1]);
 FUNC_0(VAR_2, 0x11, VAR_1[VAR_5][0]);
 FUNC_0(VAR_2, 0x13, VAR_1[VAR_5][1]);
 FUNC_0(VAR_2, 0x1b, VAR_1[VAR_5][2]);
 FUNC_1(VAR_2, 0x07, VAR_1[VAR_5][3]);
 FUNC_1(VAR_2, 0x0b, VAR_1[VAR_5][4]);
 FUNC_1(VAR_2, 0x0d, VAR_1[VAR_5][5]);
 FUNC_1(VAR_2, 0x17, VAR_1[VAR_5][6]);
 FUNC_1(VAR_2, 0x19, VAR_1[VAR_5][7]);
 VAR_3 = VAR_0[VAR_4][2] + VAR_1[VAR_5][8];
 FUNC_1(VAR_2, 0x15, (unsigned short)(VAR_3 + 0x0262));
 FUNC_1(VAR_2, 0x1d, (unsigned short)(VAR_3 + 0x8362));
}
