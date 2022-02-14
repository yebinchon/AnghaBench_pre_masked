
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct action_ops {int dummy; } ;


 int FUNC_0 (struct action_ops const*,struct snd_pcm_substream*,int) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(const struct action_ops *VAR_0,
       struct snd_pcm_substream *VAR_1,
       int VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_1);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_1);
 return VAR_3;
}
