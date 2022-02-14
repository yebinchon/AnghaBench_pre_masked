
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sst_hsw_log_stream {int notify_work; int rw_mutex; int curr_pos; int last_pos; } ;
struct sst_hsw {int dsp; int dev; struct sst_hsw_log_stream log_stream; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct sst_hsw *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = (VAR_4 & VAR_1) >> VAR_2;
 struct sst_hsw_log_stream *VAR_6 = &VAR_3->log_stream;
 int VAR_7 = 1;

 if (VAR_5 != VAR_0) {
  FUNC_0(VAR_3->dev,
   "error: log msg not implemented 0x%8.8x\n", VAR_4);
  return 0;
 }

 FUNC_1(&VAR_6->rw_mutex);
 VAR_6->last_pos = VAR_6->curr_pos;
 FUNC_4(
  VAR_3->dsp, &VAR_6->curr_pos, sizeof(VAR_6->curr_pos));
 FUNC_2(&VAR_6->rw_mutex);

 FUNC_3(&VAR_6->notify_work);

 return VAR_7;
}
