
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirty_throttle_control {scalar_t__ dirty; scalar_t__ bg_thresh; int wb; int avail; int member_0; } ;
struct bdi_writeback {int dummy; } ;


 int FUNC_0 (struct bdi_writeback*) ;
 int FUNC_1 (struct bdi_writeback*,struct dirty_throttle_control*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dirty_throttle_control* const) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct dirty_throttle_control* const,unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (struct dirty_throttle_control*) ;
 int FUNC_7 (struct bdi_writeback*,unsigned long*,unsigned long*,scalar_t__*,unsigned long*) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (struct bdi_writeback*,int ) ;

bool FUNC_10(struct bdi_writeback *VAR_3)
{
 struct dirty_throttle_control VAR_4 = { FUNC_0(VAR_3) };
 struct dirty_throttle_control VAR_5 = { FUNC_1(VAR_3, &VAR_4) };
 struct dirty_throttle_control * const VAR_6 = &VAR_4;
 struct dirty_throttle_control * const VAR_7 = FUNC_6(&VAR_5) ?
           &VAR_5 : ((void*)0);





 VAR_6->avail = FUNC_3();
 VAR_6->dirty = FUNC_4(VAR_0) +
        FUNC_4(VAR_1);
 FUNC_2(VAR_6);

 if (VAR_6->dirty > VAR_6->bg_thresh)
  return 1;

 if (FUNC_9(VAR_3, VAR_2) >
     FUNC_8(VAR_6->wb, VAR_6->bg_thresh))
  return 1;

 if (VAR_7) {
  unsigned long VAR_8, VAR_9, VAR_10;

  FUNC_7(VAR_3, &VAR_8, &VAR_9, &VAR_7->dirty,
        &VAR_10);
  FUNC_5(VAR_7, VAR_8, VAR_9);
  FUNC_2(VAR_7);

  if (VAR_7->dirty > VAR_7->bg_thresh)
   return 1;

  if (FUNC_9(VAR_3, VAR_2) >
      FUNC_8(VAR_7->wb, VAR_7->bg_thresh))
   return 1;
 }

 return 0;
}
