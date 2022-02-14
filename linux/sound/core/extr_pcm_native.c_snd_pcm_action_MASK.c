
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_group {int dummy; } ;
struct action_ops {int dummy; } ;


 int FUNC_0 (struct action_ops const*,struct snd_pcm_substream*,int,int) ;
 int FUNC_1 (struct action_ops const*,struct snd_pcm_substream*,int) ;
 int FUNC_2 (struct snd_pcm_group*,struct snd_pcm_substream*) ;
 struct snd_pcm_group* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(const struct action_ops *VAR_0,
     struct snd_pcm_substream *VAR_1,
     int VAR_2)
{
 struct snd_pcm_group *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, 1);
 else
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_3, VAR_1);
 return VAR_4;
}
