
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd9335_codec {scalar_t__ master_bias_users; int clk_mclk_users; scalar_t__ clk_type; int regmap; int dev; } ;


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
 scalar_t__ VAR_14 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct wcd9335_codec *VAR_15)
{

 if (VAR_15->master_bias_users <= 0)
  return -VAR_0;

 if (((VAR_15->clk_mclk_users == 0) && (VAR_15->clk_type == VAR_14)) ||
     ((VAR_15->clk_mclk_users > 0) && (VAR_15->clk_type != VAR_14))) {
  FUNC_0(VAR_15->dev, "Error enabling MCLK, clk_type: %d\n",
   VAR_15->clk_type);
  return -VAR_0;
 }

 if (++VAR_15->clk_mclk_users == 1) {
  FUNC_1(VAR_15->regmap, VAR_7,
     VAR_2,
     VAR_1);
  FUNC_1(VAR_15->regmap, VAR_7,
     VAR_6,
     VAR_5);
  FUNC_1(VAR_15->regmap, VAR_7,
     VAR_4,
     VAR_3);
  FUNC_1(VAR_15->regmap,
       VAR_8,
       VAR_10,
       VAR_9);
  FUNC_1(VAR_15->regmap,
       VAR_11,
       VAR_13,
       VAR_12);




  FUNC_2(10, 15);
 }

 VAR_15->clk_type = VAR_14;

 return 0;
}
