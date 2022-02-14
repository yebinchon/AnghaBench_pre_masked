
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_xprt_switch {int dummy; } ;
struct rpc_xprt {TYPE_2__* bc_xprt; } ;
struct rpc_create_args {int protocol; int flags; TYPE_1__* bc_xprt; } ;
struct rpc_clnt {int cl_softrtry; int cl_softerr; int cl_autobind; int cl_noretranstimeo; int cl_discrtry; int cl_chatty; } ;
struct TYPE_4__ {struct rpc_xprt_switch* xpt_bc_xps; } ;
struct TYPE_3__ {struct rpc_xprt_switch* xpt_bc_xps; } ;


 int VAR_0 ;
 struct rpc_clnt* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct rpc_clnt*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 struct rpc_clnt* FUNC_3 (struct rpc_create_args*,struct rpc_xprt_switch*,struct rpc_xprt*,int *) ;
 int FUNC_4 (struct rpc_clnt*) ;
 int FUNC_5 (struct rpc_clnt*) ;
 int FUNC_6 (struct rpc_xprt*) ;
 struct rpc_xprt_switch* FUNC_7 (struct rpc_xprt*,int ) ;
 int FUNC_8 (struct rpc_xprt_switch*) ;

__attribute__((used)) static struct rpc_clnt *FUNC_9(struct rpc_create_args *VAR_10,
     struct rpc_xprt *VAR_11)
{
 struct rpc_clnt *VAR_12 = ((void*)0);
 struct rpc_xprt_switch *VAR_13;

 if (VAR_10->bc_xprt && VAR_10->bc_xprt->xpt_bc_xps) {
  FUNC_2(!(VAR_10->protocol & VAR_9));
  VAR_13 = VAR_10->bc_xprt->xpt_bc_xps;
  FUNC_8(VAR_13);
 } else {
  VAR_13 = FUNC_7(VAR_11, VAR_1);
  if (VAR_13 == ((void*)0)) {
   FUNC_6(VAR_11);
   return FUNC_0(-VAR_0);
  }
  if (VAR_11->bc_xprt) {
   FUNC_8(VAR_13);
   VAR_11->bc_xprt->xpt_bc_xps = VAR_13;
  }
 }
 VAR_12 = FUNC_3(VAR_10, VAR_13, VAR_11, ((void*)0));
 if (FUNC_1(VAR_12))
  return VAR_12;

 if (!(VAR_10->flags & VAR_5)) {
  int VAR_14 = FUNC_4(VAR_12);
  if (VAR_14 != 0) {
   FUNC_5(VAR_12);
   return FUNC_0(VAR_14);
  }
 }

 VAR_12->cl_softrtry = 1;
 if (VAR_10->flags & (VAR_4|VAR_8)) {
  VAR_12->cl_softrtry = 0;
  if (VAR_10->flags & VAR_8)
   VAR_12->cl_softerr = 1;
 }

 if (VAR_10->flags & VAR_2)
  VAR_12->cl_autobind = 1;
 if (VAR_10->flags & VAR_6)
  VAR_12->cl_noretranstimeo = 1;
 if (VAR_10->flags & VAR_3)
  VAR_12->cl_discrtry = 1;
 if (!(VAR_10->flags & VAR_7))
  VAR_12->cl_chatty = 1;

 return VAR_12;
}
