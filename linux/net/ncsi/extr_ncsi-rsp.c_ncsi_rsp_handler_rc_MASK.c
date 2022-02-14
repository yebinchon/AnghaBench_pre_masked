
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
struct ncsi_channel {int lock; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ncsi_dev_priv*,int ,int *,struct ncsi_channel**) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ncsi_request *VAR_2)
{
 struct ncsi_rsp_pkt *VAR_3;
 struct ncsi_dev_priv *VAR_4 = VAR_2->ndp;
 struct ncsi_channel *VAR_5;
 unsigned long VAR_6;


 VAR_3 = (struct ncsi_rsp_pkt *)FUNC_1(VAR_2->rsp);
 FUNC_0(VAR_4, VAR_3->rsp.common.channel,
          ((void*)0), &VAR_5);
 if (!VAR_5)
  return -VAR_0;


 FUNC_2(&VAR_5->lock, VAR_6);
 VAR_5->state = VAR_1;
 FUNC_3(&VAR_5->lock, VAR_6);

 return 0;
}
