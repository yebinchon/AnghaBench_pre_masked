
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ last_frame_ts; } ;
typedef TYPE_1__ obs_source_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(const obs_source_t *VAR_1, uint64_t VAR_2)
{
 if (VAR_2 < VAR_1->last_frame_ts)
  return ((VAR_1->last_frame_ts - VAR_2) > VAR_0);
 else
  return ((VAR_2 - VAR_1->last_frame_ts) > VAR_0);
}
