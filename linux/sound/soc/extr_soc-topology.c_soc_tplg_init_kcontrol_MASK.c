
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {int index; scalar_t__ comp; TYPE_1__* ops; } ;
struct snd_soc_tplg_ctl_hdr {int dummy; } ;
struct snd_kcontrol_new {int dummy; } ;
struct TYPE_2__ {int (* control_load ) (scalar_t__,int ,struct snd_kcontrol_new*,struct snd_soc_tplg_ctl_hdr*) ;} ;


 int FUNC_0 (scalar_t__,int ,struct snd_kcontrol_new*,struct snd_soc_tplg_ctl_hdr*) ;

__attribute__((used)) static int FUNC_1(struct soc_tplg *VAR_0,
 struct snd_kcontrol_new *VAR_1, struct snd_soc_tplg_ctl_hdr *VAR_2)
{
 if (VAR_0->comp && VAR_0->ops && VAR_0->ops->control_load)
  return VAR_0->ops->control_load(VAR_0->comp, VAR_0->index, VAR_1,
   VAR_2);

 return 0;
}
