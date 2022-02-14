
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct ad1836_priv {size_t type; int regmap; } ;
struct TYPE_2__ {size_t driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 struct ad1836_priv* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct spi_device*,int *) ;
 int FUNC_4 (int *,int *,int *,int) ;
 int VAR_4 ;
 TYPE_1__* FUNC_5 (struct spi_device*) ;
 int FUNC_6 (struct spi_device*,struct ad1836_priv*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_5)
{
 struct ad1836_priv *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(&VAR_5->dev, sizeof(struct ad1836_priv),
         VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->regmap = FUNC_3(VAR_5, &VAR_2);
 if (FUNC_0(VAR_6->regmap))
  return FUNC_1(VAR_6->regmap);

 VAR_6->type = FUNC_5(VAR_5)->driver_data;

 FUNC_6(VAR_5, VAR_6);

 VAR_7 = FUNC_4(&VAR_5->dev,
   &VAR_4, &VAR_3[VAR_6->type], 1);
 return VAR_7;
}
