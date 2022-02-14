
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
struct dirty_throttle_control {unsigned long dirty; unsigned long wb_dirty; unsigned long wb_thresh; unsigned long wb_bg_thresh; unsigned long thresh; unsigned long bg_thresh; scalar_t__ pos_ratio; int avail; int member_0; } ;
struct bdi_writeback {int dirty_exceeded; unsigned long dirty_ratelimit; unsigned long dirty_sleep; int list_lock; scalar_t__ bw_time_stamp; struct backing_dev_info* bdi; } ;
struct backing_dev_info {int capabilities; } ;
struct TYPE_3__ {unsigned long dirty_paused_when; long nr_dirtied_pause; scalar_t__ nr_dirtied; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bdi_writeback*) ;
 unsigned long VAR_2 ;
 int FUNC_1 (struct bdi_writeback*,struct dirty_throttle_control*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dirty_throttle_control* const,struct dirty_throttle_control* const,unsigned long,int) ;
 TYPE_1__* VAR_9 ;
 unsigned long FUNC_4 (unsigned long,unsigned long) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (struct dirty_throttle_control* const) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;
 unsigned long FUNC_9 (int ) ;
 int FUNC_10 (long) ;
 unsigned long VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_11 (struct dirty_throttle_control* const,unsigned long,unsigned long) ;
 scalar_t__ FUNC_12 (struct dirty_throttle_control*) ;
 int FUNC_13 (struct bdi_writeback*) ;
 int FUNC_14 (struct bdi_writeback*,unsigned long*,unsigned long*,unsigned long*,unsigned long*) ;
 long FUNC_15 (long,long) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (struct bdi_writeback*,scalar_t__,unsigned long,scalar_t__,scalar_t__,scalar_t__,unsigned long,unsigned long,unsigned long,long,long,unsigned long) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (struct dirty_throttle_control* const) ;
 long FUNC_22 (struct bdi_writeback*,scalar_t__) ;
 long FUNC_23 (struct bdi_writeback*,long,unsigned long,unsigned long,int*) ;
 int FUNC_24 (struct dirty_throttle_control* const) ;
 int FUNC_25 (struct bdi_writeback*) ;
 scalar_t__ FUNC_26 () ;
 scalar_t__ FUNC_27 (struct bdi_writeback*) ;

__attribute__((used)) static void FUNC_28(struct bdi_writeback *VAR_12,
    unsigned long VAR_13)
{
 struct dirty_throttle_control VAR_14 = { FUNC_0(VAR_12) };
 struct dirty_throttle_control VAR_15 = { FUNC_1(VAR_12, &VAR_14) };
 struct dirty_throttle_control * const VAR_16 = &VAR_14;
 struct dirty_throttle_control * const VAR_17 = FUNC_12(&VAR_15) ?
           &VAR_15 : ((void*)0);
 struct dirty_throttle_control *VAR_18;
 unsigned long VAR_19;
 long VAR_20;
 long VAR_21;
 long VAR_22;
 long VAR_23;
 int VAR_24;
 bool VAR_25 = 0;
 unsigned long VAR_26;
 unsigned long VAR_27;
 struct backing_dev_info *VAR_28 = VAR_12->bdi;
 bool VAR_29 = VAR_28->capabilities & VAR_1;
 unsigned long VAR_30 = VAR_10;

 for (;;) {
  unsigned long VAR_31 = VAR_10;
  unsigned long VAR_32, VAR_33, VAR_34;
  unsigned long VAR_35 = 0;
  unsigned long VAR_36 = 0;
  unsigned long VAR_37 = 0;







  VAR_19 = FUNC_9(VAR_3) +
     FUNC_9(VAR_4);
  VAR_16->avail = FUNC_8();
  VAR_16->dirty = VAR_19 + FUNC_9(VAR_5);

  FUNC_6(VAR_16);

  if (FUNC_20(VAR_29)) {
   FUNC_21(VAR_16);

   VAR_32 = VAR_16->wb_dirty;
   VAR_33 = VAR_16->wb_thresh;
   VAR_34 = VAR_16->wb_bg_thresh;
  } else {
   VAR_32 = VAR_16->dirty;
   VAR_33 = VAR_16->thresh;
   VAR_34 = VAR_16->bg_thresh;
  }

  if (VAR_17) {
   unsigned long VAR_38, VAR_39, VAR_40;





   FUNC_14(VAR_12, &VAR_38, &VAR_39,
         &VAR_17->dirty, &VAR_40);
   VAR_17->dirty += VAR_40;
   FUNC_11(VAR_17, VAR_38, VAR_39);

   FUNC_6(VAR_17);

   if (FUNC_20(VAR_29)) {
    FUNC_21(VAR_17);
    VAR_35 = VAR_17->wb_dirty;
    VAR_36 = VAR_17->wb_thresh;
    VAR_37 = VAR_17->wb_bg_thresh;
   } else {
    VAR_35 = VAR_17->dirty;
    VAR_36 = VAR_17->thresh;
    VAR_37 = VAR_17->bg_thresh;
   }
  }
  if (VAR_32 <= FUNC_4(VAR_33, VAR_34) &&
      (!VAR_17 ||
       VAR_35 <= FUNC_4(VAR_36, VAR_37))) {
   unsigned long VAR_41 = FUNC_5(VAR_32, VAR_33);
   unsigned long VAR_42 = VAR_8;

   VAR_9->dirty_paused_when = VAR_31;
   VAR_9->nr_dirtied = 0;
   if (VAR_17)
    VAR_42 = FUNC_5(VAR_35, VAR_36);
   VAR_9->nr_dirtied_pause = FUNC_15(VAR_41, VAR_42);
   break;
  }

  if (FUNC_20(!FUNC_27(VAR_12)))
   FUNC_25(VAR_12);

  FUNC_13(VAR_12);





  if (!VAR_29)
   FUNC_21(VAR_16);

  VAR_25 = (VAR_16->wb_dirty > VAR_16->wb_thresh) &&
   ((VAR_16->dirty > VAR_16->thresh) || VAR_29);

  FUNC_24(VAR_16);
  VAR_18 = VAR_16;

  if (VAR_17) {






   if (!VAR_29)
    FUNC_21(VAR_17);

   VAR_25 |= (VAR_17->wb_dirty > VAR_17->wb_thresh) &&
    ((VAR_17->dirty > VAR_17->thresh) || VAR_29);

   FUNC_24(VAR_17);
   if (VAR_17->pos_ratio < VAR_16->pos_ratio)
    VAR_18 = VAR_17;
  }

  if (VAR_25 && !VAR_12->dirty_exceeded)
   VAR_12->dirty_exceeded = 1;

  if (FUNC_18(VAR_12->bw_time_stamp +
        VAR_0)) {
   FUNC_16(&VAR_12->list_lock);
   FUNC_3(VAR_16, VAR_17, VAR_30, 1);
   FUNC_17(&VAR_12->list_lock);
  }


  VAR_27 = VAR_12->dirty_ratelimit;
  VAR_26 = ((u64)VAR_27 * VAR_18->pos_ratio) >>
       VAR_6;
  VAR_22 = FUNC_22(VAR_12, VAR_18->wb_dirty);
  VAR_23 = FUNC_23(VAR_12, VAR_22,
      VAR_26, VAR_27,
      &VAR_24);

  if (FUNC_20(VAR_26 == 0)) {
   VAR_20 = VAR_22;
   VAR_21 = VAR_22;
   goto pause;
  }
  VAR_20 = VAR_2 * VAR_13 / VAR_26;
  VAR_21 = VAR_20;
  if (VAR_9->dirty_paused_when)
   VAR_21 -= VAR_31 - VAR_9->dirty_paused_when;







  if (VAR_21 < VAR_23) {
   FUNC_19(VAR_12,
        VAR_18->thresh,
        VAR_18->bg_thresh,
        VAR_18->dirty,
        VAR_18->wb_thresh,
        VAR_18->wb_dirty,
        VAR_27,
        VAR_26,
        VAR_13,
        VAR_20,
        FUNC_15(VAR_21, 0L),
        VAR_30);
   if (VAR_21 < -VAR_2) {
    VAR_9->dirty_paused_when = VAR_31;
    VAR_9->nr_dirtied = 0;
   } else if (VAR_20) {
    VAR_9->dirty_paused_when += VAR_20;
    VAR_9->nr_dirtied = 0;
   } else if (VAR_9->nr_dirtied_pause <= VAR_13)
    VAR_9->nr_dirtied_pause += VAR_13;
   break;
  }
  if (FUNC_20(VAR_21 > VAR_22)) {

   VAR_31 += FUNC_15(VAR_21 - VAR_22, VAR_22);
   VAR_21 = VAR_22;
  }

pause:
  FUNC_19(VAR_12,
       VAR_18->thresh,
       VAR_18->bg_thresh,
       VAR_18->dirty,
       VAR_18->wb_thresh,
       VAR_18->wb_dirty,
       VAR_27,
       VAR_26,
       VAR_13,
       VAR_20,
       VAR_21,
       VAR_30);
  FUNC_2(VAR_7);
  VAR_12->dirty_sleep = VAR_31;
  FUNC_10(VAR_21);

  VAR_9->dirty_paused_when = VAR_31 + VAR_21;
  VAR_9->nr_dirtied = 0;
  VAR_9->nr_dirtied_pause = VAR_24;





  if (VAR_26)
   break;
  if (VAR_18->wb_dirty <= FUNC_26())
   break;

  if (FUNC_7(VAR_9))
   break;
 }

 if (!VAR_25 && VAR_12->dirty_exceeded)
  VAR_12->dirty_exceeded = 0;

 if (FUNC_27(VAR_12))
  return;
 if (VAR_11)
  return;

 if (VAR_19 > VAR_16->bg_thresh)
  FUNC_25(VAR_12);
}
