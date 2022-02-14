
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct bictcp {unsigned int last_cwnd; void* last_time; scalar_t__ epoch_start; unsigned int cnt; unsigned int last_max_cwnd; int delayed_ack; } ;
typedef int s32 ;
typedef unsigned int __u32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static inline void FUNC_0(struct bictcp *VAR_7, u32 VAR_8)
{
 if (VAR_7->last_cwnd == VAR_8 &&
     (s32)(VAR_6 - VAR_7->last_time) <= VAR_2 / 32)
  return;

 VAR_7->last_cwnd = VAR_8;
 VAR_7->last_time = VAR_6;

 if (VAR_7->epoch_start == 0)
  VAR_7->epoch_start = VAR_6;


 if (VAR_8 <= VAR_3) {
  VAR_7->cnt = VAR_8;
  return;
 }


 if (VAR_8 < VAR_7->last_max_cwnd) {
  __u32 VAR_9 = (VAR_7->last_max_cwnd - VAR_8)
   / VAR_1;

  if (VAR_9 > VAR_4)

   VAR_7->cnt = VAR_8 / VAR_4;
  else if (VAR_9 <= 1U)

   VAR_7->cnt = (VAR_8 * VAR_5) / VAR_1;
  else

   VAR_7->cnt = VAR_8 / VAR_9;
 } else {

  if (VAR_8 < VAR_7->last_max_cwnd + VAR_1)

   VAR_7->cnt = (VAR_8 * VAR_5) / VAR_1;
  else if (VAR_8 < VAR_7->last_max_cwnd + VAR_4*(VAR_1-1))

   VAR_7->cnt = (VAR_8 * (VAR_1-1))
    / (VAR_8 - VAR_7->last_max_cwnd);
  else

   VAR_7->cnt = VAR_8 / VAR_4;
 }


 if (VAR_7->last_max_cwnd == 0) {
  if (VAR_7->cnt > 20)
   VAR_7->cnt = 20;
 }

 VAR_7->cnt = (VAR_7->cnt << VAR_0) / VAR_7->delayed_ack;
 if (VAR_7->cnt == 0)
  VAR_7->cnt = 1;
}
