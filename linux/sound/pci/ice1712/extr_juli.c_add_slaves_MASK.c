
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_card {int dummy; } ;


 struct snd_kcontrol* FUNC_0 (struct snd_card*,char* const) ;
 int FUNC_1 (struct snd_kcontrol*,struct snd_kcontrol*) ;

__attribute__((used)) static void FUNC_2(struct snd_card *VAR_0,
         struct snd_kcontrol *VAR_1,
         char * const *VAR_2)
{
 for (; *VAR_2; VAR_2++) {
  struct snd_kcontrol *VAR_3 = FUNC_0(VAR_0, *VAR_2);

  if (VAR_3) {

   FUNC_1(VAR_1, VAR_3);
  }
 }
}
