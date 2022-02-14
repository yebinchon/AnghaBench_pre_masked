
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {int dummy; } ;
struct svc_rqst {int rq_all; int rq_flags; struct svc_pool* rq_pool; struct svc_serv* rq_server; } ;
struct svc_pool {int sp_lock; int sp_nrthreads; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct svc_serv*) ;
 int FUNC_4 (struct svc_rqst*) ;
 int FUNC_5 (int ,int *) ;

void
FUNC_6(struct svc_rqst *VAR_1)
{
 struct svc_serv *VAR_2 = VAR_1->rq_server;
 struct svc_pool *VAR_3 = VAR_1->rq_pool;

 FUNC_1(&VAR_3->sp_lock);
 VAR_3->sp_nrthreads--;
 if (!FUNC_5(VAR_0, &VAR_1->rq_flags))
  FUNC_0(&VAR_1->rq_all);
 FUNC_2(&VAR_3->sp_lock);

 FUNC_4(VAR_1);


 if (VAR_2)
  FUNC_3(VAR_2);
}
