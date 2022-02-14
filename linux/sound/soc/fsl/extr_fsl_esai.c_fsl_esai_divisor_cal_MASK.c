
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dev; } ;
struct fsl_esai {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int ,int,int) ;
 struct fsl_esai* FUNC_5 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_6, bool VAR_7, u32 VAR_8,
    bool VAR_9, u32 VAR_10)
{
 struct fsl_esai *VAR_11 = FUNC_5(VAR_6);
 u32 VAR_12, VAR_13 = 999, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_14 = VAR_9 ? 16 : 1;

 if (VAR_9 && VAR_10)
  goto out_fp;

 if (VAR_8 > 2 * 8 * 256 * VAR_14 || VAR_8 < 2) {
  FUNC_3(VAR_6->dev, "the ratio is out of range (2 ~ %d)\n",
    2 * 8 * 256 * VAR_14);
  return -VAR_0;
 } else if (VAR_8 % 2) {
  FUNC_3(VAR_6->dev, "the raio must be even if using upper divider\n");
  return -VAR_0;
 }

 VAR_8 /= 2;

 VAR_12 = VAR_8 <= 256 * VAR_14 ? VAR_3 : VAR_4;


 if (VAR_8 <= 256) {
  VAR_13 = VAR_8;
  VAR_10 = 1;
  goto out;
 }


 VAR_17 = (VAR_12 ? 1 : 8) * 256 * VAR_14 / 1000;


 for (VAR_18 = 1; VAR_18 <= 256; VAR_18++) {
  for (VAR_19 = 1; VAR_19 <= VAR_14; VAR_19++) {

   VAR_15 = (VAR_12 ? 1 : 8) * VAR_18 * VAR_19;

   if (VAR_15 == VAR_8)
    VAR_16 = 0;
   else if (VAR_15 / VAR_8 == 1)
    VAR_16 = VAR_15 - VAR_8;
   else if (VAR_8 / VAR_15 == 1)
    VAR_16 = VAR_8 - VAR_15;
   else
    continue;


   VAR_16 = VAR_16 * 1000 / VAR_8;
   if (VAR_16 < VAR_17) {
    VAR_17 = VAR_16;
    VAR_13 = VAR_18;
    VAR_10 = VAR_19;
   }


   if (VAR_17 == 0)
    goto out;
  }
 }

 if (VAR_13 == 999) {
  FUNC_3(VAR_6->dev, "failed to calculate proper divisors\n");
  return -VAR_0;
 }

out:
 FUNC_4(VAR_11->regmap, FUNC_2(VAR_7),
      VAR_5 | VAR_2,
      VAR_12 | FUNC_1(VAR_13));

out_fp:

 if (VAR_14 <= 1)
  return 0;

 FUNC_4(VAR_11->regmap, FUNC_2(VAR_7),
      VAR_1, FUNC_0(VAR_10));

 return 0;
}
