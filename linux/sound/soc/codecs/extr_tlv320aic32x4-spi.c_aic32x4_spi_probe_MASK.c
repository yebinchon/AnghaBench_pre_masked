
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct regmap_config {int reg_bits; int pad_bits; int val_bits; int read_flag_mask; } ;
struct regmap {int dummy; } ;


 int FUNC_0 (int *,struct regmap*) ;
 struct regmap_config VAR_0 ;
 struct regmap* FUNC_1 (struct spi_device*,struct regmap_config*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_1)
{
 struct regmap *VAR_2;
 struct regmap_config VAR_3;

 VAR_3 = VAR_0;
 VAR_3.reg_bits = 7;
 VAR_3.pad_bits = 1;
 VAR_3.val_bits = 8;
 VAR_3.read_flag_mask = 0x01;

 VAR_2 = FUNC_1(VAR_1, &VAR_3);
 return FUNC_0(&VAR_1->dev, VAR_2);
}
