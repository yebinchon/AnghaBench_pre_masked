
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_xprt {int xpt_reserved; } ;
struct TYPE_4__ {TYPE_1__* head; } ;
struct svc_rqst {int rq_reserved; TYPE_2__ rq_res; struct svc_xprt* rq_xprt; } ;
struct TYPE_3__ {scalar_t__ iov_len; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct svc_xprt*) ;

void FUNC_3(struct svc_rqst *VAR_0, int VAR_1)
{
 struct svc_xprt *VAR_2 = VAR_0->rq_xprt;

 VAR_1 += VAR_0->rq_res.head[0].iov_len;

 if (VAR_2 && VAR_1 < VAR_0->rq_reserved) {
  FUNC_0((VAR_0->rq_reserved - VAR_1), &VAR_2->xpt_reserved);
  VAR_0->rq_reserved = VAR_1;
  FUNC_1();
  FUNC_2(VAR_2);
 }
}
