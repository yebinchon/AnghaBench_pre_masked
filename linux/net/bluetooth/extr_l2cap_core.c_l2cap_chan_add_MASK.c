
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_conn {int chan_lock; } ;
struct l2cap_chan {int dummy; } ;


 int FUNC_0 (struct l2cap_conn*,struct l2cap_chan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct l2cap_conn *VAR_0, struct l2cap_chan *VAR_1)
{
 FUNC_1(&VAR_0->chan_lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->chan_lock);
}
