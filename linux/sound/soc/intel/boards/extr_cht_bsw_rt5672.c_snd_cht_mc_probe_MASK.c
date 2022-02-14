
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_16__ {char* platform; } ;
struct snd_soc_acpi_mach {TYPE_2__ mach_params; int id; } ;
struct TYPE_18__ {struct snd_soc_acpi_mach* platform_data; } ;
struct platform_device {TYPE_7__ dev; } ;
struct cht_mc_private {int mclk; int codec_name; } ;
struct acpi_device {int dev; } ;
struct TYPE_17__ {TYPE_7__* dev; } ;
struct TYPE_15__ {int name; } ;
struct TYPE_14__ {TYPE_1__* codecs; } ;


 int FUNC_0 (TYPE_12__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 struct acpi_device* FUNC_3 (int ,int *,int) ;
 char* FUNC_4 (struct acpi_device*) ;
 TYPE_12__* VAR_3 ;
 int FUNC_5 (TYPE_7__*,char*,int) ;
 int FUNC_6 (TYPE_7__*,char*) ;
 struct cht_mc_private* FUNC_7 (TYPE_7__*,int,int ) ;
 int FUNC_8 (TYPE_7__*,TYPE_3__*) ;
 int FUNC_9 (struct platform_device*,TYPE_3__*) ;
 int FUNC_10 (int *) ;
 TYPE_3__ VAR_4 ;
 int FUNC_11 (TYPE_3__*,struct cht_mc_private*) ;
 int FUNC_12 (TYPE_3__*,char const*) ;
 int FUNC_13 (int ,int,char*,char*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_5)
{
 int VAR_6 = 0;
 struct cht_mc_private *VAR_7;
 struct snd_soc_acpi_mach *VAR_8 = VAR_5->dev.platform_data;
 const char *VAR_9;
 struct acpi_device *VAR_10;
 int VAR_11;

 VAR_7 = FUNC_7(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_15(VAR_7->codec_name, VAR_2);


 VAR_10 = FUNC_3(VAR_8->id, ((void*)0), -1);
 if (VAR_10) {
  FUNC_13(VAR_7->codec_name, sizeof(VAR_7->codec_name),
    "i2c-%s", FUNC_4(VAR_10));
  FUNC_10(&VAR_10->dev);
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++) {
   if (!FUNC_14(VAR_3[VAR_11].codecs->name,
        VAR_2)) {
    VAR_3[VAR_11].codecs->name = VAR_7->codec_name;
    break;
   }
  }
 }


 VAR_4.dev = &VAR_5->dev;
 VAR_9 = VAR_8->mach_params.platform;

 VAR_6 = FUNC_12(&VAR_4,
       VAR_9);
 if (VAR_6)
  return VAR_6;

 VAR_7->mclk = FUNC_6(&VAR_5->dev, "pmc_plt_clk_3");
 if (FUNC_1(VAR_7->mclk)) {
  FUNC_5(&VAR_5->dev,
   "Failed to get MCLK from pmc_plt_clk_3: %ld\n",
   FUNC_2(VAR_7->mclk));
  return FUNC_2(VAR_7->mclk);
 }
 FUNC_11(&VAR_4, VAR_7);


 VAR_6 = FUNC_8(&VAR_5->dev, &VAR_4);
 if (VAR_6) {
  FUNC_5(&VAR_5->dev,
   "snd_soc_register_card failed %d\n", VAR_6);
  return VAR_6;
 }
 FUNC_9(VAR_5, &VAR_4);
 return VAR_6;
}
