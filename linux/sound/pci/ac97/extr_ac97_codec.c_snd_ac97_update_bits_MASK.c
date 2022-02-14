
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int reg_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_ac97*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_3 (struct snd_ac97*,unsigned short) ;

int FUNC_4(struct snd_ac97 *VAR_1, unsigned short VAR_2, unsigned short VAR_3, unsigned short VAR_4)
{
 int VAR_5;

 if (!FUNC_3(VAR_1, VAR_2))
  return -VAR_0;
 FUNC_0(&VAR_1->reg_mutex);
 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1(&VAR_1->reg_mutex);
 return VAR_5;
}
