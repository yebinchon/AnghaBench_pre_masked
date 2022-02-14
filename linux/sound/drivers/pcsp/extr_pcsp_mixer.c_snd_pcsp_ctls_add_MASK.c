
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcsp {struct snd_card* card; } ;
struct snd_kcontrol_new {int dummy; } ;
struct snd_card {int dummy; } ;


 int FUNC_0 (struct snd_card*,int ) ;
 int FUNC_1 (struct snd_kcontrol_new*,struct snd_pcsp*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcsp *VAR_0,
        struct snd_kcontrol_new *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 struct snd_card *VAR_5 = VAR_0->card;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(VAR_5, FUNC_1(VAR_1 + VAR_3, VAR_0));
  if (VAR_4 < 0)
   return VAR_4;
 }
 return 0;
}
