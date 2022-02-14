
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct snd_soc_card {TYPE_3__* dev; } ;
struct TYPE_9__ {int dmic_num; } ;
struct snd_soc_acpi_mach {TYPE_2__ mach_params; } ;
struct TYPE_10__ {struct snd_soc_acpi_mach* platform_data; } ;
struct platform_device {TYPE_3__ dev; TYPE_1__* id_entry; } ;
struct kbl_rt5663_private {void* sclk; void* mclk; int hdmi_pcm_list; } ;
struct TYPE_8__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 void* FUNC_5 (TYPE_3__*,char*) ;
 struct kbl_rt5663_private* FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,struct snd_soc_card*) ;
 int * VAR_6 ;
 struct snd_soc_card* VAR_7 ;
 int FUNC_8 (struct snd_soc_card*,struct kbl_rt5663_private*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_8)
{
 struct kbl_rt5663_private *VAR_9;
 struct snd_soc_acpi_mach *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_6(&VAR_8->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 FUNC_0(&VAR_9->hdmi_pcm_list);

 VAR_7 =
  (struct snd_soc_card *)VAR_8->id_entry->driver_data;

 VAR_7->dev = &VAR_8->dev;
 FUNC_8(VAR_7, VAR_9);

 VAR_10 = (&VAR_8->dev)->platform_data;
 if (VAR_10)
  VAR_6 = VAR_10->mach_params.dmic_num == 2 ?
   &VAR_4 : &VAR_5;

 VAR_9->mclk = FUNC_5(&VAR_8->dev, "ssp1_mclk");
 if (FUNC_1(VAR_9->mclk)) {
  VAR_11 = FUNC_2(VAR_9->mclk);
  if (VAR_11 == -VAR_0) {
   FUNC_4(&VAR_8->dev,
    "Failed to get ssp1_sclk, defer probe\n");
   return -VAR_2;
  }

  FUNC_3(&VAR_8->dev, "Failed to get ssp1_mclk with err:%d\n",
        VAR_11);
  return VAR_11;
 }

 VAR_9->sclk = FUNC_5(&VAR_8->dev, "ssp1_sclk");
 if (FUNC_1(VAR_9->sclk)) {
  VAR_11 = FUNC_2(VAR_9->sclk);
  if (VAR_11 == -VAR_0) {
   FUNC_4(&VAR_8->dev,
    "Failed to get ssp1_sclk, defer probe\n");
   return -VAR_2;
  }

  FUNC_3(&VAR_8->dev, "Failed to get ssp1_sclk with err:%d\n",
        VAR_11);
  return VAR_11;
 }

 return FUNC_7(&VAR_8->dev, VAR_7);
}
