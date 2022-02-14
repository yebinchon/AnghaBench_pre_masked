
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {int xpt_nr_rqsts; } ;
struct svc_rqst {int rq_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct svc_xprt*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static bool FUNC_4(struct svc_rqst *VAR_1, struct svc_xprt *VAR_2)
{
 if (!FUNC_3(VAR_0, &VAR_1->rq_flags)) {
  if (!FUNC_2(VAR_2))
   return 0;
  FUNC_0(&VAR_2->xpt_nr_rqsts);
  FUNC_1(VAR_0, &VAR_1->rq_flags);
 }
 return 1;
}
