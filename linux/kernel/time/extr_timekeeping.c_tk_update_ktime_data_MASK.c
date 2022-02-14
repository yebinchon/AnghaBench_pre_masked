
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_5__ {void* base; } ;
struct TYPE_4__ {int xtime_nsec; int shift; void* base; } ;
struct TYPE_6__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct timekeeper {int ktime_sec; int raw_sec; TYPE_2__ tkr_raw; TYPE_1__ tkr_mono; TYPE_3__ wall_to_monotonic; scalar_t__ xtime_sec; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct timekeeper *VAR_1)
{
 u64 VAR_2;
 u32 VAR_3;
 VAR_2 = (u64)(VAR_1->xtime_sec + VAR_1->wall_to_monotonic.tv_sec);
 VAR_3 = (u32) VAR_1->wall_to_monotonic.tv_nsec;
 VAR_1->tkr_mono.base = FUNC_0(VAR_2 * VAR_0 + VAR_3);






 VAR_3 += (u32)(VAR_1->tkr_mono.xtime_nsec >> VAR_1->tkr_mono.shift);
 if (VAR_3 >= VAR_0)
  VAR_2++;
 VAR_1->ktime_sec = VAR_2;


 VAR_1->tkr_raw.base = FUNC_0(VAR_1->raw_sec * VAR_0);
}
