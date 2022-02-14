
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
struct ncsi_dev_priv {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (int ) ;
 struct ncsi_package* FUNC_1 (struct ncsi_dev_priv*,unsigned char) ;
 int FUNC_2 (struct ncsi_dev_priv*,int ,struct ncsi_package**,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ncsi_request *VAR_3)
{
 struct ncsi_rsp_pkt *VAR_4;
 struct ncsi_dev_priv *VAR_5 = VAR_3->ndp;
 struct ncsi_package *VAR_6;
 unsigned char VAR_7;




 VAR_4 = (struct ncsi_rsp_pkt *)FUNC_3(VAR_3->rsp);
 FUNC_2(VAR_5, VAR_4->rsp.common.channel,
          &VAR_6, ((void*)0));
 if (!VAR_6) {
  if (VAR_5->flags & VAR_2)
   return -VAR_1;

  VAR_7 = FUNC_0(VAR_4->rsp.common.channel);
  VAR_6 = FUNC_1(VAR_5, VAR_7);
  if (!VAR_6)
   return -VAR_0;
 }

 return 0;
}
