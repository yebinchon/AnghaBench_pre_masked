
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_pdata {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sst_pdata* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (int *,struct sst_pdata*) ;
 int FUNC_4 (int *,struct sst_pdata*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct sst_pdata *VAR_4 = FUNC_1(&VAR_3->dev);
 int VAR_5;

 VAR_5 = FUNC_4(&VAR_3->dev, VAR_4);
 if (VAR_5 < 0)
  return -VAR_0;

 VAR_5 = FUNC_2(&VAR_3->dev, &VAR_1,
      VAR_2, FUNC_0(VAR_2));
 if (VAR_5 < 0)
  goto err_plat;

 return 0;

err_plat:
 FUNC_3(&VAR_3->dev, VAR_4);
 return VAR_5;
}
