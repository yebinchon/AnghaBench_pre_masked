
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bdi_writeback {int congested; int completions; int * stat; void* dirty_sleep; int dwork; int work_list; int work_lock; void* avg_write_bandwidth; void* write_bandwidth; void* dirty_ratelimit; void* balanced_dirty_ratelimit; void* bw_time_stamp; int list_lock; int b_dirty_time; int b_more_io; int b_io; int b_dirty; void* last_old_flush; struct backing_dev_info* bdi; } ;
struct backing_dev_info {struct bdi_writeback wb; } ;
typedef int gfp_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct backing_dev_info*) ;
 int FUNC_3 (struct backing_dev_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 void* VAR_3 ;
 int FUNC_6 (struct bdi_writeback*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct backing_dev_info*,int,int ) ;
 int FUNC_11 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_12(struct bdi_writeback *VAR_5, struct backing_dev_info *VAR_6,
     int VAR_7, gfp_t VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_6(VAR_5, 0, sizeof(*VAR_5));

 if (VAR_5 != &VAR_6->wb)
  FUNC_2(VAR_6);
 VAR_5->bdi = VAR_6;
 VAR_5->last_old_flush = VAR_3;
 FUNC_1(&VAR_5->b_dirty);
 FUNC_1(&VAR_5->b_io);
 FUNC_1(&VAR_5->b_more_io);
 FUNC_1(&VAR_5->b_dirty_time);
 FUNC_9(&VAR_5->list_lock);

 VAR_5->bw_time_stamp = VAR_3;
 VAR_5->balanced_dirty_ratelimit = VAR_1;
 VAR_5->dirty_ratelimit = VAR_1;
 VAR_5->write_bandwidth = VAR_1;
 VAR_5->avg_write_bandwidth = VAR_1;

 FUNC_9(&VAR_5->work_lock);
 FUNC_1(&VAR_5->work_list);
 FUNC_0(&VAR_5->dwork, VAR_4);
 VAR_5->dirty_sleep = VAR_3;

 VAR_5->congested = FUNC_10(VAR_6, VAR_7, VAR_8);
 if (!VAR_5->congested) {
  VAR_10 = -VAR_0;
  goto out_put_bdi;
 }

 VAR_10 = FUNC_5(&VAR_5->completions, VAR_8);
 if (VAR_10)
  goto out_put_cong;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_10 = FUNC_8(&VAR_5->stat[VAR_9], 0, VAR_8);
  if (VAR_10)
   goto out_destroy_stat;
 }

 return 0;

out_destroy_stat:
 while (VAR_9--)
  FUNC_7(&VAR_5->stat[VAR_9]);
 FUNC_4(&VAR_5->completions);
out_put_cong:
 FUNC_11(VAR_5->congested);
out_put_bdi:
 if (VAR_5 != &VAR_6->wb)
  FUNC_3(VAR_6);
 return VAR_10;
}
