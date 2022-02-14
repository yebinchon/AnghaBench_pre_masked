
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcsp {struct snd_card* card; } ;
struct snd_card {int mixername; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct snd_pcsp*,int ,int ) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct snd_pcsp *VAR_2, int VAR_3)
{
 int VAR_4;
 struct snd_card *VAR_5 = VAR_2->card;

 if (!VAR_3) {
  VAR_4 = FUNC_1(VAR_2, VAR_0,
   FUNC_0(VAR_0));
  if (VAR_4 < 0)
   return VAR_4;
 }
 VAR_4 = FUNC_1(VAR_2, VAR_1,
  FUNC_0(VAR_1));
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_2(VAR_5->mixername, "PC-Speaker");

 return 0;
}
