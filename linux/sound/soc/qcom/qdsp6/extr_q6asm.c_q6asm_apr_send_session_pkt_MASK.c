
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct q6asm {int dev; int mem_wait; int adev; } ;
struct TYPE_2__ {scalar_t__ opcode; scalar_t__ status; } ;
struct audio_client {int cmd_lock; TYPE_1__ result; } ;
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

__attribute__((used)) static int FUNC_5(struct q6asm *VAR_3, struct audio_client *VAR_4,
          struct apr_pkt *VAR_5, uint32_t VAR_6)
{
 struct apr_hdr *VAR_7 = &VAR_5->hdr;
 int VAR_8;

 FUNC_2(&VAR_4->cmd_lock);
 VAR_4->result.opcode = 0;
 VAR_4->result.status = 0;
 VAR_8 = FUNC_0(VAR_3->adev, VAR_5);
 if (VAR_8 < 0)
  goto err;

 if (VAR_6)
  VAR_8 = FUNC_4(VAR_3->mem_wait,
     (VAR_4->result.opcode == VAR_7->opcode) ||
     (VAR_4->result.opcode == VAR_6),
     5 * VAR_2);
 else
  VAR_8 = FUNC_4(VAR_3->mem_wait,
     (VAR_4->result.opcode == VAR_7->opcode),
     5 * VAR_2);

 if (!VAR_8) {
  FUNC_1(VAR_3->dev, "CMD timeout\n");
  VAR_8 = -VAR_1;
 } else if (VAR_4->result.status > 0) {
  FUNC_1(VAR_3->dev, "DSP returned error[%x]\n",
   VAR_4->result.status);
  VAR_8 = -VAR_0;
 }

err:
 FUNC_3(&VAR_4->cmd_lock);
 return VAR_8;
}
