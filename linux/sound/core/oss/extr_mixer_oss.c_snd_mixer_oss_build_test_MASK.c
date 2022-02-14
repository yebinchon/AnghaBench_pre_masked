
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_mixer_oss {struct snd_card* card; } ;
struct TYPE_2__ {int numid; } ;
struct snd_kcontrol {int (* info ) (struct snd_kcontrol*,struct snd_ctl_elem_info*) ;TYPE_1__ id; } ;
struct snd_ctl_elem_info {scalar_t__ count; } ;
struct snd_card {int controls_rwsem; } ;
struct slot {scalar_t__ channels; int present; int * numid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_ctl_elem_info*) ;
 struct snd_ctl_elem_info* FUNC_2 (int,int ) ;
 struct snd_kcontrol* FUNC_3 (struct snd_mixer_oss*,char const*,int) ;
 int FUNC_4 (struct snd_kcontrol*,struct snd_ctl_elem_info*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_mixer_oss *VAR_2, struct slot *VAR_3, const char *VAR_4, int VAR_5, int VAR_6)
{
 struct snd_ctl_elem_info *VAR_7;
 struct snd_kcontrol *VAR_8;
 struct snd_card *VAR_9 = VAR_2->card;
 int VAR_10;

 FUNC_0(&VAR_9->controls_rwsem);
 VAR_8 = FUNC_3(VAR_2, VAR_4, VAR_5);
 if (VAR_8 == ((void*)0)) {
  FUNC_5(&VAR_9->controls_rwsem);
  return 0;
 }
 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (! VAR_7) {
  FUNC_5(&VAR_9->controls_rwsem);
  return -VAR_0;
 }
 if ((VAR_10 = VAR_8->info(VAR_8, VAR_7)) < 0) {
  FUNC_5(&VAR_9->controls_rwsem);
  FUNC_1(VAR_7);
  return VAR_10;
 }
 VAR_3->numid[VAR_6] = VAR_8->id.numid;
 FUNC_5(&VAR_9->controls_rwsem);
 if (VAR_7->count > VAR_3->channels)
  VAR_3->channels = VAR_7->count;
 VAR_3->present |= 1 << VAR_6;
 FUNC_1(VAR_7);
 return 0;
}
