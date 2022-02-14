
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct aic26 {int master; struct spi_device* spi; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,struct aic26*) ;
 struct aic26* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct spi_device*,int *) ;
 int FUNC_6 (int *,int *,int *,int) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_5)
{
 struct aic26 *VAR_6;
 int VAR_7;

 FUNC_2(&VAR_5->dev, "probing tlv320aic26 spi device\n");


 VAR_6 = FUNC_4(&VAR_5->dev, sizeof *VAR_6, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->regmap = FUNC_5(VAR_5, &VAR_3);
 if (FUNC_0(VAR_6->regmap))
  return FUNC_1(VAR_6->regmap);


 VAR_6->spi = VAR_5;
 FUNC_3(&VAR_5->dev, VAR_6);
 VAR_6->master = 1;

 VAR_7 = FUNC_6(&VAR_5->dev,
   &VAR_4, &VAR_2, 1);
 return VAR_7;
}
