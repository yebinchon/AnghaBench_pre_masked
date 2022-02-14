
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {int index; scalar_t__ comp; TYPE_1__* ops; } ;
struct snd_soc_tplg_link_config {int dummy; } ;
struct snd_soc_dai_link {int dummy; } ;
struct TYPE_2__ {int (* link_load ) (scalar_t__,int ,struct snd_soc_dai_link*,struct snd_soc_tplg_link_config*) ;} ;


 int FUNC_0 (scalar_t__,int ,struct snd_soc_dai_link*,struct snd_soc_tplg_link_config*) ;

__attribute__((used)) static int FUNC_1(struct soc_tplg *VAR_0,
 struct snd_soc_dai_link *VAR_1, struct snd_soc_tplg_link_config *VAR_2)
{
 if (VAR_0->comp && VAR_0->ops && VAR_0->ops->link_load)
  return VAR_0->ops->link_load(VAR_0->comp, VAR_0->index, VAR_1, VAR_2);

 return 0;
}
