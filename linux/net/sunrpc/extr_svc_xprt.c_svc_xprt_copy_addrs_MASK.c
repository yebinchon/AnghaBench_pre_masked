
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {int xpt_locallen; int xpt_local; int xpt_remotelen; int xpt_remote; } ;
struct svc_rqst {int rq_daddrlen; int rq_daddr; int rq_addrlen; int rq_addr; } ;


 int FUNC_0 (int *,int *,int ) ;

void FUNC_1(struct svc_rqst *VAR_0, struct svc_xprt *VAR_1)
{
 FUNC_0(&VAR_0->rq_addr, &VAR_1->xpt_remote, VAR_1->xpt_remotelen);
 VAR_0->rq_addrlen = VAR_1->xpt_remotelen;





 FUNC_0(&VAR_0->rq_daddr, &VAR_1->xpt_local, VAR_1->xpt_locallen);
 VAR_0->rq_daddrlen = VAR_1->xpt_locallen;
}
