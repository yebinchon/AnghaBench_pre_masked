
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer_oss_slot {int (* get_recsrc ) (struct snd_mixer_oss_file*,struct snd_mixer_oss_slot*,int*) ;} ;
struct snd_mixer_oss_file {struct snd_mixer_oss* mixer; } ;
struct snd_mixer_oss {int (* get_recsrc ) (struct snd_mixer_oss_file*,unsigned int*) ;int oss_recsrc; struct snd_mixer_oss_slot* slots; scalar_t__ put_recsrc; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_mixer_oss_file*,unsigned int*) ;
 int FUNC_1 (struct snd_mixer_oss_file*,struct snd_mixer_oss_slot*,int*) ;

__attribute__((used)) static int FUNC_2(struct snd_mixer_oss_file *VAR_1)
{
 struct snd_mixer_oss *VAR_2 = VAR_1->mixer;
 int VAR_3 = 0;

 if (VAR_2 == ((void*)0))
  return -VAR_0;
 if (VAR_2->put_recsrc && VAR_2->get_recsrc) {
  int VAR_4;
  unsigned int VAR_5;
  if ((VAR_4 = VAR_2->get_recsrc(VAR_1, &VAR_5)) < 0)
   return VAR_4;
  VAR_3 = 1 << VAR_5;
 } else {
  struct snd_mixer_oss_slot *VAR_6;
  int VAR_7;
  for (VAR_7 = 0; VAR_7 < 31; VAR_7++) {
   VAR_6 = &VAR_2->slots[VAR_7];
   if (VAR_6->get_recsrc) {
    int VAR_8 = 0;
    VAR_6->get_recsrc(VAR_1, VAR_6, &VAR_8);
    if (VAR_8)
     VAR_3 |= 1 << VAR_7;
   }
  }
 }
 return VAR_2->oss_recsrc = VAR_3;
}
