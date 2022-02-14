
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* dev; } ;
struct adau1373_platform_data {int num_drc; unsigned int micbias1; unsigned int micbias2; int lineout_differential; scalar_t__ lineout_ground_sense; scalar_t__* input_differential; int * drc_setting; } ;
struct adau1373 {int regmap; } ;
struct TYPE_2__ {struct adau1373_platform_data* platform_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int) ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int FUNC_2 (struct adau1373*,int,int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (struct snd_soc_component*,int *,int) ;
 struct adau1373* FUNC_6 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_13)
{
 struct adau1373 *VAR_14 = FUNC_6(VAR_13);
 struct adau1373_platform_data *VAR_15 = VAR_13->dev->platform_data;
 bool VAR_16 = 0;
 unsigned int VAR_17;
 int VAR_18;

 if (VAR_15) {
  if (VAR_15->num_drc > FUNC_0(VAR_15->drc_setting))
   return -VAR_10;

  if (!FUNC_3(VAR_15->micbias1) ||
   !FUNC_3(VAR_15->micbias2))
   return -VAR_10;

  for (VAR_18 = 0; VAR_18 < VAR_15->num_drc; ++VAR_18) {
   FUNC_2(VAR_14, VAR_18,
    VAR_15->drc_setting[VAR_18]);
  }

  FUNC_5(VAR_13, VAR_11,
   VAR_15->num_drc);

  VAR_17 = 0;
  for (VAR_18 = 0; VAR_18 < 4; ++VAR_18) {
   if (VAR_15->input_differential[VAR_18])
    VAR_17 |= FUNC_1(VAR_18);
  }
  FUNC_4(VAR_14->regmap, VAR_6, VAR_17);

  VAR_17 = 0;
  if (VAR_15->lineout_differential)
   VAR_17 |= VAR_8;
  if (VAR_15->lineout_ground_sense)
   VAR_17 |= VAR_9;
  FUNC_4(VAR_14->regmap, VAR_7, VAR_17);

  VAR_16 = VAR_15->lineout_differential;

  FUNC_4(VAR_14->regmap, VAR_3,
   (VAR_15->micbias1 << VAR_4) |
   (VAR_15->micbias2 << VAR_5));
 }

 if (!VAR_16) {
  FUNC_5(VAR_13, VAR_12,
   FUNC_0(VAR_12));
 }

 FUNC_4(VAR_14->regmap, VAR_0,
     VAR_2 | VAR_1);

 return 0;
}
