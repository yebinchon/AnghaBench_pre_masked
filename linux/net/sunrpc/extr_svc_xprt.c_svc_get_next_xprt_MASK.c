
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_xprt {int dummy; } ;
struct TYPE_4__ {int thread_wait; } ;
struct svc_rqst {struct svc_xprt* rq_xprt; TYPE_2__ rq_chandle; int rq_flags; struct svc_pool* rq_pool; } ;
struct TYPE_3__ {int threads_timedout; } ;
struct svc_pool {int sp_flags; TYPE_1__ sp_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct svc_xprt* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct svc_xprt*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct svc_rqst*) ;
 long FUNC_8 (long) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 void* FUNC_14 (struct svc_pool*) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (struct svc_rqst*) ;
 int FUNC_17 () ;

__attribute__((used)) static struct svc_xprt *FUNC_18(struct svc_rqst *VAR_7, long VAR_8)
{
 struct svc_pool *VAR_9 = VAR_7->rq_pool;
 long VAR_10 = 0;


 FUNC_1(VAR_7->rq_xprt);

 VAR_7->rq_xprt = FUNC_14(VAR_9);
 if (VAR_7->rq_xprt)
  goto out_found;





 FUNC_10(VAR_5);
 FUNC_13();
 FUNC_4(VAR_4, &VAR_9->sp_flags);
 FUNC_4(VAR_3, &VAR_7->rq_flags);
 FUNC_12();

 if (FUNC_6(FUNC_7(VAR_7)))
  VAR_10 = FUNC_8(VAR_8);
 else
  FUNC_2(VAR_6);

 FUNC_17();

 FUNC_9(VAR_3, &VAR_7->rq_flags);
 FUNC_12();
 VAR_7->rq_xprt = FUNC_14(VAR_9);
 if (VAR_7->rq_xprt)
  goto out_found;

 if (!VAR_10)
  FUNC_3(&VAR_9->sp_stats.threads_timedout);

 if (FUNC_11() || FUNC_5())
  return FUNC_0(-VAR_1);
 return FUNC_0(-VAR_0);
out_found:



 if (!FUNC_15(VAR_4, &VAR_9->sp_flags))
  VAR_7->rq_chandle.thread_wait = 5*VAR_2;
 else
  VAR_7->rq_chandle.thread_wait = 1*VAR_2;
 FUNC_16(VAR_7);
 return VAR_7->rq_xprt;
}
