
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stm32_sai_sub_data {TYPE_3__* pdev; TYPE_2__* pdata; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int version; } ;
struct TYPE_5__ {TYPE_1__ conf; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,unsigned long,...) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int FUNC_4(struct stm32_sai_sub_data *VAR_1,
     unsigned long VAR_2,
     unsigned long VAR_3)
{
 int VAR_4 = VAR_1->pdata->conf.version;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5 > FUNC_1(VAR_4)) {
  FUNC_3(&VAR_1->pdev->dev, "Divider %d out of range\n", VAR_5);
  return -VAR_0;
 }
 FUNC_2(&VAR_1->pdev->dev, "SAI divider %d\n", VAR_5);

 if (VAR_2 % VAR_5)
  FUNC_2(&VAR_1->pdev->dev,
   "Rate not accurate. requested (%ld), actual (%ld)\n",
   VAR_3, VAR_2 / VAR_5);

 return VAR_5;
}
