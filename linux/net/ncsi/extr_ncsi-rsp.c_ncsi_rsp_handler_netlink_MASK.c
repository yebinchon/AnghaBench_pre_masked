
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
struct ncsi_package {int dummy; } ;
struct ncsi_dev_priv {int dummy; } ;
struct ncsi_channel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ncsi_dev_priv*,int ,struct ncsi_package**,struct ncsi_channel**) ;
 int FUNC_1 (struct ncsi_request*,struct ncsi_package*,struct ncsi_channel*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ncsi_request *VAR_1)
{
 struct ncsi_dev_priv *VAR_2 = VAR_1->ndp;
 struct ncsi_rsp_pkt *VAR_3;
 struct ncsi_package *VAR_4;
 struct ncsi_channel *VAR_5;
 int VAR_6;


 VAR_3 = (struct ncsi_rsp_pkt *)FUNC_2(VAR_1->rsp);
 FUNC_0(VAR_2, VAR_3->rsp.common.channel,
          &VAR_4, &VAR_5);
 if (!VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_1, VAR_4, VAR_5);

 return VAR_6;
}
