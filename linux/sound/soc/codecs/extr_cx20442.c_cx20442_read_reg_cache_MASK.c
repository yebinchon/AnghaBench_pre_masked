
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct cx20442_priv {unsigned int reg_cache; } ;


 unsigned int VAR_0 ;
 struct cx20442_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static unsigned int FUNC_1(struct snd_soc_component *VAR_1,
        unsigned int VAR_2)
{
 struct cx20442_priv *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 >= 1)
  return -VAR_0;

 return VAR_3->reg_cache;
}
