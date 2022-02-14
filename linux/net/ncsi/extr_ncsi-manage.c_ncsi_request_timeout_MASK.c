
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct ncsi_request {int enabled; scalar_t__ flags; scalar_t__ cmd; scalar_t__ rsp; struct ncsi_dev_priv* ndp; } ;
struct ncsi_package {int dummy; } ;
struct ncsi_dev_priv {int lock; } ;
struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct ncsi_cmd_pkt {TYPE_2__ cmd; } ;
struct ncsi_channel {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct ncsi_request* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct ncsi_dev_priv*,int ,struct ncsi_package**,struct ncsi_channel**) ;
 int FUNC_2 (struct ncsi_request*) ;
 int FUNC_3 (struct ncsi_request*,struct ncsi_package*,struct ncsi_channel*) ;
 struct ncsi_request* VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_3)
{
 struct ncsi_request *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 struct ncsi_dev_priv *VAR_5 = VAR_4->ndp;
 struct ncsi_cmd_pkt *VAR_6;
 struct ncsi_package *VAR_7;
 struct ncsi_channel *VAR_8;
 unsigned long VAR_9;




 FUNC_5(&VAR_5->lock, VAR_9);
 VAR_4->enabled = 0;
 if (VAR_4->rsp || !VAR_4->cmd) {
  FUNC_6(&VAR_5->lock, VAR_9);
  return;
 }
 FUNC_6(&VAR_5->lock, VAR_9);

 if (VAR_4->flags == VAR_0) {
  if (VAR_4->cmd) {

   VAR_6 = (struct ncsi_cmd_pkt *)
         FUNC_4(VAR_4->cmd);
   FUNC_1(VAR_5,
            VAR_6->cmd.common.channel,
            &VAR_7, &VAR_8);
   FUNC_3(VAR_4, VAR_7, VAR_8);
  }
 }


 FUNC_2(VAR_4);
}
