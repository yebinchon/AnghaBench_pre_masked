
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_enum {scalar_t__ reg; unsigned int shift_l; unsigned int mask; int * texts; int items; } ;
struct snd_soc_dapm_widget {struct snd_kcontrol_new* kcontrol_news; } ;
struct snd_soc_dapm_path {int connect; int name; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_kcontrol_new {scalar_t__ private_value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,char const*) ;
 unsigned int FUNC_1 (struct soc_enum*,unsigned int) ;
 int FUNC_2 (struct snd_soc_dapm_context*,scalar_t__,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_context *VAR_2,
 struct snd_soc_dapm_path *VAR_3, const char *VAR_4,
 struct snd_soc_dapm_widget *VAR_5)
{
 const struct snd_kcontrol_new *VAR_6 = &VAR_5->kcontrol_news[0];
 struct soc_enum *VAR_7 = (struct soc_enum *)VAR_6->private_value;
 unsigned int VAR_8, VAR_9;
 int VAR_10;

 if (VAR_7->reg != VAR_1) {
  FUNC_2(VAR_2, VAR_7->reg, &VAR_8);
  VAR_8 = (VAR_8 >> VAR_7->shift_l) & VAR_7->mask;
  VAR_9 = FUNC_1(VAR_7, VAR_8);
 } else {






  VAR_9 = 0;
 }

 VAR_10 = FUNC_0(VAR_7->texts, VAR_7->items, VAR_4);
 if (VAR_10 < 0)
  return -VAR_0;

 VAR_3->name = VAR_7->texts[VAR_10];
 VAR_3->connect = (VAR_10 == VAR_9);
 return 0;

}
