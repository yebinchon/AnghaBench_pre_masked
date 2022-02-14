
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_mcdt_dev {int lock; int dev; } ;
struct sprd_mcdt_chan {int dma_enable; int type; int id; scalar_t__ int_enable; struct sprd_mcdt_dev* mcdt; } ;
typedef enum sprd_mcdt_dma_chan { ____Placeholder_sprd_mcdt_dma_chan } sprd_mcdt_dma_chan ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct sprd_mcdt_dev*,int ,int) ;
 int FUNC_4 (struct sprd_mcdt_dev*,int ,int) ;
 int FUNC_5 (struct sprd_mcdt_dev*,int ,int) ;
 int FUNC_6 (struct sprd_mcdt_dev*,int ) ;
 int FUNC_7 (struct sprd_mcdt_dev*,int ,int ,int ) ;
 int FUNC_8 (struct sprd_mcdt_dev*,int ,int) ;
 int FUNC_9 (struct sprd_mcdt_dev*,int ,int) ;
 int FUNC_10 (struct sprd_mcdt_dev*,int ,int) ;
 int FUNC_11 (struct sprd_mcdt_dev*,int ) ;
 int FUNC_12 (struct sprd_mcdt_dev*,int ,int ,int ) ;

int FUNC_13(struct sprd_mcdt_chan *VAR_3,
         enum sprd_mcdt_dma_chan VAR_4,
         u32 VAR_5)
{
 struct sprd_mcdt_dev *VAR_6 = VAR_3->mcdt;
 unsigned long VAR_7;
 int VAR_8 = 0;

 FUNC_1(&VAR_6->lock, VAR_7);

 if (VAR_3->dma_enable || VAR_3->int_enable ||
     VAR_4 > VAR_2) {
  FUNC_0(VAR_6->dev, "Failed to set DMA mode\n");
  FUNC_2(&VAR_6->lock, VAR_7);
  return -VAR_0;
 }

 switch (VAR_3->type) {
 case 129:
  FUNC_6(VAR_6, VAR_3->id);
  FUNC_7(VAR_6, VAR_3->id,
         VAR_5, VAR_1 - 1);
  FUNC_5(VAR_6, VAR_3->id, 1);
  FUNC_4(VAR_6, VAR_3->id, VAR_4);
  FUNC_3(VAR_6, VAR_3->id, VAR_4);
  break;

 case 128:
  FUNC_11(VAR_6, VAR_3->id);
  FUNC_12(VAR_6, VAR_3->id,
         VAR_1 - 1, VAR_5);
  FUNC_10(VAR_6, VAR_3->id, 1);
  FUNC_9(VAR_6, VAR_3->id, VAR_4);
  FUNC_8(VAR_6, VAR_3->id, VAR_4);
  break;

 default:
  FUNC_0(VAR_6->dev, "Unsupported channel type\n");
  VAR_8 = -VAR_0;
 }

 if (!VAR_8)
  VAR_3->dma_enable = 1;

 FUNC_2(&VAR_6->lock, VAR_7);

 return VAR_8;
}
