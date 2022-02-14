
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int base; } ;
struct timekeeper {TYPE_2__ tkr_raw; } ;
typedef int ktime_t ;
struct TYPE_3__ {int seq; struct timekeeper timekeeper; } ;


 int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__ VAR_0 ;

ktime_t FUNC_4(void)
{
 struct timekeeper *VAR_1 = &VAR_0.timekeeper;
 unsigned int VAR_2;
 ktime_t VAR_3;
 u64 VAR_4;

 do {
  VAR_2 = FUNC_1(&VAR_0.seq);
  VAR_3 = VAR_1->tkr_raw.base;
  VAR_4 = FUNC_3(&VAR_1->tkr_raw);

 } while (FUNC_2(&VAR_0.seq, VAR_2));

 return FUNC_0(VAR_3, VAR_4);
}
