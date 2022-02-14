
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_4__ {long m_checkpoint_write_time; long m_checkpoint_sync_time; } ;
struct TYPE_3__ {int ckpt_longest_sync; int ckpt_sync_rels; int ckpt_agg_sync_time; int ckpt_segs_recycled; int ckpt_segs_removed; int ckpt_segs_added; scalar_t__ ckpt_bufs_written; int ckpt_end_t; int ckpt_start_t; int ckpt_sync_end_t; int ckpt_sync_t; int ckpt_write_t; } ;


 TYPE_2__ VAR_0 ;
 double VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 int FUNC_1 (int ,int ,long*,int*) ;
 int FUNC_2 (int ,char*,char*,scalar_t__,double,int ,int ,int ,long,int,long,int,long,int,int,long,int,long,int,int,int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(bool VAR_7)
{
 long VAR_8,
    VAR_9,
    VAR_10,
    VAR_11,
    VAR_12;
 int VAR_13,
    VAR_14,
    VAR_15,
    VAR_16,
    VAR_17;
 uint64 VAR_18;

 VAR_2.ckpt_end_t = FUNC_0();

 FUNC_1(VAR_2.ckpt_write_t,
      VAR_2.ckpt_sync_t,
      &VAR_8, &VAR_13);

 FUNC_1(VAR_2.ckpt_sync_t,
      VAR_2.ckpt_sync_end_t,
      &VAR_9, &VAR_14);


 VAR_0.m_checkpoint_write_time +=
  VAR_8 * 1000 + VAR_13 / 1000;
 VAR_0.m_checkpoint_sync_time +=
  VAR_9 * 1000 + VAR_14 / 1000;





 if (!VAR_6)
  return;

 FUNC_1(VAR_2.ckpt_start_t,
      VAR_2.ckpt_end_t,
      &VAR_10, &VAR_15);






 VAR_11 = (long) (VAR_2.ckpt_longest_sync / 1000000);
 VAR_16 = VAR_2.ckpt_longest_sync -
  (uint64) VAR_11 * 1000000;

 VAR_18 = 0;
 if (VAR_2.ckpt_sync_rels > 0)
  VAR_18 = VAR_2.ckpt_agg_sync_time /
   VAR_2.ckpt_sync_rels;
 VAR_12 = (long) (VAR_18 / 1000000);
 VAR_17 = VAR_18 - (uint64) VAR_12 * 1000000;

 FUNC_2(VAR_3, "%s complete: wrote %d buffers (%.1f%%); "
   "%d WAL file(s) added, %d removed, %d recycled; "
   "write=%ld.%03d s, sync=%ld.%03d s, total=%ld.%03d s; "
   "sync files=%d, longest=%ld.%03d s, average=%ld.%03d s; "
   "distance=%d kB, estimate=%d kB",
   VAR_7 ? "restartpoint" : "checkpoint",
   VAR_2.ckpt_bufs_written,
   (double) VAR_2.ckpt_bufs_written * 100 / VAR_4,
   VAR_2.ckpt_segs_added,
   VAR_2.ckpt_segs_removed,
   VAR_2.ckpt_segs_recycled,
   VAR_8, VAR_13 / 1000,
   VAR_9, VAR_14 / 1000,
   VAR_10, VAR_15 / 1000,
   VAR_2.ckpt_sync_rels,
   VAR_11, VAR_16 / 1000,
   VAR_12, VAR_17 / 1000,
   (int) (VAR_5 / 1024.0),
   (int) (VAR_1 / 1024.0));
}
