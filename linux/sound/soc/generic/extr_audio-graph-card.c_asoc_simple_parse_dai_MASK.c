
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_link_component {struct device_node* of_node; int dai_name; } ;
struct of_phandle_args {int args_count; int * args; struct device_node* np; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct of_phandle_args*,int *) ;

__attribute__((used)) static int FUNC_4(struct device_node *VAR_0,
     struct snd_soc_dai_link_component *VAR_1,
     int *VAR_2)
{
 struct device_node *VAR_3;
 struct of_phandle_args VAR_4;
 int VAR_5;

 if (!VAR_0)
  return 0;

 VAR_3 = FUNC_2(VAR_0);


 VAR_4.np = VAR_3;
 VAR_4.args[0] = FUNC_0(VAR_0);
 VAR_4.args_count = (FUNC_1(VAR_3) > 1);
 VAR_5 = FUNC_3(&VAR_4, &VAR_1->dai_name);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_1->of_node = VAR_3;

 if (VAR_2)
  *VAR_2 = FUNC_1(VAR_3) == 1;

 return 0;
}
