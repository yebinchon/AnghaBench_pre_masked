
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sock_xprt {struct file* file; } ;
struct rpc_xprt {int xprt_net; } ;
struct file {int dummy; } ;


 struct socket* FUNC_0 (struct file*) ;
 struct socket* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct file*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int,int,int,struct socket**,int) ;
 int FUNC_4 (char*,int,int) ;
 struct file* FUNC_5 (struct socket*,int ,int *) ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 (struct sock_xprt*,struct socket*) ;
 int FUNC_8 (int,struct socket*) ;
 int FUNC_9 (struct socket*) ;

__attribute__((used)) static struct socket *FUNC_10(struct rpc_xprt *VAR_1,
  struct sock_xprt *VAR_2, int VAR_3, int VAR_4,
  int VAR_5, bool VAR_6)
{
 struct file *VAR_7;
 struct socket *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_1->xprt_net, VAR_3, VAR_4, VAR_5, &VAR_8, 1);
 if (VAR_9 < 0) {
  FUNC_4("RPC:       can't create %d transport socket (%d).\n",
    VAR_5, -VAR_9);
  goto out;
 }
 FUNC_8(VAR_3, VAR_8);

 if (VAR_6)
  FUNC_9(VAR_8);

 VAR_9 = FUNC_7(VAR_2, VAR_8);
 if (VAR_9) {
  FUNC_6(VAR_8);
  goto out;
 }

 VAR_7 = FUNC_5(VAR_8, VAR_0, ((void*)0));
 if (FUNC_2(VAR_7))
  return FUNC_0(VAR_7);
 VAR_2->file = VAR_7;

 return VAR_8;
out:
 return FUNC_1(VAR_9);
}
