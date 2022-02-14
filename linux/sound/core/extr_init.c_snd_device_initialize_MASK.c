
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int card_dev; } ;
struct device {int release; int class; int * parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int VAR_1 ;

void FUNC_1(struct device *VAR_2, struct snd_card *VAR_3)
{
 FUNC_0(VAR_2);
 if (VAR_3)
  VAR_2->parent = &VAR_3->card_dev;
 VAR_2->class = VAR_1;
 VAR_2->release = VAR_0;
}
