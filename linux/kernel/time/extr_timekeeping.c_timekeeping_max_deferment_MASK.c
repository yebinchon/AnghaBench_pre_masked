
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {TYPE_1__* clock; } ;
struct timekeeper {TYPE_2__ tkr_mono; } ;
struct TYPE_6__ {int seq; struct timekeeper timekeeper; } ;
struct TYPE_4__ {int max_idle_ns; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 TYPE_3__ VAR_0 ;

u64 FUNC_2(void)
{
 struct timekeeper *VAR_1 = &VAR_0.timekeeper;
 unsigned int VAR_2;
 u64 VAR_3;

 do {
  VAR_2 = FUNC_0(&VAR_0.seq);

  VAR_3 = VAR_1->tkr_mono.clock->max_idle_ns;

 } while (FUNC_1(&VAR_0.seq, VAR_2));

 return VAR_3;
}
