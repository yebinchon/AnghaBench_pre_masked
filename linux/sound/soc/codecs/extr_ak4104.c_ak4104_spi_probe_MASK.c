
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; int dev; int mode; } ;
struct gpio_desc {int dummy; } ;
struct ak4104_private {struct gpio_desc* regmap; struct gpio_desc* regulator; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,char*,int) ;
 struct gpio_desc* FUNC_3 (int *,char*,int ) ;
 struct ak4104_private* FUNC_4 (int *,int,int ) ;
 struct gpio_desc* FUNC_5 (struct spi_device*,int *) ;
 struct gpio_desc* FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int *,int *,int) ;
 int FUNC_8 (struct gpio_desc*,int ,unsigned int*) ;
 int VAR_10 ;
 int FUNC_9 (struct spi_device*,struct ak4104_private*) ;
 int FUNC_10 (struct spi_device*) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_11)
{
 struct ak4104_private *VAR_12;
 struct gpio_desc *VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 VAR_11->bits_per_word = 8;
 VAR_11->mode = VAR_7;
 VAR_15 = FUNC_10(VAR_11);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_12 = FUNC_4(&VAR_11->dev, sizeof(struct ak4104_private),
         VAR_5);
 if (VAR_12 == ((void*)0))
  return -VAR_3;

 VAR_12->regulator = FUNC_6(&VAR_11->dev, "vdd");
 if (FUNC_0(VAR_12->regulator)) {
  VAR_15 = FUNC_1(VAR_12->regulator);
  FUNC_2(&VAR_11->dev, "Unable to get Vdd regulator: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_12->regmap = FUNC_5(VAR_11, &VAR_9);
 if (FUNC_0(VAR_12->regmap)) {
  VAR_15 = FUNC_1(VAR_12->regmap);
  return VAR_15;
 }

 VAR_13 = FUNC_3(&VAR_11->dev, "reset",
           VAR_6);
 if (FUNC_0(VAR_13) &&
     FUNC_1(VAR_13) == -VAR_4)
  return -VAR_4;




 VAR_15 = FUNC_8(VAR_12->regmap, VAR_0, &VAR_14);
 if (VAR_15 != 0)
  return VAR_15;
 if (VAR_14 != VAR_1)
  return -VAR_2;

 FUNC_9(VAR_11, VAR_12);

 VAR_15 = FUNC_7(&VAR_11->dev,
   &VAR_10, &VAR_8, 1);
 return VAR_15;
}
