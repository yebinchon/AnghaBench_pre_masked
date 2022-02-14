
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_akm4xxx {int dummy; } ;


 unsigned char FUNC_0 (struct snd_akm4xxx*,int,int) ;
 int FUNC_1 (struct snd_akm4xxx*,int) ;
 int FUNC_2 (struct snd_akm4xxx*,int,int,unsigned char) ;

__attribute__((used)) static void FUNC_3(struct snd_akm4xxx *VAR_0, unsigned int VAR_1)
{
 unsigned char VAR_2;

 VAR_2 = (VAR_1 > 48000) ? 0x65 : 0x60;
 if (FUNC_0(VAR_0, 0, 0x02) != VAR_2 ||
     FUNC_0(VAR_0, 1, 0x02) != VAR_2) {
  FUNC_1(VAR_0, 1);
  FUNC_2(VAR_0, 0, 0x02, VAR_2);
  FUNC_2(VAR_0, 1, 0x02, VAR_2);
  FUNC_1(VAR_0, 0);
 }
}
