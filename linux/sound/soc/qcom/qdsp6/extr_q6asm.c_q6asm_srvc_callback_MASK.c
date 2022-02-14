
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct q6asm {int mem_wait; } ;
struct audio_port_data {int mem_map_handle; } ;
struct aprv2_ibasic_rsp_result_t {int opcode; int status; } ;
struct audio_client {int refcount; int priv; int (* cb ) (int,int,struct aprv2_ibasic_rsp_result_t*,int ) ;struct aprv2_ibasic_rsp_result_t result; struct audio_port_data* port; TYPE_1__* dev; } ;
struct apr_hdr {int dest_port; int token; int opcode; } ;
struct apr_resp_pkt {struct aprv2_ibasic_rsp_result_t* payload; struct apr_hdr hdr; } ;
struct apr_device {int dev; } ;
struct TYPE_2__ {int * parent; } ;






 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (int *,char*,...) ;
 struct q6asm* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 struct audio_client* FUNC_4 (struct q6asm*,size_t) ;
 int FUNC_5 (struct apr_device*,struct apr_resp_pkt*,int) ;
 int FUNC_6 (int,int,struct aprv2_ibasic_rsp_result_t*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct apr_device *VAR_1,
          struct apr_resp_pkt *VAR_2)
{
 struct q6asm *VAR_3 = FUNC_2(&VAR_1->dev);
 struct aprv2_ibasic_rsp_result_t *VAR_4;
 struct audio_port_data *VAR_5;
 struct audio_client *VAR_6 = ((void*)0);
 struct apr_hdr *VAR_7 = &VAR_2->hdr;
 struct q6asm *VAR_8;
 uint32_t VAR_9 = 0;
 uint32_t VAR_10 = 0;
 int VAR_11;

 VAR_11 = (VAR_7->dest_port >> 8) & 0xFF;
 if (VAR_11)
  return FUNC_5(VAR_1, VAR_2, VAR_11);

 VAR_9 = (VAR_7->token >> 8) & 0x0F;
 VAR_6 = FUNC_4(VAR_3, VAR_9);
 if (!VAR_6) {
  FUNC_1(&VAR_1->dev, "Audio Client not active\n");
  return 0;
 }

 VAR_8 = FUNC_2(VAR_6->dev->parent);
 VAR_10 = (VAR_7->token & 0x0F);
 VAR_5 = &VAR_6->port[VAR_10];
 VAR_4 = VAR_2->payload;

 switch (VAR_7->opcode) {
 case 131:
  switch (VAR_4->opcode) {
  case 129:
  case 128:
   VAR_6->result = *VAR_4;
   FUNC_7(&VAR_8->mem_wait);
   break;
  default:
   FUNC_1(&VAR_1->dev, "command[0x%x] not expecting rsp\n",
     VAR_4->opcode);
   break;
  }
  goto done;
 case 130:
  VAR_6->result.status = 0;
  VAR_6->result.opcode = VAR_7->opcode;
  VAR_5->mem_map_handle = VAR_4->opcode;
  FUNC_7(&VAR_8->mem_wait);
  break;
 case 128:
  VAR_6->result.opcode = VAR_7->opcode;
  VAR_6->result.status = 0;
  VAR_5->mem_map_handle = 0;
  FUNC_7(&VAR_8->mem_wait);
  break;
 default:
  FUNC_0(&VAR_1->dev, "command[0x%x]success [0x%x]\n",
   VAR_4->opcode, VAR_4->status);
  break;
 }

 if (VAR_6->cb)
  VAR_6->cb(VAR_7->opcode, VAR_7->token, VAR_2->payload, VAR_6->priv);

done:
 FUNC_3(&VAR_6->refcount, VAR_0);

 return 0;
}
