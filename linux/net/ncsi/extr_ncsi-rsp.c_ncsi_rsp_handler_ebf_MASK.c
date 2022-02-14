
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct ncsi_rsp_pkt {TYPE_2__ rsp; } ;
struct ncsi_request {int cmd; int rsp; struct ncsi_dev_priv* ndp; } ;
struct ncsi_dev_priv {int dummy; } ;
struct ncsi_cmd_ebf_pkt {int mode; } ;
struct ncsi_channel_mode {int enable; int * data; } ;
struct ncsi_channel {struct ncsi_channel_mode* modes; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ncsi_dev_priv*,int ,int *,struct ncsi_channel**) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ncsi_request *VAR_2)
{
 struct ncsi_cmd_ebf_pkt *VAR_3;
 struct ncsi_rsp_pkt *VAR_4;
 struct ncsi_dev_priv *VAR_5 = VAR_2->ndp;
 struct ncsi_channel *VAR_6;
 struct ncsi_channel_mode *VAR_7;


 VAR_4 = (struct ncsi_rsp_pkt *)FUNC_2(VAR_2->rsp);
 FUNC_0(VAR_5, VAR_4->rsp.common.channel, ((void*)0), &VAR_6);
 if (!VAR_6)
  return -VAR_0;


 VAR_7 = &VAR_6->modes[VAR_1];
 if (VAR_7->enable)
  return 0;


 VAR_3 = (struct ncsi_cmd_ebf_pkt *)FUNC_2(VAR_2->cmd);
 VAR_7->enable = 1;
 VAR_7->data[0] = FUNC_1(VAR_3->mode);

 return 0;
}
