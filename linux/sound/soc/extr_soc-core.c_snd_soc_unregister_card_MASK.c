
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int name; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_soc_card*,int) ;

int FUNC_4(struct snd_soc_card *VAR_1)
{
 FUNC_1(&VAR_0);
 FUNC_3(VAR_1, 1);
 FUNC_2(&VAR_0);
 FUNC_0(VAR_1->dev, "ASoC: Unregistered card '%s'\n", VAR_1->name);

 return 0;
}
