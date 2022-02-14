
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_block {int condition; int ret_code; int on; int msg_id; int drv_id; } ;
struct intel_sst_drv {int sst_state; int dev; int wait_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*,int,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int,int ) ;

int FUNC_4(struct intel_sst_drv *VAR_3, struct sst_block *VAR_4)
{
 int VAR_5 = 0;






 FUNC_0(VAR_3->dev,
  "waiting for condition %x ipc %d drv_id %d\n",
  VAR_4->condition, VAR_4->msg_id, VAR_4->drv_id);
 if (FUNC_3(VAR_3->wait_queue,
    VAR_4->condition,
    FUNC_2(VAR_1))) {

  FUNC_0(VAR_3->dev, "Event wake %x\n",
    VAR_4->condition);
  FUNC_0(VAR_3->dev, "message ret: %d\n",
    VAR_4->ret_code);
  VAR_5 = -VAR_4->ret_code;
 } else {
  VAR_4->on = 0;
  FUNC_1(VAR_3->dev,
   "Wait timed-out condition:%#x, msg_id:%#x fw_state %#x\n",
   VAR_4->condition, VAR_4->msg_id, VAR_3->sst_state);
  VAR_3->sst_state = VAR_2;

  VAR_5 = -VAR_0;
 }
 return VAR_5;
}
