
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct es7134_data {TYPE_1__* chip; } ;
struct TYPE_2__ {int dai_drv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 struct es7134_data* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device*,int *,int ,int) ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 (struct device*) ;
 int FUNC_4 (struct platform_device*,struct es7134_data*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct es7134_data *VAR_6;

 VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;
 FUNC_4(VAR_4, VAR_6);

 VAR_6->chip = FUNC_3(VAR_5);
 if (!VAR_6->chip) {
  FUNC_0(VAR_5, "failed to match device\n");
  return -VAR_0;
 }

 return FUNC_2(&VAR_4->dev,
          &VAR_3,
          VAR_6->chip->dai_drv, 1);
}
