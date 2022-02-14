
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dummy; } ;
struct snd_ac97_template {int scaps; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;

void FUNC_3(struct snd_card *VAR_1,
      struct snd_ac97_template *VAR_2)
{
 if (!FUNC_0())
  return;


 if (FUNC_1(FUNC_2(0xb3)))
  VAR_2->scaps |= VAR_0;
}
