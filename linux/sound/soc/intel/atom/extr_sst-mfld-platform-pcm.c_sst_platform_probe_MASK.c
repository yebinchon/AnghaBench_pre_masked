
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_platform_data {int strm_map_size; int pdev_strm_map; } ;
struct sst_data {int lock; struct platform_device* pdev; struct sst_platform_data* pdata; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,struct sst_data*) ;
 void* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 struct sst_data *VAR_6;
 int VAR_7;
 struct sst_platform_data *VAR_8;

 VAR_6 = FUNC_3(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0)) {
  return -VAR_0;
 }

 VAR_8 = FUNC_3(&VAR_5->dev, sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0)) {
  return -VAR_0;
 }

 VAR_8->pdev_strm_map = VAR_2;
 VAR_8->strm_map_size = FUNC_0(VAR_2);
 VAR_6->pdata = VAR_8;
 VAR_6->pdev = VAR_5;
 FUNC_5(&VAR_6->lock);
 FUNC_2(&VAR_5->dev, VAR_6);

 VAR_7 = FUNC_4(&VAR_5->dev, &VAR_4,
    VAR_3, FUNC_0(VAR_3));
 if (VAR_7)
  FUNC_1(&VAR_5->dev, "registering cpu dais failed\n");

 return VAR_7;
}
