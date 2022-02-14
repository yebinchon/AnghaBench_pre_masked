
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2cap_conn {TYPE_1__* hcon; } ;
struct l2cap_chan {struct amp_mgr* data; } ;
struct amp_mgr {int list; int amp_ctrls_lock; int amp_ctrls; int kref; struct l2cap_chan* a2mp_chan; struct l2cap_conn* l2cap_conn; } ;
struct TYPE_2__ {struct amp_mgr* amp_mgr; } ;


 int FUNC_0 (char*,struct l2cap_conn*,struct amp_mgr*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct l2cap_chan* FUNC_2 (struct l2cap_conn*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct amp_mgr*) ;
 int FUNC_4 (int *) ;
 struct amp_mgr* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct amp_mgr *FUNC_10(struct l2cap_conn *VAR_3, bool VAR_4)
{
 struct amp_mgr *VAR_5;
 struct l2cap_chan *VAR_6;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0("conn %p mgr %p", VAR_3, VAR_5);

 VAR_5->l2cap_conn = VAR_3;

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (!VAR_6) {
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 VAR_5->a2mp_chan = VAR_6;
 VAR_6->data = VAR_5;

 VAR_3->hcon->amp_mgr = VAR_5;

 FUNC_4(&VAR_5->kref);


 FUNC_1(&VAR_5->amp_ctrls);
 FUNC_7(&VAR_5->amp_ctrls_lock);

 FUNC_8(&VAR_2);
 FUNC_6(&VAR_5->list, &VAR_1);
 FUNC_9(&VAR_2);

 return VAR_5;
}
