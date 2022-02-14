
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_card {TYPE_2__* dev; } ;
struct TYPE_4__ {char* platform; } ;
struct snd_soc_acpi_mach {TYPE_1__ mach_params; } ;
struct TYPE_5__ {struct snd_soc_acpi_mach* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct glk_card_private {int hdmi_pcm_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct glk_card_private* FUNC_1 (TYPE_2__*,int,int ) ;
 int FUNC_2 (TYPE_2__*,struct snd_soc_card*) ;
 struct snd_soc_card VAR_2 ;
 int FUNC_3 (struct snd_soc_card*,struct glk_card_private*) ;
 int FUNC_4 (struct snd_soc_card*,char const*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct glk_card_private *VAR_4;
 struct snd_soc_acpi_mach *VAR_5;
 const char *VAR_6;
 struct snd_soc_card *VAR_7;
 int VAR_8;

 VAR_4 = FUNC_1(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_4->hdmi_pcm_list);

 VAR_7 = &VAR_2;
 VAR_7->dev = &VAR_3->dev;
 FUNC_3(VAR_7, VAR_4);


 VAR_5 = (&VAR_3->dev)->platform_data;
 VAR_6 = VAR_5->mach_params.platform;

 VAR_8 = FUNC_4(VAR_7, VAR_6);
 if (VAR_8)
  return VAR_8;

 return FUNC_2(&VAR_3->dev, VAR_7);
}
