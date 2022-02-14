
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra30_ahub_cif_conf {int threshold; int audio_channels; int client_channels; int audio_bits; int client_bits; int expand; int stereo_conv; int replicate; int direction; int truncate; int mono_conv; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct regmap*,unsigned int,unsigned int) ;

void FUNC_1(struct regmap *VAR_11, unsigned int VAR_12,
     struct tegra30_ahub_cif_conf *VAR_13)
{
 unsigned int VAR_14;

 VAR_14 = (VAR_13->threshold <<
   VAR_6) |
  ((VAR_13->audio_channels - 1) <<
   VAR_1) |
  ((VAR_13->client_channels - 1) <<
   VAR_3) |
  (VAR_13->audio_bits <<
   VAR_0) |
  (VAR_13->client_bits <<
   VAR_2) |
  (VAR_13->expand <<
   VAR_5) |
  (VAR_13->stereo_conv <<
   VAR_9) |
  (VAR_13->replicate <<
   VAR_8) |
  (VAR_13->direction <<
   VAR_4) |
  (VAR_13->truncate <<
   VAR_10) |
  (VAR_13->mono_conv <<
   VAR_7);

 FUNC_0(VAR_11, VAR_12, VAR_14);
}
