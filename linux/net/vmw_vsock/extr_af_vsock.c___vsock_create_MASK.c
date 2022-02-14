
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int rejected; int sent_request; int ignore_connecting_rst; int connect_timeout; int owner; int trusted; int pending_work; int connect_work; scalar_t__ peer_shutdown; int accept_queue; int pending_links; int * listener; int connected_table; int bound_table; int remote_addr; int local_addr; } ;
struct socket {int dummy; } ;
struct sock {unsigned short sk_type; int sk_backlog_rcv; int sk_destruct; } ;
struct net {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {scalar_t__ (* init ) (struct vsock_sock*,struct vsock_sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 struct sock* FUNC_5 (struct net*,int ,int ,int *,int) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct socket*,struct sock*) ;
 int FUNC_8 (struct sock*,int ) ;
 scalar_t__ FUNC_9 (struct vsock_sock*,struct vsock_sock*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_10 (int *,int ,int ) ;
 int VAR_7 ;
 int FUNC_11 (struct vsock_sock*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct vsock_sock* FUNC_12 (struct sock*) ;
 int VAR_11 ;

struct sock *FUNC_13(struct net *VAR_12,
       struct socket *VAR_13,
       struct sock *VAR_14,
       gfp_t VAR_15,
       unsigned short VAR_16,
       int VAR_17)
{
 struct sock *VAR_18;
 struct vsock_sock *VAR_19;
 struct vsock_sock *VAR_20;

 VAR_18 = FUNC_5(VAR_12, VAR_0, VAR_15, &VAR_9, VAR_17);
 if (!VAR_18)
  return ((void*)0);

 FUNC_7(VAR_13, VAR_18);





 if (!VAR_13)
  VAR_18->sk_type = VAR_16;

 VAR_20 = FUNC_12(VAR_18);
 FUNC_10(&VAR_20->local_addr, VAR_3, VAR_4);
 FUNC_10(&VAR_20->remote_addr, VAR_3, VAR_4);

 VAR_18->sk_destruct = VAR_11;
 VAR_18->sk_backlog_rcv = VAR_10;
 FUNC_8(VAR_18, VAR_2);

 FUNC_1(&VAR_20->bound_table);
 FUNC_1(&VAR_20->connected_table);
 VAR_20->listener = ((void*)0);
 FUNC_1(&VAR_20->pending_links);
 FUNC_1(&VAR_20->accept_queue);
 VAR_20->rejected = 0;
 VAR_20->sent_request = 0;
 VAR_20->ignore_connecting_rst = 0;
 VAR_20->peer_shutdown = 0;
 FUNC_0(&VAR_20->connect_work, VAR_7);
 FUNC_0(&VAR_20->pending_work, VAR_8);

 VAR_19 = VAR_14 ? FUNC_12(VAR_14) : ((void*)0);
 if (VAR_14) {
  VAR_20->trusted = VAR_19->trusted;
  VAR_20->owner = FUNC_3(VAR_19->owner);
  VAR_20->connect_timeout = VAR_19->connect_timeout;
 } else {
  VAR_20->trusted = FUNC_2(VAR_1);
  VAR_20->owner = FUNC_4();
  VAR_20->connect_timeout = VAR_5;
 }

 if (VAR_6->init(VAR_20, VAR_19) < 0) {
  FUNC_6(VAR_18);
  return ((void*)0);
 }

 if (VAR_13)
  FUNC_11(VAR_20);

 return VAR_18;
}
