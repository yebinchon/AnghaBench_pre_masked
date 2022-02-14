
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct l2cap_conn {TYPE_1__* hcon; } ;
struct l2cap_chan {int dummy; } ;
struct amp_mgr {struct l2cap_chan* a2mp_chan; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct amp_mgr*,struct l2cap_chan*) ;
 int FUNC_1 (char*) ;
 struct amp_mgr* FUNC_2 (struct l2cap_conn*,int) ;

struct l2cap_chan *FUNC_3(struct l2cap_conn *VAR_1,
           struct sk_buff *VAR_2)
{
 struct amp_mgr *VAR_3;

 if (VAR_1->hcon->type != VAR_0)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_1, 0);
 if (!VAR_3) {
  FUNC_1("Could not create AMP manager");
  return ((void*)0);
 }

 FUNC_0("mgr: %p chan %p", VAR_3, VAR_3->a2mp_chan);

 return VAR_3->a2mp_chan;
}
