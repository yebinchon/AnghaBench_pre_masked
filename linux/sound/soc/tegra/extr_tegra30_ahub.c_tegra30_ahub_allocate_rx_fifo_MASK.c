
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tegra30_ahub_cif_conf {int audio_channels; int client_channels; scalar_t__ mono_conv; scalar_t__ truncate; int direction; scalar_t__ replicate; scalar_t__ stereo_conv; scalar_t__ expand; void* client_bits; void* audio_bits; scalar_t__ threshold; } ;
typedef enum tegra30_ahub_rxcif { ____Placeholder_tegra30_ahub_rxcif } tegra30_ahub_rxcif ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int dev; int regmap_apbif; TYPE_1__* soc_data; scalar_t__ apbif_addr; int rx_usage; } ;
struct TYPE_3__ {int (* set_audio_cif ) (int ,int,struct tegra30_ahub_cif_conf*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int,int ) ;
 TYPE_2__* VAR_16 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,int) ;
 int FUNC_5 (int ,int,struct tegra30_ahub_cif_conf*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;

int FUNC_8(enum tegra30_ahub_rxcif *VAR_17,
      char *VAR_18, int VAR_19,
      dma_addr_t *VAR_20)
{
 int VAR_21;
 u32 VAR_22, VAR_23;
 struct tegra30_ahub_cif_conf VAR_24;

 VAR_21 = FUNC_1(VAR_16->rx_usage,
          VAR_2);
 if (VAR_21 >= VAR_2)
  return -VAR_0;

 FUNC_0(VAR_21, VAR_16->rx_usage);

 *VAR_17 = VAR_13 + VAR_21;
 FUNC_4(VAR_18, VAR_19, "rx%d", VAR_21);
 *VAR_20 = VAR_16->apbif_addr + VAR_9 +
     (VAR_21 * VAR_10);

 FUNC_2(VAR_16->dev);

 VAR_22 = VAR_1 +
       (VAR_21 * VAR_8);
 VAR_23 = FUNC_6(VAR_22);
 VAR_23 &= ~(VAR_6 |
   VAR_5);
 VAR_23 |= (7 << VAR_7) |
        VAR_4 |
        VAR_3;
 FUNC_7(VAR_22, VAR_23);

 VAR_24.threshold = 0;
 VAR_24.audio_channels = 2;
 VAR_24.client_channels = 2;
 VAR_24.audio_bits = VAR_14;
 VAR_24.client_bits = VAR_14;
 VAR_24.expand = 0;
 VAR_24.stereo_conv = 0;
 VAR_24.replicate = 0;
 VAR_24.direction = VAR_15;
 VAR_24.truncate = 0;
 VAR_24.mono_conv = 0;

 VAR_22 = VAR_11 +
       (VAR_21 * VAR_12);
 VAR_16->soc_data->set_audio_cif(VAR_16->regmap_apbif, VAR_22, &VAR_24);

 FUNC_3(VAR_16->dev);

 return 0;
}
