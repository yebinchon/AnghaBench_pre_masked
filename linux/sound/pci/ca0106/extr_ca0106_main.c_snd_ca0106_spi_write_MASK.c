
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ca0106 {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct snd_ca0106*,unsigned int,int ) ;
 int FUNC_1 (struct snd_ca0106*,unsigned int,int ,unsigned int) ;
 int FUNC_2 (int) ;

int FUNC_3(struct snd_ca0106 * VAR_1,
       unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4;
 unsigned int VAR_5, VAR_6;
 int VAR_7, VAR_8;
 VAR_5 = VAR_0;
 if (VAR_2 > 0xffff)
  return 1;
 VAR_6 = FUNC_0(VAR_1, VAR_5, 0);
 VAR_3 = (VAR_6 & ~0x3ffff) | 0x20000;
 VAR_4 = VAR_3 | 0x10000;
 FUNC_1(VAR_1, VAR_5, 0, VAR_3 | VAR_2);
 VAR_6 = FUNC_0(VAR_1, VAR_5, 0);
 FUNC_1(VAR_1, VAR_5, 0, VAR_4 | VAR_2);
 VAR_8 = 1;

 for (VAR_7 = 0; VAR_7 < 100; VAR_7++) {
  FUNC_2(10);
  VAR_6 = FUNC_0(VAR_1, VAR_5, 0);
  if (!(VAR_6 & 0x10000)) {
   VAR_8 = 0;
   break;
  }
 }
 if (VAR_8)
  return 1;
 FUNC_1(VAR_1, VAR_5, 0, VAR_3 | VAR_2);
 VAR_6 = FUNC_0(VAR_1, VAR_5, 0);
 return 0;
}
