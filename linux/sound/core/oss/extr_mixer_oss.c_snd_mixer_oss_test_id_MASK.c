
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer_oss {struct snd_card* card; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_id {int index; int name; int iface; } ;
struct snd_card {int dummy; } ;
typedef int id ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ctl_elem_id*,int ,int) ;
 struct snd_kcontrol* FUNC_1 (struct snd_card*,struct snd_ctl_elem_id*) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static struct snd_kcontrol *FUNC_3(struct snd_mixer_oss *VAR_1, const char *VAR_2, int VAR_3)
{
 struct snd_card *VAR_4 = VAR_1->card;
 struct snd_ctl_elem_id VAR_5;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.iface = VAR_0;
 FUNC_2(VAR_5.name, VAR_2, sizeof(VAR_5.name));
 VAR_5.index = VAR_3;
 return FUNC_1(VAR_4, &VAR_5);
}
