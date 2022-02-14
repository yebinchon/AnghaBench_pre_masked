
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct rsc {int type; int * ctrl_blk; int * ops; struct hw* hw; void* msr; void* conj; void* idx; } ;
struct hw {int (* src_rsc_get_ctrl_blk ) (int **) ;int (* amixer_rsc_get_ctrl_blk ) (int **) ;TYPE_1__* card; } ;
typedef enum RSCTYP { ____Placeholder_RSCTYP } RSCTYP ;
struct TYPE_2__ {int dev; } ;




 int VAR_0 ;



 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **) ;

int
FUNC_3(struct rsc *VAR_2, u32 VAR_3, enum RSCTYP VAR_4, u32 VAR_5, struct hw *VAR_6)
{
 int VAR_7 = 0;

 VAR_2->idx = VAR_3;
 VAR_2->conj = VAR_3;
 VAR_2->type = VAR_4;
 VAR_2->msr = VAR_5;
 VAR_2->hw = VAR_6;
 VAR_2->ops = &VAR_1;
 if (!VAR_6) {
  VAR_2->ctrl_blk = ((void*)0);
  return 0;
 }

 switch (VAR_4) {
 case 130:
  VAR_7 = VAR_6->src_rsc_get_ctrl_blk(&VAR_2->ctrl_blk);
  break;
 case 132:
  VAR_7 = VAR_6->amixer_rsc_get_ctrl_blk(&VAR_2->ctrl_blk);
  break;
 case 129:
 case 128:
 case 131:
  break;
 default:
  FUNC_0(((struct hw *)VAR_6)->card->dev,
   "Invalid resource type value %d!\n", VAR_4);
  return -VAR_0;
 }

 if (VAR_7) {
  FUNC_0(((struct hw *)VAR_6)->card->dev,
   "Failed to get resource control block!\n");
  return VAR_7;
 }

 return 0;
}
