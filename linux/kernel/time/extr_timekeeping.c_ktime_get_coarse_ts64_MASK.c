
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct timekeeper {struct timespec64 wall_to_monotonic; } ;
struct TYPE_2__ {int seq; struct timekeeper timekeeper; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (struct timespec64*,scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_0 ;
 struct timespec64 FUNC_3 (struct timekeeper*) ;

void FUNC_4(struct timespec64 *VAR_1)
{
 struct timekeeper *VAR_2 = &VAR_0.timekeeper;
 struct timespec64 VAR_3, VAR_4;
 unsigned int VAR_5;

 do {
  VAR_5 = FUNC_0(&VAR_0.seq);

  VAR_3 = FUNC_3(VAR_2);
  VAR_4 = VAR_2->wall_to_monotonic;
 } while (FUNC_1(&VAR_0.seq, VAR_5));

 FUNC_2(VAR_1, VAR_3.tv_sec + VAR_4.tv_sec,
    VAR_3.tv_nsec + VAR_4.tv_nsec);
}
