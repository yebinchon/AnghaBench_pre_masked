
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;
struct snd_ac97 {struct snd_ice1712* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 unsigned char FUNC_1 (int ) ;
 unsigned short FUNC_2 (int ) ;
 int FUNC_3 (unsigned char,int ) ;

__attribute__((used)) static unsigned short FUNC_4(struct snd_ac97 *VAR_6,
      unsigned short VAR_7)
{
 struct snd_ice1712 *VAR_8 = VAR_6->private_data;
 int VAR_9;
 unsigned char VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 < 0x10000; VAR_9++) {
  VAR_10 = FUNC_1(FUNC_0(VAR_8, VAR_0));
  if (VAR_10 & (VAR_5 | VAR_3))
   continue;
  if (!(VAR_10 & VAR_4))
   continue;
  break;
 }
 FUNC_3(VAR_7, FUNC_0(VAR_8, VAR_2));
 FUNC_3(VAR_10 | VAR_3, FUNC_0(VAR_8, VAR_0));
 for (VAR_9 = 0; VAR_9 < 0x10000; VAR_9++)
  if ((FUNC_1(FUNC_0(VAR_8, VAR_0)) & VAR_3) == 0)
   break;
 if (VAR_9 >= 0x10000)
  return ~0;
 return FUNC_2(FUNC_0(VAR_8, VAR_1));
}
