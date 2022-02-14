
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_wm8776 {int* regs; int agc_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (struct snd_wm8776*) ;
 int FUNC_1 (struct snd_wm8776*,size_t,int) ;

__attribute__((used)) static void FUNC_2(struct snd_wm8776 *VAR_12, u16 VAR_13, u16 VAR_14)
{
 u16 VAR_15 = VAR_12->regs[VAR_10] & ~VAR_8;
 u16 VAR_16 = VAR_12->regs[VAR_11] & ~VAR_9;

 switch (VAR_13) {
 case 0:
  VAR_12->agc_mode = VAR_4;
  break;
 case 1:
  VAR_16 |= VAR_9;
  VAR_12->agc_mode = VAR_3;
  break;
 case 2:
  VAR_15 |= VAR_6;
  VAR_16 |= VAR_9;
  VAR_12->agc_mode = VAR_1;
  break;
 case 3:
  VAR_15 |= VAR_5;
  VAR_16 |= VAR_9;
  VAR_12->agc_mode = VAR_0;
  break;
 case 4:
  VAR_15 |= VAR_7;
  VAR_16 |= VAR_9;
  VAR_12->agc_mode = VAR_2;
  break;
 }
 FUNC_1(VAR_12, VAR_10, VAR_15);
 FUNC_1(VAR_12, VAR_11, VAR_16);
 FUNC_0(VAR_12);
}
