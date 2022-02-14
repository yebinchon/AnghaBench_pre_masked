
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int name_prefix; int name; } ;
struct snd_soc_codec_conf {int name_prefix; scalar_t__ dev_name; struct device_node* of_node; } ;
struct snd_soc_card {int num_configs; struct snd_soc_codec_conf* codec_conf; } ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_card *VAR_0,
    struct snd_soc_component *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_configs && VAR_0->codec_conf; VAR_2++) {
  struct snd_soc_codec_conf *VAR_3 = &VAR_0->codec_conf[VAR_2];
  struct device_node *VAR_4 = FUNC_0(VAR_1);

  if (VAR_3->of_node && VAR_4 != VAR_3->of_node)
   continue;
  if (VAR_3->dev_name && FUNC_2(VAR_1->name, VAR_3->dev_name))
   continue;
  VAR_1->name_prefix = VAR_3->name_prefix;
  return;
 }





 FUNC_1(VAR_1);
}
