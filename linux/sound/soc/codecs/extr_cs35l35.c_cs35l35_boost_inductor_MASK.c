
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct cs35l35_private {int dev; struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;
 int FUNC_2 (struct regmap*,int ,int ,int) ;
 int FUNC_3 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct cs35l35_private *VAR_9,
      int VAR_10)
{
 struct regmap *VAR_11 = VAR_9->regmap;
 unsigned int VAR_12 = 0;






 FUNC_2(VAR_11, VAR_5,
      VAR_4, 0x00);

 FUNC_1(VAR_11, VAR_7, &VAR_12);
 VAR_12 &= VAR_6;

 switch (VAR_10) {
 case 1000:
  FUNC_3(VAR_11, VAR_0, 0x24);
  FUNC_3(VAR_11, VAR_1, 0x24);
  FUNC_2(VAR_11, VAR_5,
       VAR_2, 0x00);

  if (VAR_12 < 0x04)
   FUNC_3(VAR_11, VAR_3, 0x1B);
  else
   FUNC_3(VAR_11, VAR_3, 0x4E);
  break;
 case 1200:
  FUNC_3(VAR_11, VAR_0, 0x20);
  FUNC_3(VAR_11, VAR_1, 0x20);
  FUNC_2(VAR_11, VAR_5,
       VAR_2, 0x01);

  if (VAR_12 < 0x04)
   FUNC_3(VAR_11, VAR_3, 0x1B);
  else
   FUNC_3(VAR_11, VAR_3, 0x47);
  break;
 case 1500:
  FUNC_3(VAR_11, VAR_0, 0x20);
  FUNC_3(VAR_11, VAR_1, 0x20);
  FUNC_2(VAR_11, VAR_5,
       VAR_2, 0x02);

  if (VAR_12 < 0x04)
   FUNC_3(VAR_11, VAR_3, 0x1B);
  else
   FUNC_3(VAR_11, VAR_3, 0x3C);
  break;
 case 2200:
  FUNC_3(VAR_11, VAR_0, 0x19);
  FUNC_3(VAR_11, VAR_1, 0x25);
  FUNC_2(VAR_11, VAR_5,
       VAR_2, 0x03);

  if (VAR_12 < 0x04)
   FUNC_3(VAR_11, VAR_3, 0x1B);
  else
   FUNC_3(VAR_11, VAR_3, 0x23);
  break;
 default:
  FUNC_0(VAR_9->dev, "Invalid Inductor Value %d uH\n",
   VAR_10);
  return -VAR_8;
 }
 return 0;
}
