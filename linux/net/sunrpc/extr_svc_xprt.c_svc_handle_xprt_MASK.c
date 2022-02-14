
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct svc_xprt {int xpt_reserved; TYPE_3__* xpt_ops; int xpt_ref; TYPE_1__* xpt_class; int xpt_cred; int xpt_server; int xpt_flags; } ;
struct svc_serv {int sv_max_mesg; } ;
struct svc_rqst {int rq_reserved; int rq_stime; int rq_deferred; TYPE_2__* rq_pool; struct svc_serv* rq_server; } ;
struct TYPE_6__ {int (* xpo_recvfrom ) (struct svc_rqst*) ;struct svc_xprt* (* xpo_accept ) (struct svc_xprt*) ;int (* xpo_kill_temp_xprt ) (struct svc_xprt*) ;} ;
struct TYPE_5__ {int sp_id; } ;
struct TYPE_4__ {int xcl_owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct svc_xprt*) ;
 struct svc_xprt* FUNC_8 (struct svc_xprt*) ;
 int FUNC_9 (struct svc_rqst*) ;
 int FUNC_10 (struct svc_serv*,struct svc_xprt*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct svc_xprt*) ;
 int FUNC_13 (struct svc_rqst*) ;
 int FUNC_14 (struct svc_xprt*) ;
 int FUNC_15 (struct svc_xprt*) ;
 scalar_t__ FUNC_16 (struct svc_rqst*,struct svc_xprt*) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 int FUNC_19 (struct svc_xprt*,int) ;

__attribute__((used)) static int FUNC_20(struct svc_rqst *VAR_3, struct svc_xprt *VAR_4)
{
 struct svc_serv *VAR_5 = VAR_3->rq_server;
 int VAR_6 = 0;

 if (FUNC_18(VAR_0, &VAR_4->xpt_flags)) {
  FUNC_2("svc_recv: found XPT_CLOSE\n");
  if (FUNC_17(VAR_1, &VAR_4->xpt_flags))
   VAR_4->xpt_ops->xpo_kill_temp_xprt(VAR_4);
  FUNC_14(VAR_4);

  goto out;
 }
 if (FUNC_18(VAR_2, &VAR_4->xpt_flags)) {
  struct svc_xprt *VAR_7;




  FUNC_0(VAR_4->xpt_class->xcl_owner);
  FUNC_11(VAR_4->xpt_server);
  VAR_7 = VAR_4->xpt_ops->xpo_accept(VAR_4);
  if (VAR_7) {
   VAR_7->xpt_cred = FUNC_3(VAR_4->xpt_cred);
   FUNC_10(VAR_5, VAR_7);
  } else
   FUNC_6(VAR_4->xpt_class->xcl_owner);
 } else if (FUNC_16(VAR_3, VAR_4)) {

  FUNC_2("svc: server %p, pool %u, transport %p, inuse=%d\n",
   VAR_3, VAR_3->rq_pool->sp_id, VAR_4,
   FUNC_4(&VAR_4->xpt_ref));
  VAR_3->rq_deferred = FUNC_12(VAR_4);
  if (VAR_3->rq_deferred)
   VAR_6 = FUNC_13(VAR_3);
  else
   VAR_6 = VAR_4->xpt_ops->xpo_recvfrom(VAR_3);
  VAR_3->rq_stime = FUNC_5();
  VAR_3->rq_reserved = VAR_5->sv_max_mesg;
  FUNC_1(VAR_3->rq_reserved, &VAR_4->xpt_reserved);
 }

 FUNC_15(VAR_4);
out:
 FUNC_19(VAR_4, VAR_6);
 return VAR_6;
}
