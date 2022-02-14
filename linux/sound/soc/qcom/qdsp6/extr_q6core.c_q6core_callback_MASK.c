
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6core {int get_version_supported; int resp_received; int fwk_version_supported; int get_state_supported; int wait; int avcs_state; void* svc_version; void* fwk_version; } ;
struct avcs_cmdrsp_get_version {int opcode; int num_services; int status; } ;
struct avcs_cmdrsp_get_fwk_version {int opcode; int num_services; int status; } ;
struct aprv2_ibasic_rsp_result_t {int opcode; int num_services; int status; } ;
struct apr_hdr {int opcode; } ;
struct apr_resp_pkt {struct avcs_cmdrsp_get_version* payload; struct apr_hdr hdr; } ;
struct apr_device {int dev; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 struct q6core* FUNC_1 (int *) ;
 void* FUNC_2 (struct avcs_cmdrsp_get_version*,int ,int ) ;
 int FUNC_3 (struct avcs_cmdrsp_get_version*,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct apr_device *VAR_4, struct apr_resp_pkt *VAR_5)
{
 struct q6core *VAR_6 = FUNC_1(&VAR_4->dev);
 struct aprv2_ibasic_rsp_result_t *VAR_7;
 struct apr_hdr *VAR_8 = &VAR_5->hdr;

 VAR_7 = VAR_5->payload;
 switch (VAR_8->opcode) {
 case 134:{
  VAR_7 = VAR_5->payload;
  switch (VAR_7->opcode) {
  case 129:
   if (VAR_7->status == VAR_0)
    VAR_6->get_version_supported = 0;
   VAR_6->resp_received = 1;
   break;
  case 130:
   if (VAR_7->status == VAR_0)
    VAR_6->fwk_version_supported = 0;
   VAR_6->resp_received = 1;
   break;
  case 131:
   if (VAR_7->status == VAR_0)
    VAR_6->get_state_supported = 0;
   VAR_6->resp_received = 1;
   break;
  }
  break;
 }
 case 132: {
  struct avcs_cmdrsp_get_fwk_version *VAR_9;

  VAR_9 = VAR_5->payload;

  VAR_6->fwk_version = FUNC_2(VAR_5->payload,
         FUNC_3(VAR_9, VAR_3,
       VAR_9->num_services),
         VAR_2);
  if (!VAR_6->fwk_version)
   return -VAR_1;

  VAR_6->fwk_version_supported = 1;
  VAR_6->resp_received = 1;

  break;
 }
 case 128: {
  struct avcs_cmdrsp_get_version *VAR_10;

  VAR_10 = VAR_5->payload;

  VAR_6->svc_version = FUNC_2(VAR_5->payload,
         FUNC_3(VAR_10, VAR_3,
       VAR_10->num_services),
         VAR_2);
  if (!VAR_6->svc_version)
   return -VAR_1;

  VAR_6->get_version_supported = 1;
  VAR_6->resp_received = 1;

  break;
 }
 case 133:
  VAR_6->get_state_supported = 1;
  VAR_6->avcs_state = VAR_7->opcode;

  VAR_6->resp_received = 1;
  break;
 default:
  FUNC_0(&VAR_4->dev, "Message id from adsp core svc: 0x%x\n",
   VAR_8->opcode);
  break;
 }

 if (VAR_6->resp_received)
  FUNC_4(&VAR_6->wait);

 return 0;
}
