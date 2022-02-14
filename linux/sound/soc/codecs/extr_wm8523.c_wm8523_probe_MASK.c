
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; int * list; } ;
struct wm8523_priv {int * rate_constraint_list; TYPE_1__ rate_constraint; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wm8523_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_4)
{
 struct wm8523_priv *VAR_5 = FUNC_1(VAR_4);

 VAR_5->rate_constraint.list = &VAR_5->rate_constraint_list[0];
 VAR_5->rate_constraint.count =
  FUNC_0(VAR_5->rate_constraint_list);


 FUNC_2(VAR_4, VAR_2,
       VAR_0, VAR_0);
 FUNC_2(VAR_4, VAR_1, VAR_3, VAR_3);

 return 0;
}
