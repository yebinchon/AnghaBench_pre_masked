
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stream_hw_id; } ;
struct sst_hsw_stream {TYPE_1__ reply; scalar_t__ running; int commited; } ;
struct sst_hsw {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sst_hsw*,int ,int ,int) ;
 int FUNC_4 (char*,int ) ;

int FUNC_5(struct sst_hsw *VAR_2, struct sst_hsw_stream *VAR_3)
{
 int VAR_4, VAR_5 = 10;

 if (!VAR_3) {
  FUNC_1(VAR_2->dev, "warning: stream is NULL, no stream to reset, ignore it.\n");
  return 0;
 }


 if (!VAR_3->commited)
  return 0;


 while (VAR_3->running && --VAR_5)
  FUNC_2(1);
 if (!VAR_5) {
  FUNC_0(VAR_2->dev, "error: reset stream %d still running\n",
   VAR_3->reply.stream_hw_id);
  return -VAR_0;
 }

 FUNC_4("stream reset", VAR_3->reply.stream_hw_id);

 VAR_4 = FUNC_3(VAR_2, VAR_1,
  VAR_3->reply.stream_hw_id, 1);
 if (VAR_4 < 0)
  FUNC_0(VAR_2->dev, "error: failed to reset stream %d\n",
   VAR_3->reply.stream_hw_id);
 return VAR_4;
}
