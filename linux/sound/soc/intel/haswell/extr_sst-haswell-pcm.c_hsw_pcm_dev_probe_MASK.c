
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_pdata {int dsp; } ;
struct platform_device {int dev; } ;
struct hsw_priv_data {int hsw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sst_pdata* FUNC_1 (int *) ;
 struct hsw_priv_data* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct platform_device*,struct hsw_priv_data*) ;
 int FUNC_5 (int *,struct sst_pdata*) ;
 int FUNC_6 (int *,struct sst_pdata*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 struct sst_pdata *VAR_7 = FUNC_1(&VAR_6->dev);
 struct hsw_priv_data *VAR_8;
 int VAR_9;

 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_2(&VAR_6->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_9 = FUNC_6(&VAR_6->dev, VAR_7);
 if (VAR_9 < 0)
  return -VAR_1;

 VAR_8->hsw = VAR_7->dsp;
 FUNC_4(VAR_6, VAR_8);

 VAR_9 = FUNC_3(&VAR_6->dev, &VAR_4,
  VAR_5, FUNC_0(VAR_5));
 if (VAR_9 < 0)
  goto err_plat;

 return 0;

err_plat:
 FUNC_5(&VAR_6->dev, VAR_7);
 return 0;
}
