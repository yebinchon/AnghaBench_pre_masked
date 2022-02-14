
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* clock; } ;
struct timekeeper {TYPE_2__ tkr_mono; } ;
struct TYPE_6__ {int seq; struct timekeeper timekeeper; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 TYPE_3__ VAR_1 ;

int FUNC_2(void)
{
 struct timekeeper *VAR_2 = &VAR_1.timekeeper;
 unsigned int VAR_3;
 int VAR_4;

 do {
  VAR_3 = FUNC_0(&VAR_1.seq);

  VAR_4 = VAR_2->tkr_mono.clock->flags & VAR_0;

 } while (FUNC_1(&VAR_1.seq, VAR_3));

 return VAR_4;
}
