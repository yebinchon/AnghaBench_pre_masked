
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer_oss_file {struct snd_mixer_oss* mixer; } ;
struct snd_mixer_oss {scalar_t__ put_recsrc; scalar_t__ get_recsrc; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct snd_mixer_oss_file *VAR_2)
{
 struct snd_mixer_oss *VAR_3 = VAR_2->mixer;
 int VAR_4 = 0;

 if (VAR_3 == ((void*)0))
  return -VAR_0;
 if (VAR_3->get_recsrc && VAR_3->put_recsrc)
  VAR_4 |= VAR_1;
 return VAR_4;
}
