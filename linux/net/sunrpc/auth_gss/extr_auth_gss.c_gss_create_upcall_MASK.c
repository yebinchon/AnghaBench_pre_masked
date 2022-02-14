
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sunrpc_net {scalar_t__ pipe_version; } ;
struct rpc_pipe {int lock; } ;
struct rpc_cred {TYPE_2__* cr_cred; } ;
struct net {int dummy; } ;
struct TYPE_3__ {int errno; } ;
struct gss_upcall_msg {int waitqueue; TYPE_1__ msg; int * ctx; struct rpc_pipe* pipe; } ;
struct gss_cred {struct rpc_cred gc_base; } ;
struct gss_auth {struct net* net; } ;
struct TYPE_4__ {int fsuid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct gss_upcall_msg*) ;
 int FUNC_2 (struct gss_upcall_msg*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct rpc_cred*,int *) ;
 int FUNC_7 (struct gss_upcall_msg*) ;
 struct gss_upcall_msg* FUNC_8 (struct gss_auth*,struct rpc_cred*) ;
 int FUNC_9 (struct net*) ;
 int VAR_6 ;
 struct sunrpc_net* FUNC_10 (struct net*,int ) ;
 int VAR_7 ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_8 ;
 int FUNC_15 (int ,int) ;
 int VAR_9 ;
 int FUNC_16 (int ,int,int) ;
 int FUNC_17 () ;

__attribute__((used)) static inline int
FUNC_18(struct gss_auth *VAR_10, struct gss_cred *VAR_11)
{
 struct net *VAR_12 = VAR_10->net;
 struct sunrpc_net *VAR_13 = FUNC_10(VAR_12, VAR_8);
 struct rpc_pipe *VAR_14;
 struct rpc_cred *VAR_15 = &VAR_11->gc_base;
 struct gss_upcall_msg *VAR_16;
 FUNC_0(VAR_9);
 int VAR_17;

retry:
 VAR_17 = 0;

 if (!FUNC_9(VAR_12)) {
  FUNC_17();
  VAR_17 = -VAR_0;
  goto out;
 }
 VAR_16 = FUNC_8(VAR_10, VAR_15);
 if (FUNC_2(VAR_16) == -VAR_1) {
  VAR_17 = FUNC_16(VAR_7,
    VAR_13->pipe_version >= 0, 15 * VAR_3);
  if (VAR_13->pipe_version < 0) {
   FUNC_17();
   VAR_17 = -VAR_0;
  }
  if (VAR_17 < 0)
   goto out;
  goto retry;
 }
 if (FUNC_1(VAR_16)) {
  VAR_17 = FUNC_2(VAR_16);
  goto out;
 }
 VAR_14 = VAR_16->pipe;
 for (;;) {
  FUNC_11(&VAR_16->waitqueue, &VAR_9, VAR_4);
  FUNC_13(&VAR_14->lock);
  if (VAR_16->ctx != ((void*)0) || VAR_16->msg.errno < 0) {
   break;
  }
  FUNC_14(&VAR_14->lock);
  if (FUNC_3(VAR_5)) {
   VAR_17 = -VAR_2;
   goto out_intr;
  }
  FUNC_12();
 }
 if (VAR_16->ctx)
  FUNC_6(VAR_15, VAR_16->ctx);
 else
  VAR_17 = VAR_16->msg.errno;
 FUNC_14(&VAR_14->lock);
out_intr:
 FUNC_4(&VAR_16->waitqueue, &VAR_9);
 FUNC_7(VAR_16);
out:
 FUNC_15(FUNC_5(&VAR_6,
          VAR_15->cr_cred->fsuid), VAR_17);
 return VAR_17;
}
