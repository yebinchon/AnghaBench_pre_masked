
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (struct snd_ac97*,int) ;
 int FUNC_1 (struct snd_ac97*,int,unsigned short) ;
 int FUNC_2 (struct snd_ac97*,int,int) ;

__attribute__((used)) static void FUNC_3(struct snd_ac97 * VAR_1, int VAR_2, int VAR_3, unsigned char *VAR_4)
{
 unsigned short VAR_5, VAR_6;

 *VAR_4 = 63;
 VAR_5 = VAR_0 | (0x20 << VAR_3);
 FUNC_1(VAR_1, VAR_2, VAR_5);
 VAR_6 = FUNC_0(VAR_1, VAR_2);
 if (VAR_5 != VAR_6) {
  *VAR_4 = 31;
 }

 FUNC_2(VAR_1, VAR_2, VAR_0);
}
