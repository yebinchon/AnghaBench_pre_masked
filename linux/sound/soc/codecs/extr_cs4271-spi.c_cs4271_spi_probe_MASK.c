
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct regmap_config {int reg_bits; int val_bits; int read_flag_mask; int write_flag_mask; } ;


 int FUNC_0 (int *,int ) ;
 struct regmap_config VAR_0 ;
 int FUNC_1 (struct spi_device*,struct regmap_config*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_1)
{
 struct regmap_config VAR_2;

 VAR_2 = VAR_0;
 VAR_2.reg_bits = 16;
 VAR_2.val_bits = 8;
 VAR_2.read_flag_mask = 0x21;
 VAR_2.write_flag_mask = 0x20;

 return FUNC_0(&VAR_1->dev, FUNC_1(VAR_1, &VAR_2));
}
