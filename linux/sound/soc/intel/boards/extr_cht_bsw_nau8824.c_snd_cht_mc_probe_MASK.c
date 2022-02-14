
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* platform; } ;
struct snd_soc_acpi_mach {TYPE_1__ mach_params; } ;
struct TYPE_12__ {struct snd_soc_acpi_mach* platform_data; } ;
struct platform_device {TYPE_6__ dev; } ;
struct cht_mc_private {int dummy; } ;
struct TYPE_11__ {TYPE_6__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,char*,int) ;
 struct cht_mc_private* FUNC_1 (TYPE_6__*,int,int ) ;
 int FUNC_2 (TYPE_6__*,TYPE_2__*) ;
 int FUNC_3 (struct platform_device*,TYPE_2__*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (TYPE_2__*,struct cht_mc_private*) ;
 int FUNC_5 (TYPE_2__*,char const*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct cht_mc_private *VAR_4;
 struct snd_soc_acpi_mach *VAR_5;
 const char *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_1(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 FUNC_4(&VAR_2, VAR_4);


 VAR_2.dev = &VAR_3->dev;
 VAR_5 = (&VAR_3->dev)->platform_data;
 VAR_6 = VAR_5->mach_params.platform;

 VAR_7 = FUNC_5(&VAR_2,
       VAR_6);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_2(&VAR_3->dev, &VAR_2);
 if (VAR_7) {
  FUNC_0(&VAR_3->dev,
   "snd_soc_register_card failed %d\n", VAR_7);
  return VAR_7;
 }
 FUNC_3(VAR_3, &VAR_2);

 return VAR_7;
}
