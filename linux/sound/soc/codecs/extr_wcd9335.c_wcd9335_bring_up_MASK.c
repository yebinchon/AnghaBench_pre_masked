
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd9335_codec {int dev; int version; struct regmap* regmap; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct regmap*,int ,int*) ;
 int FUNC_3 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct wcd9335_codec *VAR_9)
{
 struct regmap *VAR_10 = VAR_9->regmap;
 int VAR_11, VAR_12;

 FUNC_2(VAR_10, VAR_3, &VAR_11);
 FUNC_2(VAR_10, VAR_2, &VAR_12);

 if ((VAR_11 < 0) || (VAR_12 < 0)) {
  FUNC_0(VAR_9->dev, "WCD9335 CODEC version detection fail!\n");
  return -VAR_0;
 }

 if (VAR_12 == 0x1) {
  FUNC_1(VAR_9->dev, "WCD9335 CODEC version is v2.0\n");
  VAR_9->version = VAR_8;
  FUNC_3(VAR_10, VAR_5, 0x01);
  FUNC_3(VAR_10, VAR_7, 0x00);
  FUNC_3(VAR_10, VAR_6, 0x6F);
  FUNC_3(VAR_10, VAR_1, 0x65);
  FUNC_3(VAR_10, VAR_4, 0x5);
  FUNC_3(VAR_10, VAR_4, 0x7);
  FUNC_3(VAR_10, VAR_4, 0x3);
  FUNC_3(VAR_10, VAR_5, 0x3);
 } else {
  FUNC_0(VAR_9->dev, "WCD9335 CODEC version not supported\n");
  return -VAR_0;
 }

 return 0;
}
