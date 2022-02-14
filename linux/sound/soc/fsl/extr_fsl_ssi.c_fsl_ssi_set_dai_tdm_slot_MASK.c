
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dev; } ;
struct regmap {int dummy; } ;
struct fsl_ssi {int slot_width; int slots; scalar_t__ i2s_net; struct regmap* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct regmap*,int ,int *) ;
 int FUNC_3 (struct regmap*,int ,int ,int ) ;
 int FUNC_4 (struct regmap*,int ,int ) ;
 struct fsl_ssi* FUNC_5 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_8, u32 VAR_9,
        u32 VAR_10, int VAR_11, int VAR_12)
{
 struct fsl_ssi *VAR_13 = FUNC_5(VAR_8);
 struct regmap *VAR_14 = VAR_13->regs;
 u32 VAR_15;


 if (VAR_12 & 1 || VAR_12 < 8 || VAR_12 > 24) {
  FUNC_1(VAR_8->dev, "invalid slot width: %d\n", VAR_12);
  return -VAR_0;
 }


 if (VAR_13->i2s_net && VAR_11 < 2) {
  FUNC_1(VAR_8->dev, "slot number should be >= 2 in I2S or NET\n");
  return -VAR_0;
 }

 FUNC_3(VAR_14, VAR_4,
      VAR_7, FUNC_0(VAR_11));
 FUNC_3(VAR_14, VAR_2,
      VAR_7, FUNC_0(VAR_11));


 FUNC_2(VAR_14, VAR_1, &VAR_15);

 FUNC_3(VAR_14, VAR_1, VAR_6, VAR_6);

 FUNC_4(VAR_14, VAR_5, ~VAR_9);
 FUNC_4(VAR_14, VAR_3, ~VAR_10);


 FUNC_3(VAR_14, VAR_1, VAR_6, VAR_15);

 VAR_13->slot_width = VAR_12;
 VAR_13->slots = VAR_11;

 return 0;
}
