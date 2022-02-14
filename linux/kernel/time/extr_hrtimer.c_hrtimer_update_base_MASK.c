
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hrtimer_cpu_base {TYPE_1__* clock_base; int clock_was_set_seq; } ;
typedef void* ktime_t ;
struct TYPE_2__ {void* offset; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 void* FUNC_0 (int *,void**,void**,void**) ;

__attribute__((used)) static inline ktime_t FUNC_1(struct hrtimer_cpu_base *VAR_6)
{
 ktime_t *VAR_7 = &VAR_6->clock_base[VAR_2].offset;
 ktime_t *VAR_8 = &VAR_6->clock_base[VAR_0].offset;
 ktime_t *VAR_9 = &VAR_6->clock_base[VAR_4].offset;

 ktime_t VAR_10 = FUNC_0(&VAR_6->clock_was_set_seq,
         VAR_7, VAR_8, VAR_9);

 VAR_6->clock_base[VAR_3].offset = *VAR_7;
 VAR_6->clock_base[VAR_1].offset = *VAR_8;
 VAR_6->clock_base[VAR_5].offset = *VAR_9;

 return VAR_10;
}
