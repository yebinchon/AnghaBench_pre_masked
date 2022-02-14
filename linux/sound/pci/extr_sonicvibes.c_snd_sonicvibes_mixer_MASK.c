
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonicvibes {struct snd_card* card; } ;
struct snd_kcontrol {int private_free; } ;
struct snd_card {int mixername; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_3 (int *,struct sonicvibes*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct sonicvibes *VAR_3)
{
 struct snd_card *VAR_4;
 struct snd_kcontrol *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 if (FUNC_1(!VAR_3 || !VAR_3->card))
  return -VAR_0;
 VAR_4 = VAR_3->card;
 FUNC_4(VAR_4->mixername, "S3 SonicVibes");

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  if ((VAR_7 = FUNC_2(VAR_4, VAR_5 = FUNC_3(&VAR_1[VAR_6], VAR_3))) < 0)
   return VAR_7;
  switch (VAR_6) {
  case 0:
  case 1: VAR_5->private_free = VAR_2; break;
  }
 }
 return 0;
}
