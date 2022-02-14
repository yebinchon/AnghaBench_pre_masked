
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct dirty_throttle_control {unsigned long dirty; unsigned long pos_ratio; unsigned long wb_dirty; int wb_thresh; int wb_bg_thresh; int thresh; int bg_thresh; struct bdi_writeback* wb; } ;
struct bdi_writeback {unsigned long avg_write_bandwidth; unsigned long dirty_ratelimit; unsigned long dirtied_stamp; unsigned long balanced_dirty_ratelimit; TYPE_1__* bdi; } ;
struct TYPE_2__ {int capabilities; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long,int) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (int ,int ) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (struct dirty_throttle_control*) ;
 unsigned long FUNC_4 (int ,int ) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 unsigned long FUNC_6 (unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_7 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_8 (struct bdi_writeback*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct dirty_throttle_control *VAR_4,
          unsigned long VAR_5,
          unsigned long VAR_6)
{
 struct bdi_writeback *VAR_7 = VAR_4->wb;
 unsigned long VAR_8 = VAR_4->dirty;
 unsigned long VAR_9 = FUNC_1(VAR_4->thresh, VAR_4->bg_thresh);
 unsigned long VAR_10 = FUNC_4(FUNC_3(VAR_4), VAR_4->thresh);
 unsigned long VAR_11 = (VAR_9 + VAR_10) / 2;
 unsigned long VAR_12 = VAR_7->avg_write_bandwidth;
 unsigned long VAR_13 = VAR_7->dirty_ratelimit;
 unsigned long VAR_14;
 unsigned long VAR_15;
 unsigned long VAR_16;
 unsigned long VAR_17;
 unsigned long VAR_18;
 unsigned long VAR_19;





 VAR_14 = (VAR_5 - VAR_7->dirtied_stamp) * VAR_2 / VAR_6;




 VAR_15 = (u64)VAR_13 *
     VAR_4->pos_ratio >> VAR_3;
 VAR_15++;
 VAR_16 = FUNC_2((u64)VAR_15 * VAR_12,
        VAR_14 | 1);



 if (FUNC_9(VAR_16 > VAR_12))
  VAR_16 = VAR_12;
 VAR_17 = 0;
 if (FUNC_9(VAR_7->bdi->capabilities & VAR_0)) {
  VAR_8 = VAR_4->wb_dirty;
  if (VAR_4->wb_dirty < 8)
   VAR_11 = VAR_4->wb_dirty + 1;
  else
   VAR_11 = (VAR_4->wb_thresh + VAR_4->wb_bg_thresh) / 2;
 }

 if (VAR_8 < VAR_11) {
  VAR_18 = FUNC_7(VAR_7->balanced_dirty_ratelimit,
    VAR_16, VAR_15);
  if (VAR_13 < VAR_18)
   VAR_17 = VAR_18 - VAR_13;
 } else {
  VAR_18 = FUNC_6(VAR_7->balanced_dirty_ratelimit,
    VAR_16, VAR_15);
  if (VAR_13 > VAR_18)
   VAR_17 = VAR_13 - VAR_18;
 }






 VAR_19 = VAR_13 / (2 * VAR_17 + 1);
 if (VAR_19 < VAR_1)
  VAR_17 = FUNC_0(VAR_17 >> VAR_19, 8);
 else
  VAR_17 = 0;

 if (VAR_13 < VAR_16)
  VAR_13 += VAR_17;
 else
  VAR_13 -= VAR_17;

 VAR_7->dirty_ratelimit = FUNC_5(VAR_13, 1UL);
 VAR_7->balanced_dirty_ratelimit = VAR_16;

 FUNC_8(VAR_7, VAR_14, VAR_15);
}
