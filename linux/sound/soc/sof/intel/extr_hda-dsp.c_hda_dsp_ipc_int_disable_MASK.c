
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sof_intel_hda_dev {struct sof_intel_dsp_desc* desc; } ;
struct sof_intel_dsp_desc {int ipc_ctl; } ;
struct snd_sof_dev {TYPE_1__* pdata; } ;
struct TYPE_2__ {struct sof_intel_hda_dev* hw_pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_sof_dev*,int ,int ,int,int ) ;

void FUNC_1(struct snd_sof_dev *VAR_5)
{
 struct sof_intel_hda_dev *VAR_6 = VAR_5->pdata->hw_pdata;
 const struct sof_intel_dsp_desc *VAR_7 = VAR_6->desc;


 FUNC_0(VAR_5, VAR_1, VAR_2,
    VAR_0, 0);


 FUNC_0(VAR_5, VAR_1, VAR_7->ipc_ctl,
   VAR_3 | VAR_4, 0);
}
