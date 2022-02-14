
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; int * list; } ;
struct wm8524_priv {int * rate_constraint_list; TYPE_1__ rate_constraint; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int *) ;
 struct wm8524_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_0)
{
 struct wm8524_priv *VAR_1 = FUNC_1(VAR_0);

 VAR_1->rate_constraint.list = &VAR_1->rate_constraint_list[0];
 VAR_1->rate_constraint.count =
  FUNC_0(VAR_1->rate_constraint_list);

 return 0;
}
