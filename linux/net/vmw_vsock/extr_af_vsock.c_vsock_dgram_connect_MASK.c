
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int remote_addr; } ;
struct socket {int state; struct sock* sk; } ;
struct sockaddr_vm {scalar_t__ svm_family; int svm_port; int svm_cid; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int (* dgram_allow ) (int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,struct sockaddr_vm*,int) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_4 (struct sockaddr*,int,struct sockaddr_vm**) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct vsock_sock*) ;
 struct vsock_sock* FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_8,
          struct sockaddr *VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12;
 struct sock *VAR_13;
 struct vsock_sock *VAR_14;
 struct sockaddr_vm *VAR_15;

 VAR_13 = VAR_8->sk;
 VAR_14 = FUNC_7(VAR_13);

 VAR_12 = FUNC_4(VAR_9, VAR_10, &VAR_15);
 if (VAR_12 == -VAR_1 && VAR_15->svm_family == VAR_0) {
  FUNC_0(VAR_13);
  FUNC_5(&VAR_14->remote_addr, VAR_5,
    VAR_6);
  VAR_8->state = VAR_4;
  FUNC_2(VAR_13);
  return 0;
 } else if (VAR_12 != 0)
  return -VAR_2;

 FUNC_0(VAR_13);

 VAR_12 = FUNC_6(VAR_14);
 if (VAR_12)
  goto out;

 if (!VAR_7->dgram_allow(VAR_15->svm_cid,
        VAR_15->svm_port)) {
  VAR_12 = -VAR_2;
  goto out;
 }

 FUNC_1(&VAR_14->remote_addr, VAR_15, sizeof(VAR_14->remote_addr));
 VAR_8->state = VAR_3;

out:
 FUNC_2(VAR_13);
 return VAR_12;
}
