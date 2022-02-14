
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* platform; } ;
struct snd_soc_acpi_mach {TYPE_1__ mach_params; } ;
struct device {struct snd_soc_acpi_mach* platform_data; int parent; } ;
struct platform_device {struct device dev; } ;
struct dmi_system_id {scalar_t__ driver_data; } ;
struct cht_mc_private {unsigned long quirks; int mclk; int ts3a227e_present; } ;
struct TYPE_8__ {struct device* dev; scalar_t__ num_aux_devs; int * aux_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct device*,char const*) ;
 struct cht_mc_private* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,TYPE_2__*) ;
 struct dmi_system_id* FUNC_10 (int ) ;
 int FUNC_11 (struct platform_device*,TYPE_2__*) ;
 TYPE_2__ VAR_5 ;
 int FUNC_12 (TYPE_2__*,struct cht_mc_private*) ;
 int FUNC_13 (TYPE_2__*,char const*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6)
{
 const struct dmi_system_id *VAR_7;
 struct device *VAR_8 = &VAR_6->dev;
 int VAR_9 = 0;
 struct cht_mc_private *VAR_10;
 const char *VAR_11;
 struct snd_soc_acpi_mach *VAR_12;
 const char *VAR_13;

 VAR_10 = FUNC_8(&VAR_6->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_7 = FUNC_10(VAR_4);
 if (VAR_7)
  VAR_10->quirks = (unsigned long)VAR_7->driver_data;

 VAR_10->ts3a227e_present = FUNC_2("104C227E");
 if (!VAR_10->ts3a227e_present) {

  VAR_5.aux_dev = ((void*)0);
  VAR_5.num_aux_devs = 0;

  VAR_9 = FUNC_6(VAR_8->parent,
        VAR_3);
  if (VAR_9)
   FUNC_4(VAR_8, "Unable to add GPIO mapping table\n");
 }


 VAR_5.dev = &VAR_6->dev;
 VAR_12 = (&VAR_6->dev)->platform_data;
 VAR_13 = VAR_12->mach_params.platform;

 VAR_9 = FUNC_13(&VAR_5,
       VAR_13);
 if (VAR_9)
  return VAR_9;


 FUNC_12(&VAR_5, VAR_10);

 if (VAR_10->quirks & VAR_2)
  VAR_11 = "pmc_plt_clk_0";
 else
  VAR_11 = "pmc_plt_clk_3";

 VAR_10->mclk = FUNC_7(&VAR_6->dev, VAR_11);
 if (FUNC_0(VAR_10->mclk)) {
  FUNC_5(&VAR_6->dev,
   "Failed to get MCLK from %s: %ld\n",
   VAR_11, FUNC_1(VAR_10->mclk));
  return FUNC_1(VAR_10->mclk);
 }
 if (VAR_10->quirks & VAR_2) {
  VAR_9 = FUNC_3(VAR_10->mclk);
  if (VAR_9 < 0) {
   FUNC_5(&VAR_6->dev, "MCLK enable error: %d\n", VAR_9);
   return VAR_9;
  }
 }

 VAR_9 = FUNC_9(&VAR_6->dev, &VAR_5);
 if (VAR_9) {
  FUNC_5(&VAR_6->dev,
   "snd_soc_register_card failed %d\n", VAR_9);
  return VAR_9;
 }
 FUNC_11(VAR_6, &VAR_5);
 return VAR_9;
}
