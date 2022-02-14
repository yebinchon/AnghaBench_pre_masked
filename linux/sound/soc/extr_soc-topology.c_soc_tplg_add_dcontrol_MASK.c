
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int name; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_card {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,...) ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_2 (struct snd_kcontrol_new const*,void*,int ,char const*) ;

__attribute__((used)) static int FUNC_3(struct snd_card *VAR_1, struct device *VAR_2,
 const struct snd_kcontrol_new *VAR_3, const char *VAR_4,
 void *VAR_5, struct snd_kcontrol **VAR_6)
{
 int VAR_7;

 *VAR_6 = FUNC_2(VAR_3, VAR_5, VAR_3->name, VAR_4);
 if (*VAR_6 == ((void*)0)) {
  FUNC_0(VAR_2, "ASoC: Failed to create new kcontrol %s\n",
  VAR_3->name);
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_1, *VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(VAR_2, "ASoC: Failed to add %s: %d\n",
   VAR_3->name, VAR_7);
  return VAR_7;
 }

 return 0;
}
