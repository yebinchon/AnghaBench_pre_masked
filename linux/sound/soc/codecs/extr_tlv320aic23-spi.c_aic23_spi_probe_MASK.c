
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; int mode; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct regmap* FUNC_1 (struct spi_device*,int *) ;
 int FUNC_2 (struct spi_device*) ;
 int FUNC_3 (int *,struct regmap*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_2)
{
 int VAR_3;
 struct regmap *VAR_4;

 FUNC_0(&VAR_2->dev, "probing tlv320aic23 spi device\n");

 VAR_2->mode = VAR_0;
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 = FUNC_1(VAR_2, &VAR_1);
 return FUNC_3(&VAR_2->dev, VAR_4);
}
