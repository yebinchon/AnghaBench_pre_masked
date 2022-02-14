
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirty_throttle_control {struct bdi_writeback* wb; } ;
struct bdi_writeback {unsigned long bw_time_stamp; unsigned long dirtied_stamp; unsigned long written_stamp; int * stat; int list_lock; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct dirty_throttle_control*,unsigned long) ;
 unsigned long VAR_5 ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (struct dirty_throttle_control*,unsigned long,unsigned long) ;
 int FUNC_6 (struct bdi_writeback*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct dirty_throttle_control *VAR_6,
      struct dirty_throttle_control *VAR_7,
      unsigned long VAR_8,
      bool VAR_9)
{
 struct bdi_writeback *VAR_10 = VAR_6->wb;
 unsigned long VAR_11 = VAR_5;
 unsigned long VAR_12 = VAR_11 - VAR_10->bw_time_stamp;
 unsigned long VAR_13;
 unsigned long VAR_14;

 FUNC_2(&VAR_10->list_lock);




 if (VAR_12 < VAR_0)
  return;

 VAR_13 = FUNC_3(&VAR_10->stat[VAR_3]);
 VAR_14 = FUNC_3(&VAR_10->stat[VAR_4]);





 if (VAR_12 > VAR_2 && FUNC_4(VAR_10->bw_time_stamp, VAR_8))
  goto snapshot;

 if (VAR_9) {
  FUNC_1(VAR_6, VAR_11);
  FUNC_5(VAR_6, VAR_13, VAR_12);





  if (FUNC_0(VAR_1) && VAR_7) {
   FUNC_1(VAR_7, VAR_11);
   FUNC_5(VAR_7, VAR_13, VAR_12);
  }
 }
 FUNC_6(VAR_10, VAR_12, VAR_14);

snapshot:
 VAR_10->dirtied_stamp = VAR_13;
 VAR_10->written_stamp = VAR_14;
 VAR_10->bw_time_stamp = VAR_11;
}
