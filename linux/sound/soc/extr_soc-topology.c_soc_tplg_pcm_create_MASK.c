
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_tplg {int dummy; } ;
struct snd_soc_tplg_pcm {int dummy; } ;


 int FUNC_0 (struct soc_tplg*,struct snd_soc_tplg_pcm*) ;
 int FUNC_1 (struct soc_tplg*,struct snd_soc_tplg_pcm*) ;

__attribute__((used)) static int FUNC_2(struct soc_tplg *VAR_0,
 struct snd_soc_tplg_pcm *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_1(VAR_0, VAR_1);
}
