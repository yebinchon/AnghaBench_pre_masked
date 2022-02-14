
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sof_intel_hda_dev {int dtrace_stream; } ;
struct snd_sof_dev {TYPE_1__* pdata; } ;
struct TYPE_2__ {struct sof_intel_hda_dev* hw_pdata; } ;


 int FUNC_0 (struct snd_sof_dev*,int ,int) ;

int FUNC_1(struct snd_sof_dev *VAR_0, int VAR_1)
{
 struct sof_intel_hda_dev *VAR_2 = VAR_0->pdata->hw_pdata;

 return FUNC_0(VAR_0, VAR_2->dtrace_stream, VAR_1);
}
