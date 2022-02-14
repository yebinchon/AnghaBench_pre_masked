
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct ncsi_rsp_pkt {TYPE_2__ rsp; } ;
struct ncsi_request {int rsp; struct ncsi_dev_priv* ndp; } ;
struct ncsi_dev_priv {int dummy; } ;
struct ncsi_channel_mode {scalar_t__* data; scalar_t__ enable; } ;
struct ncsi_channel {struct ncsi_channel_mode* modes; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ncsi_dev_priv*,int ,int *,struct ncsi_channel**) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ncsi_request *VAR_2)
{
 struct ncsi_rsp_pkt *VAR_3;
 struct ncsi_dev_priv *VAR_4 = VAR_2->ndp;
 struct ncsi_channel *VAR_5;
 struct ncsi_channel_mode *VAR_6;

 VAR_3 = (struct ncsi_rsp_pkt *)FUNC_1(VAR_2->rsp);
 FUNC_0(VAR_4, VAR_3->rsp.common.channel,
          ((void*)0), &VAR_5);
 if (!VAR_5)
  return -VAR_0;


 VAR_6 = &VAR_5->modes[VAR_1];
 if (!VAR_6->enable)
  return 0;


 VAR_6->enable = 0;
 VAR_6->data[0] = 0;

 return 0;
}
