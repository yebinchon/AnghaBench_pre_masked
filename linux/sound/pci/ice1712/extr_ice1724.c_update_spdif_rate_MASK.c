
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int reg_lock; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct snd_ice1712 *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_1->reg_lock, VAR_5);
 VAR_4 = VAR_3 = FUNC_1(FUNC_0(VAR_1, VAR_0));
 VAR_4 &= ~(7 << 12);
 switch (VAR_2) {
 case 44100: break;
 case 48000: VAR_4 |= 2 << 12; break;
 case 32000: VAR_4 |= 3 << 12; break;
 case 88200: VAR_4 |= 4 << 12; break;
 case 96000: VAR_4 |= 5 << 12; break;
 case 192000: VAR_4 |= 6 << 12; break;
 case 176400: VAR_4 |= 7 << 12; break;
 }
 if (VAR_3 != VAR_4)
  FUNC_4(VAR_1, VAR_4);
 FUNC_3(&VAR_1->reg_lock, VAR_5);
}
