
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsc7385_data {int dummy; } ;
struct spi_device {int dev; } ;


 struct vsc7385_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct vsc7385_data*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0)
{
 struct vsc7385_data *VAR_1;

 VAR_1 = FUNC_0(&VAR_0->dev);
 FUNC_1(&VAR_0->dev, ((void*)0));
 FUNC_2(VAR_1);

 return 0;
}
