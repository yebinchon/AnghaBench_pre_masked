
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *,int *,int) ;
 struct spi_device* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_3)
{
 int VAR_4;

 VAR_0 = VAR_3;

 VAR_4 = FUNC_1(&VAR_3->dev,
           &VAR_1,
           &VAR_2, 1);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_3->dev, "Failed to register component.\n");
  return VAR_4;
 }

 return 0;
}
