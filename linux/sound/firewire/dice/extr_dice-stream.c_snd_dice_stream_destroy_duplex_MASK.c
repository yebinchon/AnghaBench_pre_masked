
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {int domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_dice*,int ,unsigned int) ;

void FUNC_2(struct snd_dice *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_1(VAR_3, VAR_0, VAR_4);
  FUNC_1(VAR_3, VAR_1, VAR_4);
 }

 FUNC_0(&VAR_3->domain);
}
