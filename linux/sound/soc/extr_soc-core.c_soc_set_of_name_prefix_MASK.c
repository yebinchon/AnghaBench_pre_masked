
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {char const* name_prefix; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*,char const**) ;
 struct device_node* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_0)
{
 struct device_node *VAR_1 = FUNC_1(VAR_0);
 const char *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, "sound-name-prefix", &VAR_2);
 if (!VAR_3)
  VAR_0->name_prefix = VAR_2;
}
