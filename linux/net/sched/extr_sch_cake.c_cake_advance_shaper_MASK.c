
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct cake_tin_data {int tin_rate_ns; int tin_rate_shft; void* time_next_packet; } ;
struct cake_sched_data {int rate_ns; int rate_shft; void* time_next_packet; void* failsafe_next_packet; } ;
typedef void* ktime_t ;
struct TYPE_2__ {int adjusted_len; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 void* FUNC_1 (void*,int) ;
 scalar_t__ FUNC_2 (void*,void*) ;

__attribute__((used)) static int FUNC_3(struct cake_sched_data *VAR_0,
          struct cake_tin_data *VAR_1,
          struct sk_buff *VAR_2,
          ktime_t VAR_3, bool VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_2)->adjusted_len;




 if (VAR_0->rate_ns) {
  u64 VAR_6 = (VAR_5 * VAR_1->tin_rate_ns) >> VAR_1->tin_rate_shft;
  u64 VAR_7 = (VAR_5 * VAR_0->rate_ns) >> VAR_0->rate_shft;
  u64 VAR_8 = VAR_7 + (VAR_7 >> 1);

  if (FUNC_2(VAR_1->time_next_packet, VAR_3))
   VAR_1->time_next_packet = FUNC_1(VAR_1->time_next_packet,
          VAR_6);

  else if (FUNC_2(VAR_1->time_next_packet,
          FUNC_1(VAR_3, VAR_6)))
   VAR_1->time_next_packet = FUNC_1(VAR_3, VAR_6);

  VAR_0->time_next_packet = FUNC_1(VAR_0->time_next_packet,
         VAR_7);
  if (!VAR_4)
   VAR_0->failsafe_next_packet = FUNC_1(VAR_0->failsafe_next_packet,

          VAR_8);
 }
 return VAR_5;
}
