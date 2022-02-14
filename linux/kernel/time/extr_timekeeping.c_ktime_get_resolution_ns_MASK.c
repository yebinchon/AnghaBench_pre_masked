
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int mult; int shift; } ;
struct timekeeper {TYPE_1__ tkr_mono; } ;
struct TYPE_4__ {int seq; struct timekeeper timekeeper; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

u32 FUNC_3(void)
{
 struct timekeeper *VAR_2 = &VAR_1.timekeeper;
 unsigned int VAR_3;
 u32 VAR_4;

 FUNC_0(VAR_0);

 do {
  VAR_3 = FUNC_1(&VAR_1.seq);
  VAR_4 = VAR_2->tkr_mono.mult >> VAR_2->tkr_mono.shift;
 } while (FUNC_2(&VAR_1.seq, VAR_3));

 return VAR_4;
}
