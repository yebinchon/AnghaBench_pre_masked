
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_bus {int dummy; } ;
struct sof_intel_hda_dev {struct hda_bus hbus; } ;
struct snd_sof_dev {TYPE_1__* pdata; } ;
struct TYPE_2__ {struct sof_intel_hda_dev* hw_pdata; } ;



__attribute__((used)) static inline struct hda_bus *FUNC_0(struct snd_sof_dev *VAR_0)
{
 struct sof_intel_hda_dev *VAR_1 = VAR_0->pdata->hw_pdata;

 return &VAR_1->hbus;
}
