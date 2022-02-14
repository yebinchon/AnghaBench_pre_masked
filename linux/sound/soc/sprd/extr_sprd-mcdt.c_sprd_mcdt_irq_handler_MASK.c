
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sprd_mcdt_dev {int lock; struct sprd_mcdt_chan* chan; } ;
struct sprd_mcdt_chan {TYPE_1__* cb; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int data; int (* notify ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sprd_mcdt_dev*,int,int ) ;
 scalar_t__ FUNC_3 (struct sprd_mcdt_dev*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct sprd_mcdt_dev *VAR_7 = (struct sprd_mcdt_dev *)VAR_6;
 int VAR_8;

 FUNC_0(&VAR_7->lock);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (FUNC_3(VAR_7, VAR_8, VAR_2)) {
   struct sprd_mcdt_chan *VAR_9 = &VAR_7->chan[VAR_8];

   FUNC_2(VAR_7, VAR_8, VAR_2);
   if (VAR_9->cb)
    VAR_9->cb->notify(VAR_9->cb->data);
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (FUNC_3(VAR_7, VAR_8, VAR_4)) {
   struct sprd_mcdt_chan *VAR_10 =
    &VAR_7->chan[VAR_8 + VAR_1];

   FUNC_2(VAR_7, VAR_8, VAR_4);
   if (VAR_10->cb)
    VAR_10->cb->notify(VAR_10->cb->data);
  }
 }

 FUNC_1(&VAR_7->lock);

 return VAR_0;
}
