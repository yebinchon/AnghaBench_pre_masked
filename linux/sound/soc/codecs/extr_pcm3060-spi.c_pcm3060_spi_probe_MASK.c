
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct pcm3060_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct pcm3060_priv* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct spi_device*,int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (struct spi_device*,struct pcm3060_priv*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_3)
{
 struct pcm3060_priv *VAR_4;

 VAR_4 = FUNC_2(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_5(VAR_3, VAR_4);

 VAR_4->regmap = FUNC_3(VAR_3, &VAR_2);
 if (FUNC_0(VAR_4->regmap))
  return FUNC_1(VAR_4->regmap);

 return FUNC_4(&VAR_3->dev);
}
