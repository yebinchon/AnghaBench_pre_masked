
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_6__ {scalar_t__ wr_id; } ;
struct TYPE_5__ {TYPE_3__ wr; int key; struct ib_mr* mr; } ;
struct smc_link {int wr_reg_state; int wr_reg_wait; TYPE_2__ wr_reg; int roce_qp; TYPE_1__* smcibdev; } ;
struct ib_mr {int rkey; } ;
struct TYPE_4__ {int roce_cq_send; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int FUNC_0 (int ,TYPE_3__*,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct smc_link*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;

int FUNC_5(struct smc_link *VAR_7, struct ib_mr *VAR_8)
{
 int VAR_9;

 FUNC_1(VAR_7->smcibdev->roce_cq_send,
    VAR_4 | VAR_5);
 VAR_7->wr_reg_state = 128;
 VAR_7->wr_reg.wr.wr_id = (u64)(uintptr_t)VAR_8;
 VAR_7->wr_reg.mr = VAR_8;
 VAR_7->wr_reg.key = VAR_8->rkey;
 VAR_9 = FUNC_0(VAR_7->roce_qp, &VAR_7->wr_reg.wr, ((void*)0));
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_7->wr_reg_wait,
           (VAR_7->wr_reg_state != 128),
           VAR_6);
 if (!VAR_9) {

  FUNC_3(FUNC_2(VAR_7));
  return -VAR_2;
 }
 if (VAR_9 == -VAR_3)
  return -VAR_0;
 switch (VAR_7->wr_reg_state) {
 case 130:
  VAR_9 = 0;
  break;
 case 129:
  VAR_9 = -VAR_1;
  break;
 case 128:
  VAR_9 = -VAR_2;
  break;
 }
 return VAR_9;
}
