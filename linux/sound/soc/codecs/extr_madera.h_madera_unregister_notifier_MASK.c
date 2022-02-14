
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct notifier_block {int dummy; } ;
struct madera_priv {struct madera* madera; } ;
struct madera {int notifier; } ;


 int FUNC_0 (int *,struct notifier_block*) ;
 struct madera_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static inline int
FUNC_2(struct snd_soc_component *VAR_0,
      struct notifier_block *VAR_1)
{
 struct madera_priv *VAR_2 = FUNC_1(VAR_0);
 struct madera *VAR_3 = VAR_2->madera;

 return FUNC_0(&VAR_3->notifier, VAR_1);
}
