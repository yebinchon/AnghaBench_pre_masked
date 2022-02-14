
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct regmap {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 struct regmap* FUNC_2 (struct spi_device*,int *) ;
 int FUNC_3 (int *,struct regmap*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_1)
{
 struct regmap *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1, &VAR_0);
 if (FUNC_0(VAR_2)) {
  VAR_3 = FUNC_1(VAR_2);
  return VAR_3;
 }

 return FUNC_3(&VAR_1->dev, VAR_2);
}
