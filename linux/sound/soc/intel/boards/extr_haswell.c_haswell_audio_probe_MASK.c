
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int platform; } ;
struct snd_soc_acpi_mach {TYPE_1__ mach_params; } ;
struct TYPE_8__ {struct snd_soc_acpi_mach* platform_data; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_7__ {TYPE_4__* dev; } ;


 int FUNC_0 (TYPE_4__*,TYPE_2__*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct snd_soc_acpi_mach *VAR_2;
 int VAR_3;

 VAR_0 = &VAR_1->dev;


 VAR_2 = (&VAR_1->dev)->platform_data;
 VAR_3 = FUNC_1(&VAR_0,
          VAR_2->mach_params.platform);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(&VAR_1->dev, &VAR_0);
}
