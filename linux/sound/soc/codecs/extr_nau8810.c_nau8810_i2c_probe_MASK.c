
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau8810 {int regmap; struct device* dev; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct nau8810* FUNC_2 (struct device*) ;
 struct nau8810* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (struct device*,int *,int *,int) ;
 int FUNC_6 (struct i2c_client*,struct nau8810*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6,
       const struct i2c_device_id *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 struct nau8810 *VAR_9 = FUNC_2(VAR_8);

 if (!VAR_9) {
  VAR_9 = FUNC_3(VAR_8, sizeof(*VAR_9), VAR_1);
  if (!VAR_9)
   return -VAR_0;
 }
 FUNC_6(VAR_6, VAR_9);

 VAR_9->regmap = FUNC_4(VAR_6, &VAR_5);
 if (FUNC_0(VAR_9->regmap))
  return FUNC_1(VAR_9->regmap);
 VAR_9->dev = VAR_8;

 FUNC_7(VAR_9->regmap, VAR_2, 0x00);

 return FUNC_5(VAR_8,
  &VAR_3, &VAR_4, 1);
}
