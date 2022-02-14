
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
typedef enum tk_offsets { ____Placeholder_tk_offsets } tk_offsets ;
struct TYPE_3__ {int seq; struct timekeeper timekeeper; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int ** VAR_0 ;
 unsigned int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

ktime_t FUNC_6(enum tk_offsets VAR_3)
{
 struct timekeeper *VAR_4 = &VAR_2.timekeeper;
 unsigned int VAR_5;
 ktime_t VAR_6, *VAR_7 = VAR_0[VAR_3];
 u64 VAR_8;

 FUNC_0(VAR_1);

 do {
  VAR_5 = FUNC_3(&VAR_2.seq);
  VAR_6 = FUNC_1(VAR_4->tkr_mono.base, *VAR_7);
  VAR_8 = FUNC_5(&VAR_4->tkr_mono);

 } while (FUNC_4(&VAR_2.seq, VAR_5));

 return FUNC_2(VAR_6, VAR_8);

}
