
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int name; } ;
struct snd_card {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ,int) ;
 int FUNC_1 (struct snd_card*,int ) ;
 int FUNC_2 (struct snd_kcontrol_new const*,void*,int ,char const*) ;

__attribute__((used)) static int FUNC_3(struct snd_card *VAR_0, struct device *VAR_1,
 const struct snd_kcontrol_new *VAR_2, int VAR_3,
 const char *VAR_4, void *VAR_5)
{
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  const struct snd_kcontrol_new *VAR_8 = &VAR_2[VAR_7];

  VAR_6 = FUNC_1(VAR_0, FUNC_2(VAR_8, VAR_5,
           VAR_8->name, VAR_4));
  if (VAR_6 < 0) {
   FUNC_0(VAR_1, "ASoC: Failed to add %s: %d\n",
    VAR_8->name, VAR_6);
   return VAR_6;
  }
 }

 return 0;
}
