
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer_oss_slot {int (* get_recsrc ) (struct snd_mixer_oss_file*,struct snd_mixer_oss_slot*,int*) ;int (* put_recsrc ) (struct snd_mixer_oss_file*,struct snd_mixer_oss_slot*,int) ;} ;
struct snd_mixer_oss_file {struct snd_mixer_oss* mixer; } ;
struct snd_mixer_oss {int oss_recsrc; struct snd_mixer_oss_slot* slots; int (* get_recsrc ) (struct snd_mixer_oss_file*,unsigned int*) ;int (* put_recsrc ) (struct snd_mixer_oss_file*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_mixer_oss_file*,int ) ;
 int FUNC_2 (struct snd_mixer_oss_file*,unsigned int*) ;
 int FUNC_3 (struct snd_mixer_oss_file*,struct snd_mixer_oss_slot*,int) ;
 int FUNC_4 (struct snd_mixer_oss_file*,struct snd_mixer_oss_slot*,int*) ;

__attribute__((used)) static int FUNC_5(struct snd_mixer_oss_file *VAR_1, int VAR_2)
{
 struct snd_mixer_oss *VAR_3 = VAR_1->mixer;
 struct snd_mixer_oss_slot *VAR_4;
 int VAR_5, VAR_6;
 unsigned int VAR_7;
 int VAR_8 = 0;

 if (VAR_3 == ((void*)0))
  return -VAR_0;
 if (VAR_3->get_recsrc && VAR_3->put_recsrc) {
  if (VAR_2 & ~VAR_3->oss_recsrc)
   VAR_2 &= ~VAR_3->oss_recsrc;
  VAR_3->put_recsrc(VAR_1, FUNC_0(~VAR_2));
  VAR_3->get_recsrc(VAR_1, &VAR_7);
  VAR_8 = 1 << VAR_7;
 }
 for (VAR_5 = 0; VAR_5 < 31; VAR_5++) {
  VAR_4 = &VAR_3->slots[VAR_5];
  if (VAR_4->put_recsrc) {
   VAR_6 = (VAR_2 & (1 << VAR_5)) ? 1 : 0;
   VAR_4->put_recsrc(VAR_1, VAR_4, VAR_6);
  }
 }
 if (! VAR_8) {
  for (VAR_5 = 0; VAR_5 < 31; VAR_5++) {
   VAR_4 = &VAR_3->slots[VAR_5];
   if (VAR_4->get_recsrc) {
    VAR_6 = 0;
    VAR_4->get_recsrc(VAR_1, VAR_4, &VAR_6);
    if (VAR_6)
     VAR_8 |= 1 << VAR_5;
   }
  }
 }
 return VAR_8;
}
