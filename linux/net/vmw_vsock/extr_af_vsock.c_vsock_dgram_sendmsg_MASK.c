
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_vm {scalar_t__ svm_cid; int svm_port; } ;
struct vsock_sock {struct sockaddr_vm remote_addr; } ;
struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {int dummy; } ;
struct msghdr {int msg_flags; int msg_namelen; scalar_t__ msg_name; } ;
struct TYPE_2__ {scalar_t__ (* get_local_cid ) () ;int (* dgram_enqueue ) (struct vsock_sock*,struct sockaddr_vm*,struct msghdr*,size_t) ;int (* dgram_allow ) (scalar_t__,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct vsock_sock*,struct sockaddr_vm*,struct msghdr*,size_t) ;
 TYPE_1__* VAR_5 ;
 int FUNC_6 (struct sockaddr_vm*) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,struct sockaddr_vm**) ;
 int FUNC_8 (struct vsock_sock*) ;
 struct vsock_sock* FUNC_9 (struct sock*) ;

__attribute__((used)) static int FUNC_10(struct socket *VAR_6, struct msghdr *VAR_7,
          size_t VAR_8)
{
 int VAR_9;
 struct sock *VAR_10;
 struct vsock_sock *VAR_11;
 struct sockaddr_vm *VAR_12;

 if (VAR_7->msg_flags & VAR_2)
  return -VAR_1;


 VAR_9 = 0;
 VAR_10 = VAR_6->sk;
 VAR_11 = FUNC_9(VAR_10);

 FUNC_0(VAR_10);

 VAR_9 = FUNC_8(VAR_11);
 if (VAR_9)
  goto out;





 if (VAR_7->msg_name &&
     FUNC_7(VAR_7->msg_name, VAR_7->msg_namelen,
       &VAR_12) == 0) {




  if (VAR_12->svm_cid == VAR_4)
   VAR_12->svm_cid = VAR_5->get_local_cid();

  if (!FUNC_6(VAR_12)) {
   VAR_9 = -VAR_0;
   goto out;
  }
 } else if (VAR_6->state == VAR_3) {
  VAR_12 = &VAR_11->remote_addr;

  if (VAR_12->svm_cid == VAR_4)
   VAR_12->svm_cid = VAR_5->get_local_cid();




  if (!FUNC_6(&VAR_11->remote_addr)) {
   VAR_9 = -VAR_0;
   goto out;
  }
 } else {
  VAR_9 = -VAR_0;
  goto out;
 }

 if (!VAR_5->dgram_allow(VAR_12->svm_cid,
        VAR_12->svm_port)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_9 = VAR_5->dgram_enqueue(VAR_11, VAR_12, VAR_7, VAR_8);

out:
 FUNC_1(VAR_10);
 return VAR_9;
}
