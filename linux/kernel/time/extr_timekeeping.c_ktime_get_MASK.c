
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int base; } ;
struct timekeeper {TYPE_2__ tkr_mono; } ;
typedef int ktime_t ;
struct TYPE_3__ {int seq; struct timekeeper timekeeper; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

ktime_t FUNC_5(void)
{
 struct timekeeper *VAR_2 = &VAR_1.timekeeper;
 unsigned int VAR_3;
 ktime_t VAR_4;
 u64 VAR_5;

 FUNC_0(VAR_0);

 do {
  VAR_3 = FUNC_2(&VAR_1.seq);
  VAR_4 = VAR_2->tkr_mono.base;
  VAR_5 = FUNC_4(&VAR_2->tkr_mono);

 } while (FUNC_3(&VAR_1.seq, VAR_3));

 return FUNC_1(VAR_4, VAR_5);
}
