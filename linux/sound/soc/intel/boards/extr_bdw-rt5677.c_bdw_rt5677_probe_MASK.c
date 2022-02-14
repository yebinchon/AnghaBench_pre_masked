
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int platform; } ;
struct snd_soc_acpi_mach {TYPE_1__ mach_params; } ;
struct TYPE_11__ {struct snd_soc_acpi_mach* platform_data; } ;
struct platform_device {TYPE_4__ dev; } ;
struct bdw_rt5677_priv {int dummy; } ;
struct TYPE_10__ {TYPE_4__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 struct bdw_rt5677_priv* FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,struct bdw_rt5677_priv*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct bdw_rt5677_priv *VAR_4;
 struct snd_soc_acpi_mach *VAR_5;
 int VAR_6;

 VAR_2.dev = &VAR_3->dev;


 VAR_4 = FUNC_1(&VAR_3->dev, sizeof(struct bdw_rt5677_priv),
  VAR_1);
 if (!VAR_4) {
  FUNC_0(&VAR_3->dev, "Can't allocate bdw_rt5677\n");
  return -VAR_0;
 }


 VAR_5 = (&VAR_3->dev)->platform_data;
 VAR_6 = FUNC_4(&VAR_2,
          VAR_5->mach_params.platform);
 if (VAR_6)
  return VAR_6;

 FUNC_3(&VAR_2, VAR_4);

 return FUNC_2(&VAR_3->dev, &VAR_2);
}
