
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sof_intel_dsp_desc {int dummy; } ;
struct sof_dev_desc {struct sof_intel_dsp_desc* chip_info; } ;
struct snd_sof_pdata {struct sof_dev_desc* desc; } ;



__attribute__((used)) static const struct sof_intel_dsp_desc
 *FUNC_0(struct snd_sof_pdata *VAR_0)
{
 const struct sof_dev_desc *VAR_1 = VAR_0->desc;
 const struct sof_intel_dsp_desc *VAR_2;

 VAR_2 = VAR_1->chip_info;

 return VAR_2;
}
