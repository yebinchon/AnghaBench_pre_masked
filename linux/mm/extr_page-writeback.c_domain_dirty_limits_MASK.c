
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int flags; } ;
struct dirty_throttle_control {unsigned long avail; unsigned long thresh; unsigned long bg_thresh; } ;
struct TYPE_2__ {int dirty_limit; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 struct dirty_throttle_control* FUNC_1 (struct dirty_throttle_control*) ;
 unsigned long FUNC_2 (unsigned long,int) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 unsigned long VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5(struct dirty_throttle_control *VAR_8)
{
 const unsigned long VAR_9 = VAR_8->avail;
 struct dirty_throttle_control *VAR_10 = FUNC_1(VAR_8);
 unsigned long VAR_11 = VAR_6;
 unsigned long VAR_12 = VAR_3;

 unsigned long VAR_13 = (VAR_7 * VAR_0) / 100;
 unsigned long VAR_14 = (VAR_4 * VAR_0) / 100;
 unsigned long VAR_15;
 unsigned long VAR_16;
 struct task_struct *VAR_17;


 if (VAR_10) {
  unsigned long VAR_18 = VAR_10->avail;
  if (VAR_11)
   VAR_13 = FUNC_2(FUNC_0(VAR_11, VAR_18),
        VAR_0);
  if (VAR_12)
   VAR_14 = FUNC_2(FUNC_0(VAR_12, VAR_18),
           VAR_0);
  VAR_11 = VAR_12 = 0;
 }

 if (VAR_11)
  VAR_15 = FUNC_0(VAR_11, VAR_0);
 else
  VAR_15 = (VAR_13 * VAR_9) / VAR_0;

 if (VAR_12)
  VAR_16 = FUNC_0(VAR_12, VAR_0);
 else
  VAR_16 = (VAR_14 * VAR_9) / VAR_0;

 if (VAR_16 >= VAR_15)
  VAR_16 = VAR_15 / 2;
 VAR_17 = VAR_2;
 if (VAR_17->flags & VAR_1 || FUNC_3(VAR_17)) {
  VAR_16 += VAR_16 / 4 + VAR_5.dirty_limit / 32;
  VAR_15 += VAR_15 / 4 + VAR_5.dirty_limit / 32;
 }
 VAR_8->thresh = VAR_15;
 VAR_8->bg_thresh = VAR_16;


 if (!VAR_10)
  FUNC_4(VAR_16, VAR_15);
}
