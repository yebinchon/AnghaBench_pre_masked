
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb91x_nand_info {int gpio_rdy; int dev; int gpio_read; int gpio_ale; int gpio_cle; int gpio_nrw; int gpio_nce; int gpio_nle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct rb91x_nand_info *VAR_3)
{
 int VAR_4;





 VAR_4 = FUNC_0(VAR_3->dev, VAR_3->gpio_nle,
        VAR_1, "LATCH enable");
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3->dev, VAR_3->gpio_nce,
        VAR_1, "NAND nCE");
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3->dev, VAR_3->gpio_nrw,
        VAR_1, "NAND nRW");
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3->dev, VAR_3->gpio_cle,
        VAR_2, "NAND CLE");
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3->dev, VAR_3->gpio_ale,
        VAR_2, "NAND ALE");
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3->dev, VAR_3->gpio_read,
        VAR_2, "NAND READ");
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3->dev, VAR_3->gpio_rdy,
        VAR_0, "NAND RDY");
 return VAR_4;
}
