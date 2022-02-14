
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int card_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_card*) ;

int FUNC_2(struct snd_card *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;
 FUNC_0(&VAR_0->card_dev);
 return 0;
}
