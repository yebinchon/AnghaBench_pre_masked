
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_timer {int cur_tick; } ;
typedef int abstime_t ;



__attribute__((used)) static inline abstime_t
FUNC_0(struct seq_oss_timer *VAR_0)
{
 return VAR_0->cur_tick;
}
