
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniperif {int num_ctrls; struct snd_kcontrol_new* snd_ctrls; int id; } ;
struct TYPE_2__ {struct uniperif* uni; } ;
struct sti_uniperiph_data {TYPE_1__ dai_data; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_kcontrol_new {int device; int index; } ;


 int FUNC_0 (struct snd_soc_dai*,struct snd_kcontrol_new*,int) ;
 struct sti_uniperiph_data* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0)
{
 struct sti_uniperiph_data *VAR_1 = FUNC_1(VAR_0);
 struct uniperif *VAR_2 = VAR_1->dai_data.uni;
 struct snd_kcontrol_new *VAR_3;
 int VAR_4;

 if (!VAR_2->num_ctrls)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_ctrls; VAR_4++) {




  VAR_3 = &VAR_2->snd_ctrls[VAR_4];
  VAR_3->index = VAR_2->id;
  VAR_3->device = VAR_2->id;
 }

 return FUNC_0(VAR_0, VAR_2->snd_ctrls, VAR_2->num_ctrls);
}
