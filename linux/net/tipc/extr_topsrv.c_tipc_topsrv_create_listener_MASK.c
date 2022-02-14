
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tipc_topsrv {struct socket* listener; int net; } ;
struct socket {TYPE_3__* ops; struct sock* sk; } ;
struct TYPE_5__ {void* upper; void* lower; void* type; } ;
struct TYPE_6__ {TYPE_1__ nameseq; } ;
struct sockaddr_tipc {int scope; TYPE_2__ addr; int addrtype; int family; } ;
struct sockaddr {int dummy; } ;
struct sock {TYPE_4__* sk_prot_creator; int sk_callback_lock; struct tipc_topsrv* sk_user_data; int sk_data_ready; } ;
typedef int saddr ;
typedef int imp ;
struct TYPE_8__ {int owner; } ;
struct TYPE_7__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (struct socket*,struct sockaddr*,int) ;
 int FUNC_1 (struct socket*,int ) ;
 int FUNC_2 (struct socket*,int ,int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,struct socket**) ;
 int FUNC_5 (struct socket*) ;
 int VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct tipc_topsrv *VAR_10)
{
 int VAR_11 = VAR_5;
 struct socket *VAR_12 = ((void*)0);
 struct sockaddr_tipc VAR_13;
 struct sock *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_4(VAR_10->net, VAR_0, VAR_2, 0, &VAR_12);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_10->listener = VAR_12;
 VAR_14 = VAR_12->sk;
 FUNC_6(&VAR_14->sk_callback_lock);
 VAR_14->sk_data_ready = VAR_9;
 VAR_14->sk_user_data = VAR_10;
 FUNC_7(&VAR_14->sk_callback_lock);

 VAR_15 = FUNC_2(VAR_12, VAR_3, VAR_6,
          (char *)&VAR_11, sizeof(VAR_11));
 if (VAR_15 < 0)
  goto err;

 VAR_13.family = VAR_0;
 VAR_13.addrtype = VAR_4;
 VAR_13.addr.nameseq.type = VAR_8;
 VAR_13.addr.nameseq.lower = VAR_8;
 VAR_13.addr.nameseq.upper = VAR_8;
 VAR_13.scope = VAR_7;

 VAR_15 = FUNC_0(VAR_12, (struct sockaddr *)&VAR_13, sizeof(VAR_13));
 if (VAR_15 < 0)
  goto err;
 VAR_15 = FUNC_1(VAR_12, 0);
 if (VAR_15 < 0)
  goto err;
 FUNC_3(VAR_12->ops->owner);
 FUNC_3(VAR_14->sk_prot_creator->owner);

 return 0;
err:
 FUNC_5(VAR_12);
 return -VAR_1;
}
