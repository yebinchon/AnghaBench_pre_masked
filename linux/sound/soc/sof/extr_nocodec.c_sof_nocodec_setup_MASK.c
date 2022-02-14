
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sof_dev_desc {int nocodec_tplg_filename; int nocodec_fw_filename; } ;
struct snd_sof_pdata {char* drv_name; int tplg_filename; int fw_filename; } ;
struct snd_sof_dsp_ops {int num_drv; } ;
struct snd_soc_dai_link {int dummy; } ;
struct snd_soc_acpi_mach {char* drv_name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_soc_dai_link* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct device*,struct snd_sof_dsp_ops const*,struct snd_soc_dai_link*,int,int *) ;
 int VAR_3 ;

int FUNC_2(struct device *VAR_4,
        struct snd_sof_pdata *VAR_5,
        struct snd_soc_acpi_mach *VAR_6,
        const struct sof_dev_desc *VAR_7,
        const struct snd_sof_dsp_ops *VAR_8)
{
 struct snd_soc_dai_link *VAR_9;
 int VAR_10;

 if (!VAR_6)
  return -VAR_0;

 VAR_5->drv_name = "sof-nocodec";

 VAR_6->drv_name = "sof-nocodec";
 VAR_5->fw_filename = VAR_7->nocodec_fw_filename;
 VAR_5->tplg_filename = VAR_7->nocodec_tplg_filename;


 VAR_9 = FUNC_0(VAR_4, sizeof(struct snd_soc_dai_link) *
        VAR_8->num_drv, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_1(VAR_4, VAR_8, VAR_9, VAR_8->num_drv,
        &VAR_3);
 return VAR_10;
}
