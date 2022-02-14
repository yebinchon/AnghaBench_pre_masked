
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dmic_num; } ;
struct snd_soc_acpi_mach {TYPE_1__ mach_params; } ;
struct skl_nau8825_private {int hdmi_pcm_list; } ;
struct TYPE_9__ {struct snd_soc_acpi_mach* platform_data; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_8__ {TYPE_4__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct skl_nau8825_private* FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*) ;
 int * VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_3 (TYPE_2__*,struct skl_nau8825_private*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_6)
{
 struct skl_nau8825_private *VAR_7;
 struct snd_soc_acpi_mach *VAR_8;

 VAR_7 = FUNC_1(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_0(&VAR_7->hdmi_pcm_list);

 VAR_5.dev = &VAR_6->dev;
 FUNC_3(&VAR_5, VAR_7);

 VAR_8 = (&VAR_6->dev)->platform_data;
 if (VAR_8)
  VAR_4 = VAR_8->mach_params.dmic_num == 2 ?
   &VAR_2 : &VAR_3;

 return FUNC_2(&VAR_6->dev, &VAR_5);
}
