
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct thread_trace {scalar_t__ entry_time; int syscall_stats; } ;
struct stats {int dummy; } ;
struct perf_sample {scalar_t__ time; } ;
struct int_node {struct stats* priv; } ;


 int FUNC_0 (struct stats*) ;
 struct int_node* FUNC_1 (int ,int) ;
 struct stats* FUNC_2 (int) ;
 int FUNC_3 (struct stats*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct thread_trace *VAR_0,
     int VAR_1, struct perf_sample *VAR_2)
{
 struct int_node *VAR_3;
 struct stats *VAR_4;
 u64 VAR_5 = 0;

 VAR_3 = FUNC_1(VAR_0->syscall_stats, VAR_1);
 if (VAR_3 == ((void*)0))
  return;

 VAR_4 = VAR_3->priv;
 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_2(sizeof(struct stats));
  if (VAR_4 == ((void*)0))
   return;
  FUNC_0(VAR_4);
  VAR_3->priv = VAR_4;
 }

 if (VAR_0->entry_time && VAR_2->time > VAR_0->entry_time)
  VAR_5 = VAR_2->time - VAR_0->entry_time;

 FUNC_3(VAR_4, VAR_5);
}
