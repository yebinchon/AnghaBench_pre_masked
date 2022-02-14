
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8000 {int fm_chorus_depth; int fm_reverb_depth; int reg_lock; } ;


 int FUNC_0 (struct snd_emu8000*,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct snd_emu8000*,int,int) ;
 int FUNC_3 (struct snd_emu8000*,int,int) ;
 int FUNC_4 (struct snd_emu8000*) ;
 int FUNC_5 (struct snd_emu8000*) ;
 int FUNC_6 (struct snd_emu8000*,int,int) ;
 int FUNC_7 (struct snd_emu8000*,int,int) ;
 int FUNC_8 (struct snd_emu8000*) ;
 int FUNC_9 (struct snd_emu8000*,int,int) ;
 int FUNC_10 (struct snd_emu8000*,int,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (struct snd_emu8000*,int ,int ,int) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;

void
FUNC_16(struct snd_emu8000 *VAR_0)
{
 unsigned long VAR_1;





 FUNC_6(VAR_0, 30, 0x80);
 FUNC_7(VAR_0, 30, 0xFFFFFFE0);
 FUNC_3(VAR_0, 30, 0x00FFFFE8 | (VAR_0->fm_chorus_depth << 24));
 FUNC_9(VAR_0, 30, (VAR_0->fm_reverb_depth << 8));
 FUNC_2(VAR_0, 30, 0);
 FUNC_0(VAR_0, 30, 0x00FFFFE3);


 FUNC_6(VAR_0, 31, 0x80);
 FUNC_7(VAR_0, 31, 0x00FFFFF0);
 FUNC_3(VAR_0, 31, 0x00FFFFF8 | (VAR_0->fm_chorus_depth << 24));
 FUNC_9(VAR_0, 31, (VAR_0->fm_reverb_depth << 8));
 FUNC_2(VAR_0, 31, 0x8000);
 FUNC_0(VAR_0, 31, 0x00FFFFF3);

 FUNC_13((VAR_0), FUNC_4(VAR_0), FUNC_1(1, (30)), 0);

 FUNC_14(&VAR_0->reg_lock, VAR_1);
 while (!(FUNC_11(FUNC_8(VAR_0)) & 0x1000))
  ;
 while ((FUNC_11(FUNC_8(VAR_0)) & 0x1000))
  ;
 FUNC_15(&VAR_0->reg_lock, VAR_1);
 FUNC_13((VAR_0), FUNC_4(VAR_0), FUNC_1(1, (30)), 0x4828);

 FUNC_12(0x3C, FUNC_8(VAR_0));
 FUNC_12(0, FUNC_5(VAR_0));


 FUNC_10(VAR_0, 30, 0x8000FFFF);
 FUNC_10(VAR_0, 31, 0x8000FFFF);
}
