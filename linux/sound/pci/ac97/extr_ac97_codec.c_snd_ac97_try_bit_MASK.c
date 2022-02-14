
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;


 unsigned short FUNC_0 (struct snd_ac97*,int) ;
 int FUNC_1 (struct snd_ac97*,int,unsigned short) ;
 int FUNC_2 (struct snd_ac97*,int,unsigned short) ;

__attribute__((used)) static int FUNC_3(struct snd_ac97 * VAR_0, int VAR_1, int VAR_2)
{
 unsigned short VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = 1 << VAR_2;
 VAR_5 = FUNC_0(VAR_0, VAR_1);
 VAR_4 = VAR_5 ^ VAR_3;
 FUNC_1(VAR_0, VAR_1, VAR_4);
 VAR_6 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_0, VAR_1, VAR_5);
 return VAR_6 == VAR_4;
}
