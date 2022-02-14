
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer_oss_file {int * mixer; struct snd_card* card; } ;
struct snd_card {int * mixer_oss; } ;
typedef int fmixer ;


 int VAR_0 ;
 int FUNC_0 (struct snd_mixer_oss_file*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_mixer_oss_file*,unsigned int,unsigned long) ;

int FUNC_3(struct snd_card *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 struct snd_mixer_oss_file VAR_4;

 if (FUNC_1(!VAR_1))
  return -VAR_0;
 if (VAR_1->mixer_oss == ((void*)0))
  return -VAR_0;
 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.card = VAR_1;
 VAR_4.mixer = VAR_1->mixer_oss;
 return FUNC_2(&VAR_4, VAR_2, VAR_3);
}
