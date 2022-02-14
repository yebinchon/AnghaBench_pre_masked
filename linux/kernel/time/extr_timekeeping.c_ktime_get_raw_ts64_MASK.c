
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct timespec64 {scalar_t__ tv_nsec; int tv_sec; } ;
struct timekeeper {int tkr_raw; int raw_sec; } ;
struct TYPE_2__ {int seq; struct timekeeper timekeeper; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct timespec64*,int ) ;
 TYPE_1__ VAR_0 ;

void FUNC_4(struct timespec64 *VAR_1)
{
 struct timekeeper *VAR_2 = &VAR_0.timekeeper;
 unsigned int VAR_3;
 u64 VAR_4;

 do {
  VAR_3 = FUNC_0(&VAR_0.seq);
  VAR_1->tv_sec = VAR_2->raw_sec;
  VAR_4 = FUNC_2(&VAR_2->tkr_raw);

 } while (FUNC_1(&VAR_0.seq, VAR_3));

 VAR_1->tv_nsec = 0;
 FUNC_3(VAR_1, VAR_4);
}
