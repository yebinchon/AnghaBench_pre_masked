
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_cs46xx {scalar_t__ in_suspend; struct snd_card* card; } ;
struct snd_card {int dev; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct snd_cs46xx*) ;
 int FUNC_4 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_5 (int *,struct snd_cs46xx*) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_6 (struct snd_cs46xx *VAR_1)
{







 FUNC_3(VAR_1);

 FUNC_1(VAR_1->card->dev, "initializing Hercules mixer\n");
}
