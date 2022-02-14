
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {int sv_nrthreads; } ;
struct svc_rqst {int rq_all; } ;
struct svc_pool {int sp_lock; int sp_all_threads; int sp_nrthreads; } ;


 int VAR_0 ;
 struct svc_rqst* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct svc_rqst* FUNC_4 (struct svc_serv*,struct svc_pool*,int) ;

struct svc_rqst *
FUNC_5(struct svc_serv *VAR_1, struct svc_pool *VAR_2, int VAR_3)
{
 struct svc_rqst *VAR_4;

 VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_1->sv_nrthreads++;
 FUNC_2(&VAR_2->sp_lock);
 VAR_2->sp_nrthreads++;
 FUNC_1(&VAR_4->rq_all, &VAR_2->sp_all_threads);
 FUNC_3(&VAR_2->sp_lock);
 return VAR_4;
}
