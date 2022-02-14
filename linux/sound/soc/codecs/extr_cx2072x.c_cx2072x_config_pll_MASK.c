
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct device {int dummy; } ;
struct cx2072x_priv {unsigned int sample_rate; unsigned int mclk_rate; int regmap; struct device* dev; } ;


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
 int FUNC_0 (struct device*,char*,unsigned int) ;
 int FUNC_1 (int,int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct cx2072x_priv *VAR_10)
{
 struct device *VAR_11 = VAR_10->dev;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;
 u64 VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20 = VAR_10->sample_rate;
 int VAR_21 = 2;
 int VAR_22 = 96;

 switch (VAR_20) {
 case 48000:
 case 32000:
 case 24000:
 case 16000:
  break;

 case 96000:
  VAR_21 = 1;
  VAR_22 = 48;
  break;

 case 192000:
  VAR_21 = 0;
  VAR_22 = 24;
  break;

 default:
  FUNC_0(VAR_11, "Unsupported sample rate %d\n", VAR_20);
  return -VAR_9;
 }


 VAR_12 = FUNC_2(VAR_10->mclk_rate);
 VAR_14 = VAR_10->mclk_rate / VAR_12;
 VAR_15 = VAR_20 * 3072;
 VAR_16 = VAR_15 / VAR_14;
 VAR_17 = VAR_15 - (VAR_16 * VAR_14);

 if (VAR_17) {
  VAR_17 *= 1000;
  VAR_17 /= VAR_14;
  VAR_18 = (u64)(4000 + VAR_17) * ((1 << 20) - 4);
  FUNC_1(VAR_18, 7);
  VAR_19 = ((u32)VAR_18 + 499) / 1000;
 }
 VAR_13 = (VAR_12 - 1) * 2;

 FUNC_4(VAR_10->regmap, VAR_0,
       0x40 | (VAR_13 << 8));
 if (VAR_17 == 0) {

  FUNC_4(VAR_10->regmap, VAR_2, 0x100);
 } else {

  FUNC_4(VAR_10->regmap, VAR_1,
        VAR_19 & 0xfff);
  FUNC_4(VAR_10->regmap, VAR_2,
        (u8)(VAR_19 >> 12));
 }

 VAR_16--;
 FUNC_4(VAR_10->regmap, VAR_3, VAR_16);


 if (VAR_17 == 0) {

  FUNC_4(VAR_10->regmap, VAR_4, 0x00);
 } else {

  FUNC_4(VAR_10->regmap, VAR_4,
        (VAR_21 << 4) & 0xf0);
  FUNC_4(VAR_10->regmap, VAR_5,
        VAR_22);
  FUNC_4(VAR_10->regmap, VAR_6,
        VAR_22 * 3 / 2);
  FUNC_4(VAR_10->regmap, VAR_7, 0x01);
  FUNC_4(VAR_10->regmap, VAR_8, 0x02);
  FUNC_3(VAR_10->regmap, VAR_4,
       0x01, 0x01);
 }

 return 0;
}
