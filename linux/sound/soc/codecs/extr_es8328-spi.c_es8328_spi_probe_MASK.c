
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;


 int FUNC_0 (struct spi_device*,int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_1)
{
 return FUNC_1(&VAR_1->dev,
   FUNC_0(VAR_1, &VAR_0));
}
