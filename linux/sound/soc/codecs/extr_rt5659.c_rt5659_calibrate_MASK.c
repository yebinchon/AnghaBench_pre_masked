
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt5659_priv {int regmap; TYPE_1__* component; } ;
struct TYPE_2__ {int dev; } ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct rt5659_priv *VAR_37)
{
 int VAR_38, VAR_39;



 FUNC_4(VAR_37->regmap, VAR_1, 0xa502);
 FUNC_4(VAR_37->regmap, VAR_4, 0x3030);

 FUNC_4(VAR_37->regmap, VAR_23, 0xef00);
 FUNC_4(VAR_37->regmap, VAR_24, 0xeffc);
 FUNC_4(VAR_37->regmap, VAR_17, 0x0280);
 FUNC_4(VAR_37->regmap, VAR_10, 0x0001);
 FUNC_4(VAR_37->regmap, VAR_11, 0x8000);

 FUNC_4(VAR_37->regmap, VAR_25, 0xaa7e);
 FUNC_1(60);
 FUNC_4(VAR_37->regmap, VAR_25, 0xfe7e);
 FUNC_1(50);
 FUNC_4(VAR_37->regmap, VAR_26, 0x0004);
 FUNC_4(VAR_37->regmap, VAR_28, 0x0400);
 FUNC_1(50);
 FUNC_4(VAR_37->regmap, VAR_27, 0x0080);
 FUNC_5(10000, 10005);
 FUNC_4(VAR_37->regmap, VAR_9, 0x0009);
 FUNC_1(50);
 FUNC_4(VAR_37->regmap, VAR_27, 0x0f80);
 FUNC_1(50);
 FUNC_4(VAR_37->regmap, VAR_15, 0x0e16);
 FUNC_1(50);


 FUNC_4(VAR_37->regmap, VAR_3, 0x0505);
 FUNC_1(50);
 FUNC_4(VAR_37->regmap, VAR_26, 0x0184);
 FUNC_4(VAR_37->regmap, VAR_2, 0x3c05);
 FUNC_4(VAR_37->regmap, VAR_13, 0x20c1);


 FUNC_4(VAR_37->regmap, VAR_13, 0x2cc1);
 FUNC_4(VAR_37->regmap, VAR_12, 0x5100);
 FUNC_4(VAR_37->regmap, VAR_14, 0x0014);
 FUNC_4(VAR_37->regmap, VAR_12, 0xd100);
 FUNC_1(60);


 FUNC_4(VAR_37->regmap, VAR_13, 0x2cc1);
 FUNC_4(VAR_37->regmap, VAR_12, 0x4900);
 FUNC_4(VAR_37->regmap, VAR_14, 0x0016);
 FUNC_3(VAR_37->regmap, VAR_12,
  0x8000, 0x8000);

 VAR_39 = 0;
 while (1) {
  FUNC_2(VAR_37->regmap, VAR_12, &VAR_38);
  if (VAR_38 & 0x8000)
   FUNC_5(10000, 10005);
  else
   break;

  if (VAR_39 > 30) {
   FUNC_0(VAR_37->component->dev,
    "HP Calibration 1 Failure\n");
   return;
  }

  VAR_39++;
 }


 FUNC_4(VAR_37->regmap, VAR_13, 0x2cc1);
 FUNC_4(VAR_37->regmap, VAR_16, 0x0000);
 FUNC_4(VAR_37->regmap, VAR_12, 0x4500);
 FUNC_4(VAR_37->regmap, VAR_14, 0x001f);
 FUNC_3(VAR_37->regmap, VAR_12,
  0x8000, 0x8000);

 VAR_39 = 0;
 while (1) {
  FUNC_2(VAR_37->regmap, VAR_12, &VAR_38);
  if (VAR_38 & 0x8000)
   FUNC_5(10000, 10005);
  else
   break;

  if (VAR_39 > 85) {
   FUNC_0(VAR_37->component->dev,
    "HP Calibration 2 Failure\n");
   return;
  }

  VAR_39++;
 }

 FUNC_4(VAR_37->regmap, VAR_14, 0x0000);
 FUNC_4(VAR_37->regmap, VAR_13, 0x20c0);



 FUNC_4(VAR_37->regmap, VAR_5, 0x2021);
 FUNC_4(VAR_37->regmap, VAR_8, 0x0260);
 FUNC_4(VAR_37->regmap, VAR_29, 0x3000);
 FUNC_4(VAR_37->regmap, VAR_30, 0xc000);
 FUNC_4(VAR_37->regmap, VAR_0, 0x000c);
 FUNC_4(VAR_37->regmap, VAR_10, 0x8000);
 FUNC_4(VAR_37->regmap, VAR_36, 0x0808);
 FUNC_4(VAR_37->regmap, VAR_33, 0x001e);
 FUNC_4(VAR_37->regmap, VAR_34, 0x001e);
 FUNC_4(VAR_37->regmap, VAR_6, 0x0803);
 FUNC_4(VAR_37->regmap, VAR_7, 0x0554);
 FUNC_4(VAR_37->regmap, VAR_35, 0x1103);


 FUNC_4(VAR_37->regmap, VAR_3, 0x0909);
 FUNC_3(VAR_37->regmap, VAR_13, 0x0001,
  0x0001);


 FUNC_4(VAR_37->regmap, VAR_32, 0x0000);
 FUNC_4(VAR_37->regmap, VAR_5, 0x0021);
 FUNC_4(VAR_37->regmap, VAR_31, 0x3e80);
 FUNC_3(VAR_37->regmap, VAR_31,
  0x8000, 0x8000);

 VAR_39 = 0;
 while (1) {
  FUNC_2(VAR_37->regmap,
    VAR_31, &VAR_38);
  if (VAR_38 & 0x8000)
   FUNC_5(10000, 10005);
  else
   break;

  if (VAR_39 > 10) {
   FUNC_0(VAR_37->component->dev,
    "SPK Calibration Failure\n");
   return;
  }

  VAR_39++;
 }



 FUNC_4(VAR_37->regmap, VAR_10, 0x0000);
 FUNC_4(VAR_37->regmap, VAR_18, 0x021f);
 FUNC_4(VAR_37->regmap, VAR_22, 0x480a);

 FUNC_4(VAR_37->regmap, VAR_20, 0x0003);
 FUNC_4(VAR_37->regmap, VAR_21, 0x0009);


 FUNC_4(VAR_37->regmap, VAR_32, 0x000f);
 FUNC_4(VAR_37->regmap, VAR_19, 0x1e00);
 FUNC_3(VAR_37->regmap, VAR_19,
  0x8000, 0x8000);

 VAR_39 = 0;
 while (1) {
  FUNC_2(VAR_37->regmap, VAR_19,
   &VAR_38);
  if (VAR_38 & 0x8000)
   FUNC_5(10000, 10005);
  else
   break;

  if (VAR_39 > 35) {
   FUNC_0(VAR_37->component->dev,
    "Mono Calibration Failure\n");
   return;
  }

  VAR_39++;
 }

 FUNC_4(VAR_37->regmap, VAR_32, 0x0003);



 FUNC_4(VAR_37->regmap, VAR_3, 0x0808);
 FUNC_4(VAR_37->regmap, VAR_26, 0x0000);
 FUNC_4(VAR_37->regmap, VAR_2, 0x2005);
 FUNC_4(VAR_37->regmap, VAR_13, 0x20c0);
 FUNC_4(VAR_37->regmap, VAR_9, 0x0000);
 FUNC_4(VAR_37->regmap, VAR_6, 0x0011);
 FUNC_4(VAR_37->regmap, VAR_7, 0x0150);
 FUNC_4(VAR_37->regmap, VAR_25, 0xfe3e);
 FUNC_4(VAR_37->regmap, VAR_22, 0xc80a);
 FUNC_4(VAR_37->regmap, VAR_19, 0x1e04);
 FUNC_4(VAR_37->regmap, VAR_29, 0x0000);
 FUNC_4(VAR_37->regmap, VAR_30, 0x0000);
 FUNC_4(VAR_37->regmap, VAR_27, 0x0000);
 FUNC_4(VAR_37->regmap, VAR_28, 0x0000);
 FUNC_4(VAR_37->regmap, VAR_25, 0x003e);
 FUNC_4(VAR_37->regmap, VAR_8, 0x0060);
 FUNC_4(VAR_37->regmap, VAR_5, 0x2021);
 FUNC_4(VAR_37->regmap, VAR_11, 0x0000);
 FUNC_4(VAR_37->regmap, VAR_17, 0x0080);
 FUNC_4(VAR_37->regmap, VAR_16, 0x8080);
 FUNC_4(VAR_37->regmap, VAR_15, 0x0c16);
}
