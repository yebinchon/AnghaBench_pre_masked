
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct stm32_sai_data {TYPE_1__* pdev; int base; } ;
struct TYPE_7__ {int of_node; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,char*,int ,char*) ;
 int FUNC_3 (TYPE_2__*,char*,int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct stm32_sai_data *VAR_4, int VAR_5)
{
 u32 VAR_6;
 int VAR_7;


 VAR_7 = FUNC_6(&VAR_4->pdev->dev);
 if (VAR_7)
  return VAR_7;

 FUNC_2(&VAR_4->pdev->dev, "Set %pOFn%s as synchro provider\n",
  VAR_4->pdev->dev.of_node,
  VAR_5 == VAR_2 ? "A" : "B");

 VAR_6 = FUNC_0(VAR_1, FUNC_4(VAR_4->base));
 if (VAR_6 != VAR_3 && VAR_5 != VAR_6) {
  FUNC_3(&VAR_4->pdev->dev, "%pOFn%s already set as sync provider\n",
   VAR_4->pdev->dev.of_node,
   VAR_6 == VAR_2 ? "A" : "B");
   FUNC_5(&VAR_4->pdev->dev);
  return -VAR_0;
 }

 FUNC_7(FUNC_1(VAR_1, VAR_5), VAR_4->base);

 FUNC_5(&VAR_4->pdev->dev);

 return 0;
}
