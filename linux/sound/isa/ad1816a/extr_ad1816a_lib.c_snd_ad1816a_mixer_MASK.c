
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int mixername; } ;
struct snd_ad1816a {struct snd_card* card; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_ad1816a*) ;
 int * VAR_1 ;
 int FUNC_3 (struct snd_card*,int ) ;
 int FUNC_4 (int *,struct snd_ad1816a*) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct snd_ad1816a *VAR_2)
{
 struct snd_card *VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 if (FUNC_1(!VAR_2 || !VAR_2->card))
  return -VAR_0;

 VAR_3 = VAR_2->card;

 FUNC_5(VAR_3->mixername, FUNC_2(VAR_2));

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if ((VAR_5 = FUNC_3(VAR_3, FUNC_4(&VAR_1[VAR_4], VAR_2))) < 0)
   return VAR_5;
 }
 return 0;
}
