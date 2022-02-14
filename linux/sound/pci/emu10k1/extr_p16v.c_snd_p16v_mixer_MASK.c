
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {struct snd_card* card; } ;
struct snd_card {int dummy; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (struct snd_card*,int ) ;
 int FUNC_2 (int *,struct snd_emu10k1*) ;

int FUNC_3(struct snd_emu10k1 *VAR_1)
{
 int VAR_2, VAR_3;
        struct snd_card *VAR_4 = VAR_1->card;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if ((VAR_3 = FUNC_1(VAR_4, FUNC_2(&VAR_0[VAR_2],
         VAR_1))) < 0)
   return VAR_3;
 }
        return 0;
}
