
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,struct snd_soc_jack*,void*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_0,
      struct snd_soc_jack *VAR_1, void *VAR_2)
{
 if (VAR_1)
  FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  FUNC_0(VAR_0);

 return 0;
}
