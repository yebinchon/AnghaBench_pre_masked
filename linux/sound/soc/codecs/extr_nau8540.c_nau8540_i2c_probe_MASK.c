
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau8540 {int regmap; struct device* dev; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct nau8540* FUNC_3 (struct device*) ;
 struct nau8540* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct device*,int *,int *,int) ;
 int FUNC_7 (struct i2c_client*,struct nau8540*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (struct nau8540*) ;
 int VAR_5 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_6,
 const struct i2c_device_id *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 struct nau8540 *VAR_9 = FUNC_3(VAR_8);
 int VAR_10, VAR_11;

 if (!VAR_9) {
  VAR_9 = FUNC_4(VAR_8, sizeof(*VAR_9), VAR_1);
  if (!VAR_9)
   return -VAR_0;
 }
 FUNC_7(VAR_6, VAR_9);

 VAR_9->regmap = FUNC_5(VAR_6, &VAR_5);
 if (FUNC_0(VAR_9->regmap))
  return FUNC_1(VAR_9->regmap);
 VAR_10 = FUNC_10(VAR_9->regmap, VAR_2, &VAR_11);
 if (VAR_10 < 0) {
  FUNC_2(VAR_8, "Failed to read device id from the NAU85L40: %d\n",
   VAR_10);
  return VAR_10;
 }

 VAR_9->dev = VAR_8;
 FUNC_9(VAR_9->regmap);
 FUNC_8(VAR_9);

 return FUNC_6(VAR_8,
  &VAR_3, &VAR_4, 1);
}
