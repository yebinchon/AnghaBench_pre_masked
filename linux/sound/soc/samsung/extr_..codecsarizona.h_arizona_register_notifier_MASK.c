
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct notifier_block {int (* notifier_call ) (struct notifier_block*,unsigned long,void*) ;} ;
struct arizona_priv {struct arizona* arizona; } ;
struct arizona {int notifier; } ;


 int FUNC_0 (int *,struct notifier_block*) ;
 struct arizona_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static inline int FUNC_2(struct snd_soc_component *VAR_0,
         struct notifier_block *VAR_1,
         int (*VAR_2)
         (struct notifier_block *VAR_3,
         unsigned long VAR_4, void *VAR_5))
{
 struct arizona_priv *VAR_6 = FUNC_1(VAR_0);
 struct arizona *VAR_7 = VAR_6->arizona;

 VAR_1->notifier_call = VAR_2;

 return FUNC_0(&VAR_7->notifier, VAR_1);
}
