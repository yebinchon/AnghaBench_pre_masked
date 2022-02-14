
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int timing_set; scalar_t__ timing_adjust; } ;
typedef TYPE_1__ obs_source_t ;



__attribute__((used)) static inline void FUNC_0(obs_source_t *VAR_0, uint64_t VAR_1,
          uint64_t VAR_2)
{
 VAR_0->timing_set = 1;
 VAR_0->timing_adjust = VAR_2 - VAR_1;
}
