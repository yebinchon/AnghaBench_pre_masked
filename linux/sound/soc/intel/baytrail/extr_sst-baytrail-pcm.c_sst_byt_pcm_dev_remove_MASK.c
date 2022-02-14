
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_pdata {int dummy; } ;
struct platform_device {int dev; } ;


 struct sst_pdata* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sst_pdata*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct sst_pdata *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(&VAR_0->dev, VAR_1);

 return 0;
}
