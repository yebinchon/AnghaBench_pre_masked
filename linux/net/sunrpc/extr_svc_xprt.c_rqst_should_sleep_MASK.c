
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct svc_pool* rq_pool; } ;
struct svc_pool {int sp_sockets; int sp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static bool
FUNC_5(struct svc_rqst *VAR_2)
{
 struct svc_pool *VAR_3 = VAR_2->rq_pool;


 if (FUNC_4(VAR_0, &VAR_3->sp_flags))
  return 0;


 if (!FUNC_2(&VAR_3->sp_sockets))
  return 0;


 if (FUNC_3() || FUNC_1())
  return 0;


 if (FUNC_0(VAR_1))
  return 0;

 return 1;
}
