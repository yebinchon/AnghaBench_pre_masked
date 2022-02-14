
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_rq {scalar_t__ rt_nr_running; scalar_t__ rt_queued; } ;



__attribute__((used)) static inline bool FUNC_0(struct rt_rq *VAR_0)
{
 return VAR_0->rt_queued && VAR_0->rt_nr_running;
}
