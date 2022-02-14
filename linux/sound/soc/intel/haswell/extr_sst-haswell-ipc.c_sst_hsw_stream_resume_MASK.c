
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stream_hw_id; } ;
struct sst_hsw_stream {TYPE_1__ reply; } ;
struct sst_hsw {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sst_hsw*,int ,int ,int) ;
 int FUNC_3 (char*,int ) ;

int FUNC_4(struct sst_hsw *VAR_1, struct sst_hsw_stream *VAR_2,
 int VAR_3)
{
 int VAR_4;

 if (!VAR_2) {
  FUNC_1(VAR_1->dev, "warning: stream is NULL, no stream to resume, ignore it.\n");
  return 0;
 }

 FUNC_3("stream resume", VAR_2->reply.stream_hw_id);

 VAR_4 = FUNC_2(VAR_1, VAR_0,
  VAR_2->reply.stream_hw_id, VAR_3);
 if (VAR_4 < 0)
  FUNC_0(VAR_1->dev, "error: failed to resume stream %d\n",
   VAR_2->reply.stream_hw_id);

 return VAR_4;
}
