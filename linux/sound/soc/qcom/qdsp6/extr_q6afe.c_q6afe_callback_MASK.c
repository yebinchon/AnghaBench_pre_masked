
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aprv2_ibasic_rsp_result_t {int opcode; int status; } ;
struct q6afe_port {int refcount; int wait; struct aprv2_ibasic_rsp_result_t result; } ;
struct q6afe {int dev; } ;
struct apr_hdr {int opcode; int token; } ;
struct apr_resp_pkt {struct aprv2_ibasic_rsp_result_t* payload; int payload_size; struct apr_hdr hdr; } ;
struct apr_device {int dev; } ;







 int FUNC_0 (int ,char*,int ,...) ;
 struct q6afe* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct q6afe_port* FUNC_3 (struct q6afe*,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct apr_device *VAR_1, struct apr_resp_pkt *VAR_2)
{
 struct q6afe *VAR_3 = FUNC_1(&VAR_1->dev);
 struct aprv2_ibasic_rsp_result_t *VAR_4;
 struct apr_hdr *VAR_5 = &VAR_2->hdr;
 struct q6afe_port *VAR_6;

 if (!VAR_2->payload_size)
  return 0;

 VAR_4 = VAR_2->payload;
 switch (VAR_5->opcode) {
 case 128: {
  if (VAR_4->status) {
   FUNC_0(VAR_3->dev, "cmd = 0x%x returned error = 0x%x\n",
    VAR_4->opcode, VAR_4->status);
  }
  switch (VAR_4->opcode) {
  case 130:
  case 131:
  case 132:
  case 129:
   VAR_6 = FUNC_3(VAR_3, VAR_5->token);
   if (VAR_6) {
    VAR_6->result = *VAR_4;
    FUNC_4(&VAR_6->wait);
    FUNC_2(&VAR_6->refcount, VAR_0);
   }
   break;
  default:
   FUNC_0(VAR_3->dev, "Unknown cmd 0x%x\n", VAR_4->opcode);
   break;
  }
 }
  break;
 default:
  break;
 }

 return 0;
}
