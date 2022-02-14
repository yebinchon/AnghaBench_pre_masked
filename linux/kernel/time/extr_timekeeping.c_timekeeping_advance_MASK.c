
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int mask; int cycle_last; } ;
struct timekeeper {scalar_t__ cycle_interval; TYPE_2__ tkr_mono; } ;
typedef enum timekeeping_adv_mode { ____Placeholder_timekeeping_adv_mode } timekeeping_adv_mode ;
struct TYPE_3__ {int seq; struct timekeeper timekeeper; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct timekeeper*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct timekeeper*,scalar_t__,int,unsigned int*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct timekeeper*,struct timekeeper*,int) ;
 int FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 struct timekeeper VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (struct timekeeper*,scalar_t__) ;
 int FUNC_12 (struct timekeeper*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_13 (struct timekeeper*,unsigned int) ;
 int FUNC_14 (TYPE_2__*) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void FUNC_18(enum timekeeping_adv_mode VAR_5)
{
 struct timekeeper *VAR_6 = &VAR_4.timekeeper;
 struct timekeeper *VAR_7 = &VAR_1;
 u64 VAR_8;
 int VAR_9 = 0, VAR_10;
 unsigned int VAR_11 = 0;
 unsigned long VAR_12;

 FUNC_9(&VAR_2, VAR_12);


 if (FUNC_15(VAR_3))
  goto out;







 VAR_8 = FUNC_2(FUNC_14(&VAR_7->tkr_mono),
       VAR_7->tkr_mono.cycle_last, VAR_7->tkr_mono.mask);


 if (VAR_8 < VAR_6->cycle_interval && VAR_5 == VAR_0)
  goto out;



 FUNC_12(VAR_7, VAR_8);
 VAR_9 = FUNC_3(VAR_8) - FUNC_3(VAR_7->cycle_interval);
 VAR_9 = FUNC_5(0, VAR_9);

 VAR_10 = (64 - (FUNC_3(FUNC_8())+1)) - 1;
 VAR_9 = FUNC_7(VAR_9, VAR_10);
 while (VAR_8 >= VAR_7->cycle_interval) {
  VAR_8 = FUNC_4(VAR_7, VAR_8, VAR_9,
       &VAR_11);
  if (VAR_8 < VAR_7->cycle_interval<<VAR_9)
   VAR_9--;
 }


 FUNC_11(VAR_7, VAR_8);





 VAR_11 |= FUNC_0(VAR_7);

 FUNC_16(&VAR_4.seq);
 FUNC_13(VAR_7, VAR_11);
 FUNC_6(VAR_6, VAR_7, sizeof(*VAR_7));

 FUNC_17(&VAR_4.seq);
out:
 FUNC_10(&VAR_2, VAR_12);
 if (VAR_11)

  FUNC_1();
}
