
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_mcdt_dev {int lock; } ;
struct sprd_mcdt_chan {int int_enable; int type; int id; struct sprd_mcdt_dev* mcdt; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct sprd_mcdt_dev*,int ,int) ;
 int FUNC_3 (struct sprd_mcdt_dev*,int ,int ) ;
 int FUNC_4 (struct sprd_mcdt_dev*,int ,int ,int) ;

void FUNC_5(struct sprd_mcdt_chan *VAR_2)
{
 struct sprd_mcdt_dev *VAR_3 = VAR_2->mcdt;
 unsigned long VAR_4;

 FUNC_0(&VAR_3->lock, VAR_4);

 if (!VAR_2->int_enable) {
  FUNC_1(&VAR_3->lock, VAR_4);
  return;
 }

 switch (VAR_2->type) {
 case 129:
  FUNC_4(VAR_3, VAR_2->id,
          VAR_0, 0);
  FUNC_3(VAR_3, VAR_2->id, VAR_0);
  FUNC_2(VAR_3, VAR_2->id, 0);
  break;

 case 128:
  FUNC_4(VAR_3, VAR_2->id,
          VAR_1, 0);
  FUNC_3(VAR_3, VAR_2->id, VAR_1);
  FUNC_2(VAR_3, VAR_2->id, 0);
  break;

 default:
  break;
 }

 VAR_2->int_enable = 0;
 FUNC_1(&VAR_3->lock, VAR_4);
}
