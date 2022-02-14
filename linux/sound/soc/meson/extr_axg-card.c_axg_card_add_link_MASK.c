
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_link_component {int of_node; int dai_name; } ;
struct snd_soc_dai_link {int num_cpus; int * params; struct snd_soc_dai_link_component* cpus; } ;
struct snd_soc_card {int dev; struct snd_soc_dai_link* dai_link; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct snd_soc_card*,struct device_node*,int *,int *) ;
 int FUNC_5 (struct snd_soc_card*,struct device_node*,int*) ;
 int FUNC_6 (struct snd_soc_card*,struct snd_soc_dai_link*,struct device_node*) ;
 int FUNC_7 (struct snd_soc_card*,struct snd_soc_dai_link*,struct device_node*,int) ;
 int VAR_2 ;
 struct snd_soc_dai_link_component* FUNC_8 (int ,int,int ) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_card *VAR_3, struct device_node *VAR_4,
        int *VAR_5)
{
 struct snd_soc_dai_link *VAR_6 = &VAR_3->dai_link[*VAR_5];
 struct snd_soc_dai_link_component *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_8(VAR_3->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6->cpus = VAR_7;
 VAR_6->num_cpus = 1;

 VAR_8 = FUNC_4(VAR_3, VAR_4, &VAR_6->cpus->of_node,
     &VAR_6->cpus->dai_name);
 if (VAR_8)
  return VAR_8;

 if (FUNC_2(VAR_6->cpus->of_node))
  VAR_8 = FUNC_7(VAR_3, VAR_6, VAR_4, 1);
 else if (FUNC_0(VAR_6->cpus->of_node))
  VAR_8 = FUNC_7(VAR_3, VAR_6, VAR_4, 0);
 else
  VAR_8 = FUNC_6(VAR_3, VAR_6, VAR_4);

 if (VAR_8)
  return VAR_8;

 if (FUNC_3(VAR_6->cpus->of_node))
  VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_5);
 else if (FUNC_1(VAR_6->cpus->of_node))
  VAR_6->params = &VAR_2;

 return VAR_8;
}
