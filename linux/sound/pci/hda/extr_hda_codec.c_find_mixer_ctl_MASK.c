
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_id {int device; int index; int name; int iface; } ;
struct hda_codec {int card; } ;
typedef int id ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ctl_elem_id*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 struct snd_kcontrol* FUNC_2 (int ,struct snd_ctl_elem_id*) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static struct snd_kcontrol *
FUNC_5(struct hda_codec *VAR_1, const char *VAR_2, int VAR_3, int VAR_4)
{
 struct snd_ctl_elem_id VAR_5;
 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.iface = VAR_0;
 VAR_5.device = VAR_3;
 VAR_5.index = VAR_4;
 if (FUNC_1(FUNC_4(VAR_2) >= sizeof(VAR_5.name)))
  return ((void*)0);
 FUNC_3(VAR_5.name, VAR_2);
 return FUNC_2(VAR_1->card, &VAR_5);
}
