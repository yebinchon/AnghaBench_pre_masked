
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rsc {int type; scalar_t__ msr; scalar_t__ conj; scalar_t__ idx; int * ctrl_blk; TYPE_2__* hw; } ;
struct hw {TYPE_1__* card; } ;
struct TYPE_4__ {int (* amixer_rsc_put_ctrl_blk ) (int *) ;int (* src_rsc_put_ctrl_blk ) (int *) ;} ;
struct TYPE_3__ {int dev; } ;




 int VAR_0 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct rsc *VAR_1)
{
 if ((((void*)0) != VAR_1->hw) && (((void*)0) != VAR_1->ctrl_blk)) {
  switch (VAR_1->type) {
  case 129:
   VAR_1->hw->src_rsc_put_ctrl_blk(VAR_1->ctrl_blk);
   break;
  case 131:
   VAR_1->hw->amixer_rsc_put_ctrl_blk(VAR_1->ctrl_blk);
   break;
  case 128:
  case 130:
   break;
  default:
   FUNC_0(((struct hw *)VAR_1->hw)->card->dev,
    "Invalid resource type value %d!\n",
    VAR_1->type);
   break;
  }

  VAR_1->hw = VAR_1->ctrl_blk = ((void*)0);
 }

 VAR_1->idx = VAR_1->conj = 0;
 VAR_1->type = VAR_0;
 VAR_1->msr = 0;

 return 0;
}
