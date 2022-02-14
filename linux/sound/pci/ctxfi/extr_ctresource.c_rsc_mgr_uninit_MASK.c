
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rsc_mgr {int type; scalar_t__ amount; scalar_t__ avail; int * ctrl_blk; TYPE_2__* hw; int * rscs; } ;
struct hw {TYPE_1__* card; } ;
struct TYPE_4__ {int (* daio_mgr_put_ctrl_blk ) (int *) ;int (* amixer_mgr_put_ctrl_blk ) (int *) ;int (* srcimp_mgr_put_ctrl_blk ) (int *) ;int (* src_mgr_put_ctrl_blk ) (int *) ;} ;
struct TYPE_3__ {int dev; } ;




 int VAR_0 ;



 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct rsc_mgr *VAR_1)
{
 FUNC_1(VAR_1->rscs);
 VAR_1->rscs = ((void*)0);

 if ((((void*)0) != VAR_1->hw) && (((void*)0) != VAR_1->ctrl_blk)) {
  switch (VAR_1->type) {
  case 130:
   VAR_1->hw->src_mgr_put_ctrl_blk(VAR_1->ctrl_blk);
   break;
  case 129:
   VAR_1->hw->srcimp_mgr_put_ctrl_blk(VAR_1->ctrl_blk);
   break;
  case 132:
   VAR_1->hw->amixer_mgr_put_ctrl_blk(VAR_1->ctrl_blk);
   break;
  case 131:
   VAR_1->hw->daio_mgr_put_ctrl_blk(VAR_1->ctrl_blk);
   break;
  case 128:
   break;
  default:
   FUNC_0(((struct hw *)VAR_1->hw)->card->dev,
    "Invalid resource type value %d!\n",
    VAR_1->type);
   break;
  }

  VAR_1->hw = VAR_1->ctrl_blk = ((void*)0);
 }

 VAR_1->type = VAR_0;
 VAR_1->avail = VAR_1->amount = 0;

 return 0;
}
