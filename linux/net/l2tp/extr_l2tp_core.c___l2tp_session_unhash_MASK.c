
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2tp_tunnel {scalar_t__ version; int l2tp_net; int hlist_lock; } ;
struct l2tp_session {int global_hlist; int hlist; struct l2tp_tunnel* tunnel; } ;
struct l2tp_net {int l2tp_session_hlist_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct l2tp_net* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct l2tp_session *VAR_1)
{
 struct l2tp_tunnel *VAR_2 = VAR_1->tunnel;


 if (VAR_2) {

  FUNC_6(&VAR_2->hlist_lock);
  FUNC_0(&VAR_1->hlist);
  FUNC_7(&VAR_2->hlist_lock);


  if (VAR_2->version != VAR_0) {
   struct l2tp_net *VAR_3 = FUNC_2(VAR_2->l2tp_net);
   FUNC_3(&VAR_3->l2tp_session_hlist_lock);
   FUNC_1(&VAR_1->global_hlist);
   FUNC_4(&VAR_3->l2tp_session_hlist_lock);
   FUNC_5();
  }
 }
}
