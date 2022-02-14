
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int card_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 struct snd_card** VAR_1 ;

struct snd_card *FUNC_3(int VAR_2)
{
 struct snd_card *VAR_3;

 FUNC_1(&VAR_0);
 VAR_3 = VAR_1[VAR_2];
 if (VAR_3)
  FUNC_0(&VAR_3->card_dev);
 FUNC_2(&VAR_0);
 return VAR_3;
}
