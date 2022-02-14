
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_mcdt_dev {int lock; int dev; } ;
struct sprd_mcdt_chan {int id; scalar_t__ dma_enable; struct sprd_mcdt_dev* mcdt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (struct sprd_mcdt_dev*,int ,int ) ;
 int FUNC_4 (struct sprd_mcdt_dev*,int ) ;
 int FUNC_5 (struct sprd_mcdt_dev*,int ,int ) ;

int FUNC_6(struct sprd_mcdt_chan *VAR_3, char *VAR_4, u32 VAR_5)
{
 struct sprd_mcdt_dev *VAR_6 = VAR_3->mcdt;
 unsigned long VAR_7;
 int VAR_8, VAR_9 = 0, VAR_10 = VAR_5 / 4;
 u32 *VAR_11 = (u32 *)VAR_4;

 FUNC_1(&VAR_6->lock, VAR_7);

 if (VAR_3->dma_enable) {
  FUNC_0(VAR_6->dev,
   "Can not write data when DMA mode enabled\n");
  FUNC_2(&VAR_6->lock, VAR_7);
  return -VAR_1;
 }

 if (FUNC_3(VAR_6, VAR_3->id, VAR_2)) {
  FUNC_0(VAR_6->dev, "Channel fifo is full now\n");
  FUNC_2(&VAR_6->lock, VAR_7);
  return -VAR_0;
 }

 VAR_8 = FUNC_4(VAR_6, VAR_3->id);
 if (VAR_5 > VAR_8) {
  FUNC_0(VAR_6->dev,
   "Data size is larger than the available fifo size\n");
  FUNC_2(&VAR_6->lock, VAR_7);
  return -VAR_0;
 }

 while (VAR_9++ < VAR_10)
  FUNC_5(VAR_6, VAR_3->id, *VAR_11++);

 FUNC_2(&VAR_6->lock, VAR_7);
 return 0;
}
