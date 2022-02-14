
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct snd_soc_dai {int dev; } ;
struct fsl_esai {unsigned int* hck_rate; int* hck_dir; int* sck_div; int regmap; struct clk* extalclk; scalar_t__ synchronous; struct clk* fsysclk; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;




 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 unsigned long FUNC_3 (struct clk*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct snd_soc_dai*,int,unsigned int,int,int ) ;
 int FUNC_6 (int ,int ,unsigned int,unsigned int) ;
 struct fsl_esai* FUNC_7 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dai *VAR_8, int VAR_9,
       unsigned int VAR_10, int VAR_11)
{
 struct fsl_esai *VAR_12 = FUNC_7(VAR_8);
 struct clk *VAR_13 = VAR_12->extalclk;
 bool VAR_14 = (VAR_9 <= 129 || VAR_12->synchronous);
 bool VAR_15 = VAR_11 == VAR_7;
 u32 VAR_16, VAR_17 = 0;
 unsigned long VAR_18;
 int VAR_19;

 if (VAR_10 == 0) {
  FUNC_4(VAR_8->dev, "%sput freq of HCK%c should not be 0Hz\n",
   VAR_15 ? "in" : "out", VAR_14 ? 'T' : 'R');
  return -VAR_0;
 }


 if (VAR_10 == VAR_12->hck_rate[VAR_14] && VAR_11 == VAR_12->hck_dir[VAR_14])
  return 0;


 VAR_12->sck_div[VAR_14] = 1;


 FUNC_6(VAR_12->regmap, FUNC_2(VAR_14),
      VAR_5, VAR_15 ? 0 : VAR_5);

 if (VAR_15)
  goto out;

 switch (VAR_9) {
 case 128:
 case 130:
  VAR_13 = VAR_12->fsysclk;
  break;
 case 129:
  VAR_17 |= VAR_3;
  break;
 case 131:
  VAR_17 |= VAR_12->synchronous ? VAR_3 : VAR_1;
  break;
 default:
  return -VAR_0;
 }

 if (FUNC_0(VAR_13)) {
  FUNC_4(VAR_8->dev, "no assigned %s clock\n",
    VAR_9 % 2 ? "extal" : "fsys");
  return FUNC_1(VAR_13);
 }
 VAR_18 = FUNC_3(VAR_13);

 VAR_16 = VAR_18 / VAR_10;
 if (VAR_16 * VAR_10 > VAR_18)
  VAR_19 = VAR_16 * VAR_10 - VAR_18;
 else if (VAR_16 * VAR_10 < VAR_18)
  VAR_19 = VAR_18 - VAR_16 * VAR_10;
 else
  VAR_19 = 0;


 if (VAR_19 != 0 && VAR_18 / VAR_19 < 1000) {
  FUNC_4(VAR_8->dev, "failed to derive required HCK%c rate\n",
    VAR_14 ? 'T' : 'R');
  return -VAR_0;
 }


 if (VAR_16 == 1 && VAR_13 == VAR_12->extalclk) {

  VAR_17 |= VAR_14 ? VAR_4 : VAR_2;
  goto out;
 } else if (VAR_16 < 2) {

  FUNC_4(VAR_8->dev, "failed to derive required HCK%c rate\n",
    VAR_14 ? 'T' : 'R');
  return -VAR_0;
 }

 VAR_19 = FUNC_5(VAR_8, VAR_14, VAR_16, 0, 0);
 if (VAR_19)
  return VAR_19;

 VAR_12->sck_div[VAR_14] = 0;

out:
 VAR_12->hck_dir[VAR_14] = VAR_11;
 VAR_12->hck_rate[VAR_14] = VAR_10;

 FUNC_6(VAR_12->regmap, VAR_6,
      VAR_14 ? VAR_3 | VAR_4 :
      VAR_1 | VAR_2, VAR_17);

 return 0;
}
