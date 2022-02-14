
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sigmadsp {int dev; } ;
struct i2c_client {int dummy; } ;
struct adau1701 {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 struct adau1701* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int*,int) ;
 int FUNC_4 (int*,int const*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned int,int*) ;
 int FUNC_7 (int ,int ,unsigned int*) ;
 int FUNC_8 (int ,int ,unsigned int,unsigned int) ;
 struct i2c_client* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct sigmadsp *VAR_3, unsigned int VAR_4,
 const uint8_t VAR_5[], size_t VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_9(VAR_3->dev);
 struct adau1701 *VAR_8 = FUNC_2(VAR_7);
 unsigned int VAR_9;
 unsigned int VAR_10;
 uint8_t VAR_11[10];
 int VAR_12;

 VAR_12 = FUNC_7(VAR_8->regmap, VAR_0, &VAR_9);
 if (VAR_12)
  return VAR_12;

 if (VAR_9 & VAR_1)
  FUNC_5(50);

 for (VAR_10 = 0; VAR_10 < VAR_6 / 4; VAR_10++) {
  FUNC_6(FUNC_1(VAR_10), VAR_11);
  VAR_11[2] = 0x00;
  FUNC_4(VAR_11 + 3, VAR_5 + VAR_10 * 4, 4);
  VAR_12 = FUNC_3(VAR_7, VAR_11, 7);
  if (VAR_12 < 0)
   return VAR_12;
  else if (VAR_12 != 7)
   return -VAR_2;

  FUNC_6(FUNC_0(VAR_10), VAR_11);
  FUNC_6(VAR_4 + VAR_10, VAR_11 + 2);
  VAR_12 = FUNC_3(VAR_7, VAR_11, 4);
  if (VAR_12 < 0)
   return VAR_12;
  else if (VAR_12 != 4)
   return -VAR_2;
 }

 return FUNC_8(VAR_8->regmap, VAR_0,
  VAR_1, VAR_1);
}
