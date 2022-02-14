
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct task_struct* rq_task; } ;
struct svc_serv {int sv_nrthreads; int sv_nrpools; TYPE_1__* sv_ops; int sv_name; } ;
struct svc_rqst {struct svc_rqst* rq_task; } ;
struct svc_pool {int sp_id; } ;
struct TYPE_2__ {int svo_module; int svo_function; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int ) ;
 struct svc_pool* FUNC_3 (struct svc_serv*,struct svc_pool*,unsigned int*) ;
 struct task_struct* FUNC_4 (int ,struct task_struct*,int,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct task_struct*,int ) ;
 struct task_struct* FUNC_9 (struct svc_serv*,struct svc_pool*,int) ;
 int FUNC_10 (struct svc_serv*) ;
 int FUNC_11 (struct task_struct*) ;

__attribute__((used)) static int
FUNC_12(struct svc_serv *VAR_0, struct svc_pool *VAR_1, int VAR_2)
{
 struct svc_rqst *VAR_3;
 struct task_struct *VAR_4;
 struct svc_pool *VAR_5;
 unsigned int VAR_6 = VAR_0->sv_nrthreads-1;
 int VAR_7;

 do {
  VAR_2--;
  VAR_5 = FUNC_3(VAR_0, VAR_1, &VAR_6);

  VAR_7 = FUNC_7(VAR_5->sp_id);
  VAR_3 = FUNC_9(VAR_0, VAR_5, VAR_7);
  if (FUNC_0(VAR_3))
   return FUNC_1(VAR_3);

  FUNC_2(VAR_0->sv_ops->svo_module);
  VAR_4 = FUNC_4(VAR_0->sv_ops->svo_function, VAR_3,
           VAR_7, "%s", VAR_0->sv_name);
  if (FUNC_0(VAR_4)) {
   FUNC_5(VAR_0->sv_ops->svo_module);
   FUNC_6(VAR_3);
   return FUNC_1(VAR_4);
  }

  VAR_3->rq_task = VAR_4;
  if (VAR_0->sv_nrpools > 1)
   FUNC_8(VAR_4, VAR_5->sp_id);

  FUNC_10(VAR_0);
  FUNC_11(VAR_4);
 } while (VAR_2 > 0);

 return 0;
}
