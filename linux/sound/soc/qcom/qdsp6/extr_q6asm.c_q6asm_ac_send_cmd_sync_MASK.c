
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ opcode; scalar_t__ status; } ;
struct audio_client {int cmd_lock; TYPE_1__ result; int dev; int cmd_wait; int adev; } ;
struct apr_hdr {scalar_t__ opcode; } ;
struct apr_pkt {struct apr_hdr hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct apr_pkt*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct audio_client *VAR_3, struct apr_pkt *VAR_4)
{
 struct apr_hdr *VAR_5 = &VAR_4->hdr;
 int VAR_6;

 FUNC_2(&VAR_3->cmd_lock);
 VAR_3->result.opcode = 0;
 VAR_3->result.status = 0;

 VAR_6 = FUNC_0(VAR_3->adev, VAR_4);
 if (VAR_6 < 0)
  goto err;

 VAR_6 = FUNC_4(VAR_3->cmd_wait,
    (VAR_3->result.opcode == VAR_5->opcode), 5 * VAR_2);
 if (!VAR_6) {
  FUNC_1(VAR_3->dev, "CMD timeout\n");
  VAR_6 = -VAR_1;
  goto err;
 }

 if (VAR_3->result.status > 0) {
  FUNC_1(VAR_3->dev, "DSP returned error[%x]\n",
   VAR_3->result.status);
  VAR_6 = -VAR_0;
 } else {
  VAR_6 = 0;
 }


err:
 FUNC_3(&VAR_3->cmd_lock);
 return VAR_6;
}
