
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm2835_i2s_dev {int clk_prepared; int i2s_regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bcm2835_i2s_dev*) ;
 int FUNC_1 (struct bcm2835_i2s_dev*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct bcm2835_i2s_dev *VAR_6,
        bool VAR_7, bool VAR_8)
{
 int VAR_9 = 1000;
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;
 bool VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;

 VAR_14 = VAR_7 ? VAR_5 : 0;
 VAR_14 |= VAR_8 ? VAR_2 : 0;

 VAR_15 = VAR_7 ? VAR_4 : 0;
 VAR_15 |= VAR_8 ? VAR_1 : 0;


 FUNC_3(VAR_6->i2s_regmap, VAR_0, &VAR_11);
 VAR_12 = VAR_11 & (VAR_2 | VAR_5);


 VAR_13 = VAR_6->clk_prepared;
 if (!VAR_13)
  FUNC_0(VAR_6);


 FUNC_4(VAR_6->i2s_regmap, VAR_0, VAR_14, 0);





 FUNC_4(VAR_6->i2s_regmap, VAR_0, VAR_15, VAR_15);







 FUNC_3(VAR_6->i2s_regmap, VAR_0, &VAR_10);
 VAR_10 &= VAR_3;

 FUNC_4(VAR_6->i2s_regmap, VAR_0,
   VAR_3, ~VAR_10);


 while (--VAR_9) {
  FUNC_3(VAR_6->i2s_regmap, VAR_0, &VAR_11);
  if ((VAR_11 & VAR_3) != VAR_10)
   break;
 }

 if (!VAR_9)
  FUNC_2(VAR_6->dev, "I2S SYNC error!\n");


 if (!VAR_13)
  FUNC_1(VAR_6);


 FUNC_4(VAR_6->i2s_regmap, VAR_0,
   VAR_2 | VAR_5, VAR_12);
}
