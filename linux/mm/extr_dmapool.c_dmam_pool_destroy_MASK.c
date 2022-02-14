
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pool {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int ,int ,struct dma_pool*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct dma_pool *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;

 FUNC_0(FUNC_1(VAR_3, VAR_1, VAR_0, VAR_2));
}
