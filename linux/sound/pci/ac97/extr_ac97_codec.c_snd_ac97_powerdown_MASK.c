
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {unsigned short* regs; int scaps; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (struct snd_ac97*) ;
 scalar_t__ FUNC_1 (struct snd_ac97*) ;
 int FUNC_2 (struct snd_ac97*,size_t,unsigned short) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct snd_ac97 *VAR_20)
{
 unsigned short VAR_21;

 if (FUNC_0(VAR_20)) {

  FUNC_2(VAR_20, VAR_6, 0x9f9f);
  FUNC_2(VAR_20, VAR_5, 0x9f9f);
 }


 VAR_21 = VAR_20->regs[VAR_4];
 if (VAR_20->scaps & VAR_19)
  VAR_21 |= VAR_1;
 if (VAR_20->scaps & VAR_16)
  VAR_21 |= VAR_0 | VAR_2;
 VAR_21 |= VAR_3;
 FUNC_2(VAR_20, VAR_4, VAR_21);


 if (VAR_20->scaps & VAR_18)
  VAR_21 = VAR_20->regs[VAR_15] & ~VAR_7;
 else if (! (VAR_20->scaps & VAR_17))
  VAR_21 = VAR_20->regs[VAR_15] | VAR_7;
 VAR_21 |= VAR_14;
 VAR_21 |= VAR_8 | VAR_9;
 FUNC_2(VAR_20, VAR_15, VAR_21);
 FUNC_3(100);
 VAR_21 |= VAR_10;
 FUNC_2(VAR_20, VAR_15, VAR_21);
 if (FUNC_1(VAR_20)) {
  VAR_21 |= VAR_11;
  FUNC_2(VAR_20, VAR_15, VAR_21);
  FUNC_3(100);


  VAR_21 |= VAR_12 | VAR_13;
  FUNC_2(VAR_20, VAR_15, VAR_21);
 }
}
