
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dirty_throttle_control {int wb_thresh; int bg_thresh; unsigned long wb_dirty; scalar_t__ thresh; int wb_bg_thresh; struct bdi_writeback* wb; } ;
struct bdi_writeback {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dirty_throttle_control*) ;
 int FUNC_1 (int,scalar_t__) ;
 unsigned long FUNC_2 (struct bdi_writeback*,int ) ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (struct bdi_writeback*,int ) ;

__attribute__((used)) static inline void FUNC_5(struct dirty_throttle_control *VAR_2)
{
 struct bdi_writeback *VAR_3 = VAR_2->wb;
 unsigned long VAR_4;
 VAR_2->wb_thresh = FUNC_0(VAR_2);
 VAR_2->wb_bg_thresh = VAR_2->thresh ?
  FUNC_1((u64)VAR_2->wb_thresh * VAR_2->bg_thresh, VAR_2->thresh) : 0;
 if (VAR_2->wb_thresh < 2 * FUNC_3()) {
  VAR_4 = FUNC_4(VAR_3, VAR_0);
  VAR_2->wb_dirty = VAR_4 + FUNC_4(VAR_3, VAR_1);
 } else {
  VAR_4 = FUNC_2(VAR_3, VAR_0);
  VAR_2->wb_dirty = VAR_4 + FUNC_2(VAR_3, VAR_1);
 }
}
