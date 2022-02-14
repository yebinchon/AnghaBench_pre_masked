
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int svm_port; int svm_cid; } ;
struct TYPE_3__ {int svm_port; int svm_cid; } ;
struct vsock_sock {TYPE_2__ remote_addr; TYPE_1__ local_addr; } ;
struct vsock_diag_msg {int vdiag_cookie; int vdiag_ino; int vdiag_dst_port; int vdiag_dst_cid; int vdiag_src_port; int vdiag_src_cid; int vdiag_shutdown; int vdiag_state; int vdiag_type; int vdiag_family; } ;
struct sock {int sk_shutdown; int sk_state; int sk_type; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vsock_diag_msg* FUNC_0 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*) ;
 struct vsock_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_3, struct sk_buff *VAR_4,
   u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct vsock_sock *VAR_8 = FUNC_4(VAR_3);
 struct vsock_diag_msg *VAR_9;
 struct nlmsghdr *VAR_10;

 VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_2, sizeof(*VAR_9),
   VAR_7);
 if (!VAR_10)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_10);
 VAR_9->vdiag_family = VAR_0;






 VAR_9->vdiag_type = VAR_3->sk_type;
 VAR_9->vdiag_state = VAR_3->sk_state;
 VAR_9->vdiag_shutdown = VAR_3->sk_shutdown;
 VAR_9->vdiag_src_cid = VAR_8->local_addr.svm_cid;
 VAR_9->vdiag_src_port = VAR_8->local_addr.svm_port;
 VAR_9->vdiag_dst_cid = VAR_8->remote_addr.svm_cid;
 VAR_9->vdiag_dst_port = VAR_8->remote_addr.svm_port;
 VAR_9->vdiag_ino = FUNC_3(VAR_3);

 FUNC_2(VAR_3, VAR_9->vdiag_cookie);

 return 0;
}
