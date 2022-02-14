
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsc_mgr {int type; unsigned int avail; unsigned int amount; int rscs; struct hw* hw; int ctrl_blk; } ;
struct hw {int (* src_mgr_get_ctrl_blk ) (int *) ;int (* srcimp_mgr_get_ctrl_blk ) (int *) ;int (* amixer_mgr_get_ctrl_blk ) (int *) ;int (* daio_mgr_get_ctrl_blk ) (struct hw*,int *) ;TYPE_1__* card; } ;
typedef enum RSCTYP { ____Placeholder_RSCTYP } RSCTYP ;
struct TYPE_2__ {int dev; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct hw*,int *) ;

int FUNC_7(struct rsc_mgr *VAR_4, enum RSCTYP VAR_5,
   unsigned int VAR_6, struct hw *VAR_7)
{
 int VAR_8 = 0;

 VAR_4->type = VAR_3;

 VAR_4->rscs = FUNC_2(((VAR_6 + 8 - 1) / 8), VAR_2);
 if (!VAR_4->rscs)
  return -VAR_1;

 switch (VAR_5) {
 case 130:
  VAR_8 = VAR_7->src_mgr_get_ctrl_blk(&VAR_4->ctrl_blk);
  break;
 case 129:
  VAR_8 = VAR_7->srcimp_mgr_get_ctrl_blk(&VAR_4->ctrl_blk);
  break;
 case 132:
  VAR_8 = VAR_7->amixer_mgr_get_ctrl_blk(&VAR_4->ctrl_blk);
  break;
 case 131:
  VAR_8 = VAR_7->daio_mgr_get_ctrl_blk(VAR_7, &VAR_4->ctrl_blk);
  break;
 case 128:
  break;
 default:
  FUNC_0(VAR_7->card->dev,
   "Invalid resource type value %d!\n", VAR_5);
  VAR_8 = -VAR_0;
  goto error;
 }

 if (VAR_8) {
  FUNC_0(VAR_7->card->dev,
   "Failed to get manager control block!\n");
  goto error;
 }

 VAR_4->type = VAR_5;
 VAR_4->avail = VAR_4->amount = VAR_6;
 VAR_4->hw = VAR_7;

 return 0;

error:
 FUNC_1(VAR_4->rscs);
 return VAR_8;
}
