
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_harmony {struct snd_card* card; } ;
struct snd_card {int mixername; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_card*,int ) ;
 int FUNC_2 (int *,struct snd_harmony*) ;
 int * VAR_2 ;
 int FUNC_3 (struct snd_harmony*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct snd_harmony *VAR_3)
{
 struct snd_card *VAR_4;
 int VAR_5, VAR_6;

 if (FUNC_0(!VAR_3))
  return -VAR_0;
 VAR_4 = VAR_3->card;
 FUNC_4(VAR_4->mixername, "Harmony Gain control interface");

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_6 = FUNC_1(VAR_4,
      FUNC_2(&VAR_2[VAR_5], VAR_3));
  if (VAR_6 < 0)
   return VAR_6;
 }

 FUNC_3(VAR_3);

 return 0;
}
