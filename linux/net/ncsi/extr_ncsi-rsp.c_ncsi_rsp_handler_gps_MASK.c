
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct ncsi_rsp_gps_pkt {TYPE_2__ rsp; } ;
struct ncsi_request {int rsp; struct ncsi_dev_priv* ndp; } ;
struct ncsi_package {int dummy; } ;
struct ncsi_dev_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ncsi_dev_priv*,int ,struct ncsi_package**,int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ncsi_request *VAR_1)
{
 struct ncsi_rsp_gps_pkt *VAR_2;
 struct ncsi_dev_priv *VAR_3 = VAR_1->ndp;
 struct ncsi_package *VAR_4;


 VAR_2 = (struct ncsi_rsp_gps_pkt *)FUNC_1(VAR_1->rsp);
 FUNC_0(VAR_3, VAR_2->rsp.common.channel,
          &VAR_4, ((void*)0));
 if (!VAR_4)
  return -VAR_0;

 return 0;
}
