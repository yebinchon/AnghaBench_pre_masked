
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct sof_card_private {int hdmi_pcm_list; int mclk; } ;
struct snd_soc_dai_link {int dummy; } ;
struct TYPE_12__ {int platform; } ;
struct snd_soc_acpi_mach {TYPE_1__ mach_params; } ;
struct TYPE_13__ {struct snd_soc_acpi_mach* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_14__ {int num_links; TYPE_2__* dev; struct snd_soc_dai_link* dai_link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,char*,int) ;
 int FUNC_6 (TYPE_2__*,char*,...) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 struct sof_card_private* FUNC_8 (TYPE_2__*,int,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_10 (int ) ;
 int VAR_8 ;
 int FUNC_11 (TYPE_3__*,struct sof_card_private*) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 TYPE_3__ VAR_9 ;
 struct snd_soc_dai_link* FUNC_15 (TYPE_2__*,int,int,int,int) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_12)
{
 struct snd_soc_dai_link *VAR_13;
 struct snd_soc_acpi_mach *VAR_14;
 struct sof_card_private *VAR_15;
 int VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20;

 VAR_15 = FUNC_8(&VAR_12->dev, sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 if (FUNC_13() || FUNC_14()) {
  VAR_8 = 1;
  VAR_16 = 0;
  VAR_17 = 0;

  VAR_10 = VAR_3 |
      VAR_2 |
      FUNC_3(2);
 } else {
  VAR_16 = 2;
  VAR_17 = 3;
 }

 FUNC_10(VAR_11);


 if (VAR_10 & VAR_2) {
  VAR_15->mclk = FUNC_7(&VAR_12->dev, "pmc_plt_clk_3");
  if (FUNC_1(VAR_15->mclk)) {
   VAR_18 = FUNC_2(VAR_15->mclk);

   FUNC_6(&VAR_12->dev,
    "Failed to get MCLK from pmc_plt_clk_3: %d\n",
    VAR_18);
   return VAR_18;
  }

  VAR_18 = FUNC_4(VAR_15->mclk);
  if (VAR_18 < 0) {
   FUNC_6(&VAR_12->dev,
    "could not configure MCLK state");
   return VAR_18;
  }
 }

 FUNC_5(&VAR_12->dev, "sof_rt5682_quirk = %lx\n", VAR_10);

 VAR_19 = (VAR_10 & VAR_4) >>
   VAR_5;

 VAR_20 = VAR_10 & VAR_6;


 VAR_9 = 1 + VAR_16 + VAR_17;

 if (VAR_10 & VAR_7)
  VAR_9++;

 VAR_13 = FUNC_15(&VAR_12->dev, VAR_20, VAR_19,
           VAR_16, VAR_17);
 if (!VAR_13)
  return -VAR_0;

 VAR_9 = VAR_13;

 FUNC_0(&VAR_15->hdmi_pcm_list);

 VAR_9 = &VAR_12->dev;
 VAR_14 = (&VAR_12->dev)->platform_data;


 VAR_18 = FUNC_12(&VAR_9,
          VAR_14->mach_params.platform);
 if (VAR_18)
  return VAR_18;

 FUNC_11(&VAR_9, VAR_15);

 return FUNC_9(&VAR_12->dev,
       &VAR_9);
}
