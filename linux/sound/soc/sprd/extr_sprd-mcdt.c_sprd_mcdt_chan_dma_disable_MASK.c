
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_mcdt_dev {int lock; } ;
struct sprd_mcdt_chan {int dma_enable; int type; int id; struct sprd_mcdt_dev* mcdt; } ;




 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct sprd_mcdt_dev*,int ,int) ;
 int FUNC_3 (struct sprd_mcdt_dev*,int ) ;
 int FUNC_4 (struct sprd_mcdt_dev*,int ,int) ;
 int FUNC_5 (struct sprd_mcdt_dev*,int ) ;

void FUNC_6(struct sprd_mcdt_chan *VAR_0)
{
 struct sprd_mcdt_dev *VAR_1 = VAR_0->mcdt;
 unsigned long VAR_2;

 FUNC_0(&VAR_1->lock, VAR_2);

 if (!VAR_0->dma_enable) {
  FUNC_1(&VAR_1->lock, VAR_2);
  return;
 }

 switch (VAR_0->type) {
 case 129:
  FUNC_2(VAR_1, VAR_0->id, 0);
  FUNC_3(VAR_1, VAR_0->id);
  break;

 case 128:
  FUNC_4(VAR_1, VAR_0->id, 0);
  FUNC_5(VAR_1, VAR_0->id);
  break;

 default:
  break;
 }

 VAR_0->dma_enable = 0;
 FUNC_1(&VAR_1->lock, VAR_2);
}
