
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {int xpt_nr_rqsts; } ;
struct svc_rqst {int rq_flags; struct svc_xprt* rq_xprt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct svc_xprt*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct svc_rqst *VAR_1)
{
 struct svc_xprt *VAR_2 = VAR_1->rq_xprt;
 if (FUNC_3(VAR_0, &VAR_1->rq_flags)) {
  FUNC_0(&VAR_2->xpt_nr_rqsts);
  FUNC_1();
  FUNC_2(VAR_2);
 }
}
