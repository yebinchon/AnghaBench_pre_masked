
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int irq; int dev; } ;
struct regmap {int dummy; } ;
typedef enum pcm186x_type { ____Placeholder_pcm186x_type } pcm186x_type ;
struct TYPE_2__ {int driver_data; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 struct regmap* FUNC_2 (struct spi_device*,int *) ;
 int FUNC_3 (int *,int const,int,struct regmap*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_1)
{
 const enum pcm186x_type VAR_2 =
    (enum pcm186x_type)FUNC_4(VAR_1)->driver_data;
 int VAR_3 = VAR_1->irq;
 struct regmap *VAR_4;

 VAR_4 = FUNC_2(VAR_1, &VAR_0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 return FUNC_3(&VAR_1->dev, VAR_2, VAR_3, VAR_4);
}
