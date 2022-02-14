
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct nau8825 {int dev; int mclk_freq; int mclk; struct regmap* regmap; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct regmap*) ;
 int FUNC_5 (struct regmap*) ;
 int FUNC_6 (struct nau8825*,unsigned int) ;
 int FUNC_7 (struct nau8825*,int) ;
 int FUNC_8 (struct nau8825*) ;
 int FUNC_9 (struct regmap*,int ,int,int) ;

__attribute__((used)) static int FUNC_10(struct nau8825 *VAR_19, int VAR_20,
 unsigned int VAR_21)
{
 struct regmap *VAR_22 = VAR_19->regmap;
 int VAR_23;

 switch (VAR_20) {
 case 133:

  FUNC_4(VAR_22);
  if (VAR_19->mclk_freq) {
   FUNC_0(VAR_19->mclk);
   VAR_19->mclk_freq = 0;
  }

  break;
 case 128:





  FUNC_7(VAR_19, 3 * VAR_1);
  FUNC_4(VAR_22);

  FUNC_9(VAR_22, VAR_14,
   VAR_2, 0);

  FUNC_8(VAR_19);

  VAR_23 = FUNC_6(VAR_19, VAR_21);
  if (VAR_23)
   return VAR_23;

  break;
 case 129:
  if (FUNC_5(VAR_19->regmap)) {
   FUNC_9(VAR_22, VAR_17,
    VAR_5, VAR_5);
   FUNC_9(VAR_22, VAR_14,
    VAR_3, VAR_4);



   FUNC_9(VAR_22, VAR_14,
    VAR_2, 0xf);
   FUNC_9(VAR_22, VAR_15,
    VAR_13 |
    VAR_10, 0x10);
   FUNC_9(VAR_22, VAR_17,
    VAR_18, VAR_18);
  } else {



   FUNC_4(VAR_22);
   FUNC_3(VAR_19->dev, "Disable clock for power saving when no headset connected\n");
  }
  if (VAR_19->mclk_freq) {
   FUNC_0(VAR_19->mclk);
   VAR_19->mclk_freq = 0;
  }

  break;
 case 130:





  FUNC_7(VAR_19, 3 * VAR_1);




  FUNC_9(VAR_22, VAR_16,
   VAR_8 | VAR_11,
   VAR_9 | 0);

  FUNC_8(VAR_19);

  VAR_23 = FUNC_6(VAR_19, VAR_21);
  if (VAR_23)
   return VAR_23;

  break;
 case 132:





  FUNC_7(VAR_19, 3 * VAR_1);






  FUNC_9(VAR_22, VAR_16,
   VAR_8 | VAR_11,
   VAR_6 |
   (0xf << VAR_12));

  FUNC_8(VAR_19);

  if (VAR_19->mclk_freq) {
   FUNC_0(VAR_19->mclk);
   VAR_19->mclk_freq = 0;
  }

  break;
 case 131:





  FUNC_7(VAR_19, 3 * VAR_1);






  FUNC_9(VAR_22, VAR_16,
   VAR_8 | VAR_11,
   VAR_7 |
   (0xf << VAR_12));

  FUNC_8(VAR_19);

  if (VAR_19->mclk_freq) {
   FUNC_0(VAR_19->mclk);
   VAR_19->mclk_freq = 0;
  }

  break;
 default:
  FUNC_2(VAR_19->dev, "Invalid clock id (%d)\n", VAR_20);
  return -VAR_0;
 }

 FUNC_1(VAR_19->dev, "Sysclk is %dHz and clock id is %d\n", VAR_21,
  VAR_20);
 return 0;
}
