
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {int index; scalar_t__ comp; TYPE_1__* ops; } ;
struct snd_soc_dapm_route {int dummy; } ;
struct TYPE_2__ {int (* dapm_route_load ) (scalar_t__,int ,struct snd_soc_dapm_route*) ;} ;


 int FUNC_0 (scalar_t__,int ,struct snd_soc_dapm_route*) ;

__attribute__((used)) static int FUNC_1(struct soc_tplg *VAR_0,
 struct snd_soc_dapm_route *VAR_1)
{
 if (VAR_0->comp && VAR_0->ops && VAR_0->ops->dapm_route_load)
  return VAR_0->ops->dapm_route_load(VAR_0->comp, VAR_0->index,
   VAR_1);

 return 0;
}
