
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {int sv_max_mesg; int sv_xdrsize; } ;
struct svc_rqst {void* rq_resp; void* rq_argp; struct svc_pool* rq_pool; struct svc_serv* rq_server; int rq_lock; int rq_flags; } ;
struct svc_pool {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 void* FUNC_1 (int ,int ,int) ;
 struct svc_rqst* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct svc_rqst*,int ,int) ;
 int FUNC_5 (struct svc_rqst*) ;

struct svc_rqst *
FUNC_6(struct svc_serv *VAR_2, struct svc_pool *VAR_3, int VAR_4)
{
 struct svc_rqst *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0, VAR_4);
 if (!VAR_5)
  return VAR_5;

 FUNC_0(VAR_1, &VAR_5->rq_flags);
 FUNC_3(&VAR_5->rq_lock);
 VAR_5->rq_server = VAR_2;
 VAR_5->rq_pool = VAR_3;

 VAR_5->rq_argp = FUNC_1(VAR_2->sv_xdrsize, VAR_0, VAR_4);
 if (!VAR_5->rq_argp)
  goto out_enomem;

 VAR_5->rq_resp = FUNC_1(VAR_2->sv_xdrsize, VAR_0, VAR_4);
 if (!VAR_5->rq_resp)
  goto out_enomem;

 if (!FUNC_4(VAR_5, VAR_2->sv_max_mesg, VAR_4))
  goto out_enomem;

 return VAR_5;
out_enomem:
 FUNC_5(VAR_5);
 return ((void*)0);
}
