
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct snd_soc_dapm_widget {TYPE_2__ dobj; TYPE_1__* dapm; } ;
struct TYPE_3__ {int component; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;

void FUNC_1(struct snd_soc_dapm_widget *VAR_2)
{

 if (VAR_2->dobj.type != VAR_0)
  return;

 FUNC_0(VAR_2->dapm->component, &VAR_2->dobj, VAR_1);
}
