
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device_id {scalar_t__ driver_data; } ;
struct spi_device {int dev; } ;
struct regmap_config {int val_bits; int reg_bits; int read_flag_mask; int write_flag_mask; } ;
typedef enum ad193x_type { ____Placeholder_ad193x_type } ad193x_type ;


 int FUNC_0 (int *,int ,int) ;
 struct regmap_config VAR_0 ;
 int FUNC_1 (struct spi_device*,struct regmap_config*) ;
 struct spi_device_id* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_1)
{
 const struct spi_device_id *VAR_2 = FUNC_2(VAR_1);
 struct regmap_config VAR_3;

 VAR_3 = VAR_0;
 VAR_3.val_bits = 8;
 VAR_3.reg_bits = 16;
 VAR_3.read_flag_mask = 0x09;
 VAR_3.write_flag_mask = 0x08;

 return FUNC_0(&VAR_1->dev, FUNC_1(VAR_1, &VAR_3),
       (enum ad193x_type)VAR_2->driver_data);
}
