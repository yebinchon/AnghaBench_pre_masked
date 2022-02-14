
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dev; int * bus; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_ac97*) ;

void FUNC_3(struct snd_ac97 *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_0(&VAR_0->dev);
 VAR_0->bus = ((void*)0);
 FUNC_1(&VAR_0->dev);
}
