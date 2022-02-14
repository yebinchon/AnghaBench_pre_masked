
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int id; char const* sname; int num_kcontrols; int (* event ) (struct snd_soc_dapm_widget*,struct snd_kcontrol*,int) ;unsigned short event_flags; void* priv; struct snd_kcontrol_new* kcontrol_news; scalar_t__ shift; int reg; int name; } ;
struct snd_kcontrol_new {int dummy; } ;
struct device {int dummy; } ;
typedef enum snd_soc_dapm_type { ____Placeholder_snd_soc_dapm_type } snd_soc_dapm_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char const*,int ) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_3,
  struct snd_soc_dapm_widget *VAR_4, enum snd_soc_dapm_type VAR_5,
  void *VAR_6, const char *VAR_7, const char *VAR_8,
  struct snd_kcontrol_new *VAR_9, int VAR_10,
  int (*VAR_11)(struct snd_soc_dapm_widget *,
  struct snd_kcontrol *, int), unsigned short VAR_12)
{
 VAR_4->id = VAR_5;
 VAR_4->name = FUNC_0(VAR_3, VAR_7, VAR_1);
 if (!VAR_4->name)
  return -VAR_0;

 VAR_4->sname = VAR_8;
 VAR_4->reg = VAR_2;
 VAR_4->shift = 0;
 VAR_4->kcontrol_news = VAR_9;
 VAR_4->num_kcontrols = VAR_10;
 VAR_4->priv = VAR_6;
 VAR_4->event = VAR_11;
 VAR_4->event_flags = VAR_12;

 return 0;
}
