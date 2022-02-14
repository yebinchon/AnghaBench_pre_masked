
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {int sk; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct TYPE_7__ {int sk_state; } ;
struct TYPE_5__ {int family; } ;
struct TYPE_6__ {int transport_len; TYPE_1__ transport; int transport_type; int srx_service; int srx_family; } ;
struct rxrpc_sock {TYPE_3__ sk; int connect_srx; int flags; struct rxrpc_local* local; TYPE_2__ srx; int family; } ;
struct rxrpc_local {int dummy; } ;
struct msghdr {int msg_flags; int msg_namelen; int * msg_name; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rxrpc_local*) ;
 int VAR_4 ;
 int FUNC_1 (struct rxrpc_local*) ;




 int VAR_5 ;

 int VAR_6 ;
 int FUNC_2 (char*,int,size_t) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct rxrpc_sock*,struct msghdr*,size_t) ;
 struct rxrpc_local* FUNC_7 (int ,TYPE_2__*) ;
 struct rxrpc_sock* FUNC_8 (int ) ;
 int FUNC_9 (struct rxrpc_sock*,int *,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_7, struct msghdr *VAR_8, size_t VAR_9)
{
 struct rxrpc_local *VAR_10;
 struct rxrpc_sock *VAR_11 = FUNC_8(VAR_7->sk);
 int VAR_12;

 FUNC_2(",{%d},,%zu", VAR_11->sk.sk_state, VAR_9);

 if (VAR_8->msg_flags & VAR_4)
  return -VAR_3;

 if (VAR_8->msg_name) {
  VAR_12 = FUNC_9(VAR_11, VAR_8->msg_name, VAR_8->msg_namelen);
  if (VAR_12 < 0) {
   FUNC_3(" = %d [bad addr]", VAR_12);
   return VAR_12;
  }
 }

 FUNC_4(&VAR_11->sk);

 switch (VAR_11->sk.sk_state) {
 case 128:
 case 131:
  VAR_11->srx.srx_family = VAR_0;
  VAR_11->srx.srx_service = 0;
  VAR_11->srx.transport_type = VAR_6;
  VAR_11->srx.transport.family = VAR_11->family;
  switch (VAR_11->family) {
  case 134:
   VAR_11->srx.transport_len = sizeof(struct sockaddr_in);
   break;





  default:
   VAR_12 = -VAR_1;
   goto error_unlock;
  }
  VAR_10 = FUNC_7(FUNC_10(VAR_7->sk), &VAR_11->srx);
  if (FUNC_0(VAR_10)) {
   VAR_12 = FUNC_1(VAR_10);
   goto error_unlock;
  }

  VAR_11->local = VAR_10;
  VAR_11->sk.sk_state = 132;


 case 132:
  if (!VAR_8->msg_name &&
      FUNC_11(VAR_5, &VAR_11->flags)) {
   VAR_8->msg_name = &VAR_11->connect_srx;
   VAR_8->msg_namelen = sizeof(VAR_11->connect_srx);
  }

 case 130:
 case 129:
  VAR_12 = FUNC_6(VAR_11, VAR_8, VAR_9);

  goto out;
 default:
  VAR_12 = -VAR_2;
  goto error_unlock;
 }

error_unlock:
 FUNC_5(&VAR_11->sk);
out:
 FUNC_3(" = %d", VAR_12);
 return VAR_12;
}
