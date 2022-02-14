
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_akm4xxx {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char FUNC_0 (struct snd_akm4xxx*,int ,int) ;
 int FUNC_1 (struct snd_akm4xxx*,int) ;
 int FUNC_2 (struct snd_akm4xxx*,int ,int,unsigned char) ;

__attribute__((used)) static void FUNC_3(struct snd_akm4xxx *VAR_2, unsigned int VAR_3)
{
 unsigned char VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8;

 if (VAR_3 == 0)
  return;


 if (VAR_3 > 96000)
  VAR_6 = 2;
 else if (VAR_3 > 48000)
  VAR_6 = 1;
 else
  VAR_6 = 0;

 if (VAR_2->type == VAR_0 || VAR_2->type == VAR_1) {
  VAR_7 = 2;
  VAR_8 = 4;
 } else {
  VAR_7 = 1;
  VAR_8 = 3;
 }
 VAR_5 = FUNC_0(VAR_2, 0, VAR_7);
 VAR_4 = (VAR_5 >> VAR_8) & 0x03;
 if (VAR_4 == VAR_6)
  return;


 FUNC_1(VAR_2, 1);
 VAR_5 = FUNC_0(VAR_2, 0, VAR_7);
 VAR_5 &= ~(0x03 << VAR_8);
 VAR_5 |= VAR_6 << VAR_8;

 FUNC_2(VAR_2, 0, VAR_7, VAR_5);
 FUNC_1(VAR_2, 0);
}
