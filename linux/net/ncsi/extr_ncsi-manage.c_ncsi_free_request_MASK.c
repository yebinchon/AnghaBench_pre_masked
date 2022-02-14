
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ncsi_request {int enabled; int used; int flags; struct sk_buff* rsp; struct sk_buff* cmd; int timer; struct ncsi_dev_priv* ndp; } ;
struct ncsi_dev_priv {scalar_t__ pending_req_num; int work; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct ncsi_request *VAR_1)
{
 struct ncsi_dev_priv *VAR_2 = VAR_1->ndp;
 struct sk_buff *VAR_3, *VAR_4;
 unsigned long VAR_5;
 bool VAR_6;

 if (VAR_1->enabled) {
  VAR_1->enabled = 0;
  FUNC_1(&VAR_1->timer);
 }

 FUNC_3(&VAR_2->lock, VAR_5);
 VAR_3 = VAR_1->cmd;
 VAR_4 = VAR_1->rsp;
 VAR_1->cmd = ((void*)0);
 VAR_1->rsp = ((void*)0);
 VAR_1->used = 0;
 VAR_6 = !!(VAR_1->flags & VAR_0);
 FUNC_4(&VAR_2->lock, VAR_5);

 if (VAR_6 && VAR_3 && --VAR_2->pending_req_num == 0)
  FUNC_2(&VAR_2->work);


 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
}
