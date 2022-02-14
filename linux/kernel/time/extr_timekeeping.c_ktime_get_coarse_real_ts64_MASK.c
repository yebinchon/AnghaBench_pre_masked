
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int dummy; } ;
struct timekeeper {int dummy; } ;
struct TYPE_2__ {int seq; struct timekeeper timekeeper; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 TYPE_1__ VAR_0 ;
 struct timespec64 FUNC_2 (struct timekeeper*) ;

void FUNC_3(struct timespec64 *VAR_1)
{
 struct timekeeper *VAR_2 = &VAR_0.timekeeper;
 unsigned int VAR_3;

 do {
  VAR_3 = FUNC_0(&VAR_0.seq);

  *VAR_1 = FUNC_2(VAR_2);
 } while (FUNC_1(&VAR_0.seq, VAR_3));
}
