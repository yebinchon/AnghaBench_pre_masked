
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int shortname; int mixername; } ;
struct snd_amd7930 {struct snd_card* card; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_card*,int ) ;
 int FUNC_3 (int *,struct snd_amd7930*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_amd7930 *VAR_2)
{
 struct snd_card *VAR_3;
 int VAR_4, VAR_5;

 if (FUNC_1(!VAR_2 || !VAR_2->card))
  return -VAR_0;

 VAR_3 = VAR_2->card;
 FUNC_4(VAR_3->mixername, VAR_3->shortname);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if ((VAR_5 = FUNC_2(VAR_3,
           FUNC_3(&VAR_1[VAR_4], VAR_2))) < 0)
   return VAR_5;
 }

 return 0;
}
