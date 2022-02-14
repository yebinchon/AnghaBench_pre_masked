
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int (* remove ) (struct snd_soc_card*) ;int dapm; int * snd_card; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_soc_card*) ;
 int FUNC_3 (struct snd_soc_card*) ;
 int FUNC_4 (struct snd_soc_card*) ;
 int FUNC_5 (struct snd_soc_card*) ;
 int FUNC_6 (struct snd_soc_card*) ;
 int FUNC_7 (struct snd_soc_card*) ;

__attribute__((used)) static void FUNC_8(struct snd_soc_card *VAR_0)
{

 if (VAR_0->snd_card) {
  FUNC_0(VAR_0->snd_card);
  VAR_0->snd_card = ((void*)0);
 }


 FUNC_4(VAR_0);
 FUNC_5(VAR_0);


 FUNC_3(VAR_0);
 FUNC_6(VAR_0);

 FUNC_1(&VAR_0->dapm);
 FUNC_2(VAR_0);


 if (VAR_0->remove)
  VAR_0->remove(VAR_0);
}
