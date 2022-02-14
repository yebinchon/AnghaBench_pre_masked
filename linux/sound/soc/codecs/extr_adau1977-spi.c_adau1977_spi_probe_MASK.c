
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device_id {int driver_data; } ;
struct spi_device {int dev; } ;
struct regmap_config {int val_bits; int reg_bits; int read_flag_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 struct regmap_config VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct spi_device*,struct regmap_config*) ;
 struct spi_device_id* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_3)
{
 const struct spi_device_id *VAR_4 = FUNC_2(VAR_3);
 struct regmap_config VAR_5;

 if (!VAR_4)
  return -VAR_0;

 VAR_5 = VAR_1;
 VAR_5.val_bits = 8;
 VAR_5.reg_bits = 16;
 VAR_5.read_flag_mask = 0x1;

 return FUNC_0(&VAR_3->dev,
  FUNC_1(VAR_3, &VAR_5),
  VAR_4->driver_data, VAR_2);
}
