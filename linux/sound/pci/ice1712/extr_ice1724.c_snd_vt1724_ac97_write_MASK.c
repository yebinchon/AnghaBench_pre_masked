
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;
struct snd_ac97 {unsigned char num; struct snd_ice1712* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_1 (unsigned char,int ) ;
 int FUNC_2 (unsigned short,int ) ;
 unsigned char FUNC_3 (struct snd_ice1712*) ;
 int FUNC_4 (struct snd_ice1712*,unsigned char) ;

__attribute__((used)) static void FUNC_5(struct snd_ac97 *VAR_5,
      unsigned short VAR_6,
      unsigned short VAR_7)
{
 struct snd_ice1712 *VAR_8 = VAR_5->private_data;
 unsigned char VAR_9;

 VAR_9 = FUNC_3(VAR_8);
 VAR_9 &= ~VAR_3;
 VAR_9 |= VAR_5->num;
 FUNC_1(VAR_6, FUNC_0(VAR_8, VAR_2));
 FUNC_2(VAR_7, FUNC_0(VAR_8, VAR_1));
 FUNC_1(VAR_9 | VAR_4, FUNC_0(VAR_8, VAR_0));
 FUNC_4(VAR_8, VAR_4);
}
