
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ac97 {TYPE_1__* bus; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {TYPE_2__* card; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const* const) ;
 struct snd_kcontrol* FUNC_1 (struct snd_ac97*,char const* const) ;
 int FUNC_2 (TYPE_2__*,struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_kcontrol*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_4 (char*,unsigned int const*) ;

__attribute__((used)) static int FUNC_5(struct snd_ac97 *VAR_1, char *VAR_2,
    const unsigned int *VAR_3,
    const char * const *VAR_4)
{
 struct snd_kcontrol *VAR_5;
 const char * const *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (!VAR_5)
  return -VAR_0;
 VAR_7 = FUNC_2(VAR_1->bus->card, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 for (VAR_6 = VAR_4; *VAR_6; VAR_6++) {
  struct snd_kcontrol *VAR_8;

  VAR_8 = FUNC_1(VAR_1, *VAR_6);
  if (!VAR_8) {
   FUNC_0(VAR_1->bus->card->dev,
    "Cannot find slave %s, skipped\n", *VAR_6);
   continue;
  }
  VAR_7 = FUNC_3(VAR_5, VAR_8);
  if (VAR_7 < 0)
   return VAR_7;
 }
 return 0;
}
