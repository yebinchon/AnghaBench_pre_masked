
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_sai_data {TYPE_1__* pdev; int base; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct stm32_sai_data *VAR_1, int VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_2(&VAR_1->pdev->dev);
 if (VAR_3)
  return VAR_3;

 FUNC_3(FUNC_0(VAR_0, (VAR_2 - 1)), VAR_1->base);

 FUNC_1(&VAR_1->pdev->dev);

 return 0;
}
