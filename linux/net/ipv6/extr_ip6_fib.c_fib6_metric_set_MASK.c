
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fib6_info {struct dst_metrics* fib6_metrics; } ;
struct dst_metrics {int * metrics; int refcnt; } ;


 int VAR_0 ;
 struct dst_metrics VAR_1 ;
 struct dst_metrics* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int) ;

void FUNC_2(struct fib6_info *VAR_2, int VAR_3, u32 VAR_4)
{
 if (!VAR_2)
  return;

 if (VAR_2->fib6_metrics == &VAR_1) {
  struct dst_metrics *VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_0);

  if (!VAR_5)
   return;

  FUNC_1(&VAR_5->refcnt, 1);
  VAR_2->fib6_metrics = VAR_5;
 }

 VAR_2->fib6_metrics->metrics[VAR_3 - 1] = VAR_4;
}
