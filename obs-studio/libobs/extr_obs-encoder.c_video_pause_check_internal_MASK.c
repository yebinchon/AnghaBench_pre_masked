
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pause_data {scalar_t__ ts_start; scalar_t__ ts_end; scalar_t__ last_video_ts; } ;



__attribute__((used)) static inline bool FUNC_0(struct pause_data *VAR_0,
           uint64_t VAR_1)
{
 VAR_0->last_video_ts = VAR_1;
 if (!VAR_0->ts_start) {
  return 0;
 }

 if (VAR_1 == VAR_0->ts_end) {
  VAR_0->ts_start = 0;
  VAR_0->ts_end = 0;

 } else if (VAR_1 >= VAR_0->ts_start) {
  return 1;
 }

 return 0;
}
