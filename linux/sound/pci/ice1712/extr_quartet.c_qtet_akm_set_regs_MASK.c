
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_akm4xxx {int num_chips; } ;


 unsigned char FUNC_0 (struct snd_akm4xxx*,int,unsigned char) ;
 int FUNC_1 (struct snd_akm4xxx*,int,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct snd_akm4xxx *VAR_0, unsigned char VAR_1,
  unsigned char VAR_2, unsigned char VAR_3)
{
 unsigned char VAR_4;
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_0->num_chips; VAR_5++) {
  VAR_4 = FUNC_0(VAR_0, VAR_5, VAR_1);

  VAR_4 &= ~VAR_2;

  VAR_4 |= VAR_3;
  FUNC_1(VAR_0, VAR_5, VAR_1, VAR_4);
 }
}
