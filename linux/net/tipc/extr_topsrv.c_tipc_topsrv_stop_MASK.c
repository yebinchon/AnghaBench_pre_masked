
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tipc_topsrv {int conn_idr; int idr_lock; struct socket* listener; scalar_t__ idr_in_use; } ;
struct tipc_conn {int dummy; } ;
struct socket {TYPE_3__* sk; TYPE_1__* ops; } ;
struct net {int dummy; } ;
struct TYPE_6__ {TYPE_2__* sk_prot_creator; } ;
struct TYPE_5__ {int owner; } ;
struct TYPE_4__ {int owner; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct tipc_conn* FUNC_2 (int *,int) ;
 int FUNC_3 (struct tipc_topsrv*) ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct tipc_conn*) ;
 struct tipc_topsrv* FUNC_8 (struct net*) ;
 int FUNC_9 (struct tipc_topsrv*) ;

__attribute__((used)) static void FUNC_10(struct net *VAR_0)
{
 struct tipc_topsrv *VAR_1 = FUNC_8(VAR_0);
 struct socket *VAR_2 = VAR_1->listener;
 struct tipc_conn *VAR_3;
 int VAR_4;

 FUNC_5(&VAR_1->idr_lock);
 for (VAR_4 = 0; VAR_1->idr_in_use; VAR_4++) {
  VAR_3 = FUNC_2(&VAR_1->conn_idr, VAR_4);
  if (VAR_3) {
   FUNC_6(&VAR_1->idr_lock);
   FUNC_7(VAR_3);
   FUNC_5(&VAR_1->idr_lock);
  }
 }
 FUNC_0(VAR_2->ops->owner);
 FUNC_0(VAR_2->sk->sk_prot_creator->owner);
 VAR_1->listener = ((void*)0);
 FUNC_6(&VAR_1->idr_lock);
 FUNC_4(VAR_2);
 FUNC_9(VAR_1);
 FUNC_1(&VAR_1->conn_idr);
 FUNC_3(VAR_1);
}
