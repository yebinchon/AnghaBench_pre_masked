
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs35l36_private {scalar_t__ rev_id; int regmap; int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int,int ) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct cs35l36_private *VAR_17)
{
 int VAR_18, VAR_19;
 unsigned int VAR_20;

 if (VAR_17->rev_id != VAR_10)
  return 0;




 FUNC_3(VAR_17->regmap, VAR_11,
       VAR_14);
 FUNC_3(VAR_17->regmap, VAR_11,
       VAR_15);

 FUNC_4(9500, 10500);

 FUNC_3(VAR_17->regmap, VAR_3,
       VAR_9);
 FUNC_3(VAR_17->regmap, VAR_4,
       VAR_6);
 FUNC_3(VAR_17->regmap, VAR_8,
       VAR_0);

 FUNC_3(VAR_17->regmap, VAR_4,
       VAR_7);
 FUNC_3(VAR_17->regmap, VAR_3,
       VAR_5);

 FUNC_4(9500, 10500);

 VAR_18 = FUNC_1(VAR_17->regmap, VAR_1, &VAR_20);
 if (VAR_18 < 0) {
  FUNC_0(VAR_17->dev, "Failed to read int4_status %d\n", VAR_18);
  return VAR_18;
 }

 VAR_19 = 0;
 while (!(VAR_20 & VAR_2)) {
  FUNC_4(100, 200);
  VAR_19++;

  VAR_18 = FUNC_1(VAR_17->regmap, VAR_1,
      &VAR_20);
  if (VAR_18 < 0) {
   FUNC_0(VAR_17->dev, "Failed to read int4_status %d\n",
    VAR_18);
   return VAR_18;
  }

  if (VAR_19 >= 100)
   return -VAR_16;
 }

 FUNC_3(VAR_17->regmap, VAR_1,
       VAR_2);
 FUNC_2(VAR_17->regmap, VAR_3,
      VAR_5, 0);

 FUNC_3(VAR_17->regmap, VAR_11,
       VAR_12);
 FUNC_3(VAR_17->regmap, VAR_11,
       VAR_13);

 return 0;
}
