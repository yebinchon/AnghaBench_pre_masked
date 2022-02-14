
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq {long nr_running; long calc_load_active; scalar_t__ nr_uninterruptible; } ;



long FUNC_0(struct rq *VAR_0, long VAR_1)
{
 long VAR_2, VAR_3 = 0;

 VAR_2 = VAR_0->nr_running - VAR_1;
 VAR_2 += (long)VAR_0->nr_uninterruptible;

 if (VAR_2 != VAR_0->calc_load_active) {
  VAR_3 = VAR_2 - VAR_0->calc_load_active;
  VAR_0->calc_load_active = VAR_2;
 }

 return VAR_3;
}
