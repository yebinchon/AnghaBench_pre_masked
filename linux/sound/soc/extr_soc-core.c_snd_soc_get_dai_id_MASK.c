
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_link_component {int of_node; int * name; } ;
struct snd_soc_component {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_soc_component*,struct device_node*) ;
 struct snd_soc_component* FUNC_5 (struct snd_soc_dai_link_component*) ;

int FUNC_6(struct device_node *VAR_2)
{
 struct snd_soc_component *VAR_3;
 struct snd_soc_dai_link_component VAR_4;
 int VAR_5;

 VAR_4.of_node = FUNC_2(VAR_2);
 VAR_4.name = ((void*)0);






 VAR_5 = -VAR_0;
 FUNC_0(&VAR_1);
 VAR_3 = FUNC_5(&VAR_4);
 if (VAR_3)
  VAR_5 = FUNC_4(VAR_3, VAR_2);
 FUNC_1(&VAR_1);

 FUNC_3(VAR_4.of_node);

 return VAR_5;
}
