
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_mcdt_dev {int lock; int dev; } ;
struct sprd_mcdt_chan_callback {int dummy; } ;
struct sprd_mcdt_chan {int int_enable; int type; struct sprd_mcdt_chan_callback* cb; int id; scalar_t__ dma_enable; struct sprd_mcdt_dev* mcdt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct sprd_mcdt_dev*,int ) ;
 int FUNC_4 (struct sprd_mcdt_dev*,int ,int ,int ) ;
 int FUNC_5 (struct sprd_mcdt_dev*,int ,int) ;
 int FUNC_6 (struct sprd_mcdt_dev*,int ,int ,int) ;
 int FUNC_7 (struct sprd_mcdt_dev*,int ) ;
 int FUNC_8 (struct sprd_mcdt_dev*,int ,int ,int ) ;

int FUNC_9(struct sprd_mcdt_chan *VAR_4, u32 VAR_5,
         struct sprd_mcdt_chan_callback *VAR_6)
{
 struct sprd_mcdt_dev *VAR_7 = VAR_4->mcdt;
 unsigned long VAR_8;
 int VAR_9 = 0;

 FUNC_1(&VAR_7->lock, VAR_8);

 if (VAR_4->dma_enable || VAR_4->int_enable) {
  FUNC_0(VAR_7->dev, "Failed to set interrupt mode.\n");
  FUNC_2(&VAR_7->lock, VAR_8);
  return -VAR_0;
 }

 switch (VAR_4->type) {
 case 129:
  FUNC_3(VAR_7, VAR_4->id);
  FUNC_4(VAR_7, VAR_4->id, VAR_5,
         VAR_3 - 1);
  FUNC_6(VAR_7, VAR_4->id,
          VAR_1, 1);
  FUNC_5(VAR_7, VAR_4->id, 1);
  break;

 case 128:
  FUNC_7(VAR_7, VAR_4->id);
  FUNC_8(VAR_7, VAR_4->id,
         VAR_3 - 1, VAR_5);
  FUNC_6(VAR_7, VAR_4->id,
          VAR_2, 1);
  FUNC_5(VAR_7, VAR_4->id, 1);
  break;

 default:
  FUNC_0(VAR_7->dev, "Unsupported channel type\n");
  VAR_9 = -VAR_0;
 }

 if (!VAR_9) {
  VAR_4->cb = VAR_6;
  VAR_4->int_enable = 1;
 }

 FUNC_2(&VAR_7->lock, VAR_8);

 return VAR_9;
}
