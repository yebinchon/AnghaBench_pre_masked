
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer_oss_slot {int number; int (* private_free ) (struct snd_mixer_oss_slot*) ;} ;


 int FUNC_0 (struct snd_mixer_oss_slot*,int ,int) ;
 int FUNC_1 (struct snd_mixer_oss_slot*) ;

__attribute__((used)) static void FUNC_2(struct snd_mixer_oss_slot *VAR_0)
{
 int VAR_1 = VAR_0->number;
 if (VAR_0->private_free)
  VAR_0->private_free(VAR_0);
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->number = VAR_1;
}
