
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer_oss_slot {scalar_t__ put_recsrc; } ;
struct snd_mixer_oss_file {struct snd_mixer_oss* mixer; } ;
struct snd_mixer_oss {int mask_recsrc; struct snd_mixer_oss_slot* slots; scalar_t__ get_recsrc; scalar_t__ put_recsrc; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_mixer_oss_file *VAR_1)
{
 struct snd_mixer_oss *VAR_2 = VAR_1->mixer;
 int VAR_3 = 0;

 if (VAR_2 == ((void*)0))
  return -VAR_0;
 if (VAR_2->put_recsrc && VAR_2->get_recsrc) {
  VAR_3 = VAR_2->mask_recsrc;
 } else {
  struct snd_mixer_oss_slot *VAR_4;
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < 31; VAR_5++) {
   VAR_4 = &VAR_2->slots[VAR_5];
   if (VAR_4->put_recsrc)
    VAR_3 |= 1 << VAR_5;
  }
 }
 return VAR_3;
}
