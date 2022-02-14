
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct timespec64 {scalar_t__ tv_nsec; int tv_sec; } ;
struct timekeeper {int tkr_mono; int xtime_sec; } ;
struct TYPE_2__ {int seq; struct timekeeper timekeeper; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (struct timespec64*,int ) ;
 TYPE_1__ VAR_1 ;

void FUNC_5(struct timespec64 *VAR_2)
{
 struct timekeeper *VAR_3 = &VAR_1.timekeeper;
 unsigned int VAR_4;
 u64 VAR_5;

 FUNC_0(VAR_0);

 do {
  VAR_4 = FUNC_1(&VAR_1.seq);

  VAR_2->tv_sec = VAR_3->xtime_sec;
  VAR_5 = FUNC_3(&VAR_3->tkr_mono);

 } while (FUNC_2(&VAR_1.seq, VAR_4));

 VAR_2->tv_nsec = 0;
 FUNC_4(VAR_2, VAR_5);
}
