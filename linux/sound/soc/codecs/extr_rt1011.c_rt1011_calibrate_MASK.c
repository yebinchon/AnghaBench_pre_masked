
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct rt1011_priv {unsigned int r0_reg; int cali_done; int regmap; int component; } ;
struct device {int dummy; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,unsigned int,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct device* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,unsigned int*) ;
 int FUNC_8 (int ,int ,int) ;
 struct snd_soc_dapm_context* FUNC_9 (int ) ;
 int FUNC_10 (struct snd_soc_dapm_context*) ;
 int FUNC_11 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_12(struct rt1011_priv *VAR_43, unsigned char VAR_44)
{
 unsigned int VAR_45, VAR_46 = 0, VAR_47[3];
 unsigned int VAR_48 = 50;
 unsigned int VAR_49;
 unsigned int VAR_50, VAR_51, VAR_52;
 struct device *VAR_53 = FUNC_6(VAR_43->regmap);
 struct snd_soc_dapm_context *VAR_54 =
  FUNC_9(VAR_43->component);
 int VAR_55 = 0;

 FUNC_10(VAR_54);
 FUNC_3(VAR_43->regmap, 1);

 FUNC_8(VAR_43->regmap, VAR_35, 0x0000);
 FUNC_8(VAR_43->regmap, VAR_42, 0x740f);
 FUNC_8(VAR_43->regmap, VAR_42, 0x770f);


 FUNC_8(VAR_43->regmap, VAR_10, 0x9400);
 FUNC_8(VAR_43->regmap, VAR_27, 0x0800);
 FUNC_8(VAR_43->regmap, VAR_28, 0x0020);
 FUNC_8(VAR_43->regmap, VAR_11, 0x0800);


 FUNC_8(VAR_43->regmap, VAR_3, 0x0a20);
 FUNC_8(VAR_43->regmap, VAR_12, 0xe232);
 FUNC_8(VAR_43->regmap, VAR_1, 0x2925);
 FUNC_8(VAR_43->regmap, VAR_2, 0xc000);


 FUNC_8(VAR_43->regmap, VAR_36, 0xb00c);
 FUNC_8(VAR_43->regmap, VAR_37, 0xcccc);


 FUNC_8(VAR_43->regmap, VAR_29, 0xe0e0);
 FUNC_8(VAR_43->regmap, VAR_31, 0x5003);
 FUNC_8(VAR_43->regmap, VAR_34, 0xa860);
 FUNC_8(VAR_43->regmap, VAR_12, 0xa032);


 FUNC_8(VAR_43->regmap, VAR_30, 0x0007);
 FUNC_8(VAR_43->regmap, VAR_31, 0x5ff7);
 FUNC_8(VAR_43->regmap, VAR_4, 0x7f44);
 FUNC_8(VAR_43->regmap, VAR_5, 0x4054);
 FUNC_8(VAR_43->regmap, VAR_6, 0x309c);


 FUNC_8(VAR_43->regmap, VAR_14, 0xcb00);
 FUNC_8(VAR_43->regmap, VAR_7, 0xe080);
 FUNC_8(VAR_43->regmap, VAR_32, 0x16f2);
 FUNC_8(VAR_43->regmap, VAR_33, 0x36ad);


 FUNC_8(VAR_43->regmap, VAR_26, 0x3f1d);


 FUNC_8(VAR_43->regmap, VAR_17, 0x0d0a);
 FUNC_2(30);

 FUNC_7(VAR_43->regmap, VAR_16, &VAR_45);
 VAR_49 = VAR_45 << 16;
 FUNC_7(VAR_43->regmap, VAR_15, &VAR_45);
 VAR_49 |= (VAR_45 & 0xffff);
 FUNC_1(VAR_53, "ADC offset=0x%x\n", VAR_49);
 FUNC_7(VAR_43->regmap, VAR_19, &VAR_45);
 VAR_49 = VAR_45 << 16;
 FUNC_7(VAR_43->regmap, VAR_18, &VAR_45);
 VAR_49 |= (VAR_45 & 0xffff);
 FUNC_1(VAR_53, "Gain0 offset=0x%x\n", VAR_49);
 FUNC_7(VAR_43->regmap, VAR_21, &VAR_45);
 VAR_49 = VAR_45 << 16;
 FUNC_7(VAR_43->regmap, VAR_20, &VAR_45);
 VAR_49 |= (VAR_45 & 0xffff);
 FUNC_1(VAR_53, "Gain1 offset=0x%x\n", VAR_49);


 if (VAR_44) {

  FUNC_8(VAR_43->regmap, VAR_9, 0x010e);
  FUNC_8(VAR_43->regmap,
   VAR_8, 0x1701);


  FUNC_8(VAR_43->regmap, VAR_38, 0x8000);
  FUNC_8(VAR_43->regmap, VAR_41, 0xf000);
  FUNC_8(VAR_43->regmap, VAR_39, 0x4040);
  FUNC_8(VAR_43->regmap, VAR_38, 0xc000);
  FUNC_8(VAR_43->regmap, VAR_40, 0x07c2);

  VAR_47[0] = VAR_47[1] = VAR_47[2] = VAR_46 = 0;
  while (VAR_46 < VAR_48) {
   FUNC_2(100);
   FUNC_7(VAR_43->regmap,
    VAR_25, &VAR_45);
   VAR_47[VAR_46%3] = VAR_45 << 16;
   FUNC_7(VAR_43->regmap,
    VAR_24, &VAR_45);
   VAR_47[VAR_46%3] |= VAR_45;

   if (VAR_47[VAR_46%3] == 0)
    continue;

   VAR_46++;

   if (VAR_47[0] == VAR_47[1] && VAR_47[1] == VAR_47[2])
    break;
  }
  if (VAR_46 > VAR_48) {
   FUNC_0(VAR_53, "Calibrate R0 Failure\n");
   VAR_55 = -VAR_0;
  } else {
   VAR_52 = 2147483648U;
   VAR_50 = VAR_52 / VAR_47[0] / 128;
   VAR_51 = ((VAR_52 / VAR_47[0] * 100) / 128)
       - (VAR_50 * 100);
   VAR_43->r0_reg = VAR_47[0];
   VAR_43->cali_done = 1;
   FUNC_1(VAR_53, "r0 resistance about %d.%02d ohm, reg=0x%X\n",
    VAR_50, VAR_51, VAR_47[0]);
  }
 }


 FUNC_8(VAR_43->regmap, VAR_38, 0x0000);
 FUNC_2(400);
 FUNC_8(VAR_43->regmap, VAR_34, 0xa840);
 FUNC_8(VAR_43->regmap, VAR_40, 0x0702);
 FUNC_8(VAR_43->regmap, VAR_26, 0xffdd);
 FUNC_8(VAR_43->regmap, VAR_8, 0x0701);
 FUNC_8(VAR_43->regmap, VAR_13, 0xe004);
 FUNC_8(VAR_43->regmap, VAR_4, 0x7f40);
 FUNC_8(VAR_43->regmap, VAR_29, 0x0000);
 FUNC_8(VAR_43->regmap, VAR_30, 0x0000);
 FUNC_8(VAR_43->regmap, VAR_31, 0x0002);
 FUNC_8(VAR_43->regmap, VAR_32, 0x00f2);

 FUNC_8(VAR_43->regmap, VAR_35, 0x0000);

 if (VAR_44) {
  if (VAR_46 <= VAR_48) {
   FUNC_8(VAR_43->regmap,
    VAR_23,
    ((VAR_47[0]>>16) & 0x1ff));
   FUNC_8(VAR_43->regmap,
    VAR_22,
    (VAR_47[0] & 0xffff));
   FUNC_8(VAR_43->regmap,
    VAR_39, 0x4080);
  }
 }

 FUNC_3(VAR_43->regmap, 0);
 FUNC_4(VAR_43->regmap);
 FUNC_5(VAR_43->regmap);
 FUNC_11(VAR_54);

 return VAR_55;
}
