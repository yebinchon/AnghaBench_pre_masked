
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_link_component {int of_node; int dai_name; } ;
struct of_phandle_args {int args_count; int np; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,int ,int ,int ,struct of_phandle_args*) ;
 int FUNC_1 (struct device_node*,int *) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_2,
     struct snd_soc_dai_link_component *VAR_3,
     int *VAR_4)
{
 struct of_phandle_args VAR_5;
 int VAR_6;

 if (!VAR_2)
  return 0;





 VAR_6 = FUNC_0(VAR_2, VAR_1, VAR_0, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_1(VAR_2, &VAR_3->dai_name);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_3->of_node = VAR_5.np;

 if (VAR_4)
  *VAR_4 = !VAR_5.args_count;

 return 0;
}
