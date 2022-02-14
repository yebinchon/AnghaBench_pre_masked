
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_version {size_t vs_nproc; int vs_dispatch; int * vs_count; struct svc_procedure* vs_proc; scalar_t__ vs_need_cong_ctrl; } ;
struct svc_rqst {size_t rq_vers; size_t rq_proc; int rq_resp; int rq_argp; struct svc_procedure const* rq_procinfo; TYPE_1__* rq_xprt; } ;
struct svc_program {size_t pg_nvers; int pg_hivers; int pg_lovers; struct svc_version** pg_vers; } ;
struct TYPE_4__ {int hivers; int lovers; } ;
struct svc_process_info {TYPE_2__ mismatch; int dispatch; } ;
struct svc_procedure {int pc_ressize; int pc_argsize; } ;
typedef int __be32 ;
struct TYPE_3__ {int xpt_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;

__be32
FUNC_2(struct svc_rqst *VAR_4,
  const struct svc_program *VAR_5,
  struct svc_process_info *VAR_6)
{
 const struct svc_version *VAR_7 = ((void*)0);
 const struct svc_procedure *VAR_8 = ((void*)0);

 if (VAR_4->rq_vers >= VAR_5->pg_nvers )
  goto err_bad_vers;
 VAR_7 = VAR_5->pg_vers[VAR_4->rq_vers];
 if (!VAR_7)
  goto err_bad_vers;
 if (VAR_7->vs_need_cong_ctrl && VAR_4->rq_xprt &&
     !FUNC_1(VAR_0, &VAR_4->rq_xprt->xpt_flags))
  goto err_bad_vers;

 if (VAR_4->rq_proc >= VAR_7->vs_nproc)
  goto err_bad_proc;
 VAR_4->rq_procinfo = VAR_8 = &VAR_7->vs_proc[VAR_4->rq_proc];
 if (!VAR_8)
  goto err_bad_proc;


 FUNC_0(VAR_4->rq_argp, 0, VAR_8->pc_argsize);
 FUNC_0(VAR_4->rq_resp, 0, VAR_8->pc_ressize);


 VAR_7->vs_count[VAR_4->rq_proc]++;

 VAR_6->dispatch = VAR_7->vs_dispatch;
 return VAR_3;
err_bad_vers:
 VAR_6->mismatch.lovers = VAR_5->pg_lovers;
 VAR_6->mismatch.hivers = VAR_5->pg_hivers;
 return VAR_2;
err_bad_proc:
 return VAR_1;
}
