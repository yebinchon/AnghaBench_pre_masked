
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_link_component {scalar_t__ name; struct device_node* of_node; } ;
struct snd_soc_component {int name; } ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (struct snd_soc_component*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(
 const struct snd_soc_dai_link_component *VAR_0,
 struct snd_soc_component *VAR_1)
{
 struct device_node *VAR_2;

 if (!VAR_0)
  return 0;

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_0->of_node && VAR_2 != VAR_0->of_node)
  return 0;
 if (VAR_0->name && FUNC_1(VAR_1->name, VAR_0->name))
  return 0;

 return 1;
}
