
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sst_ipc_message {int size; TYPE_2__* data; int header; } ;
struct TYPE_4__ {int stream_id; } ;
struct TYPE_3__ {int stream_hw_id; } ;
struct sst_hsw_stream {int node; int notify_work; TYPE_2__ free_req; TYPE_1__ reply; int host_id; int commited; } ;
struct sst_hsw {int dev; int ipc; struct sst_dsp* dsp; } ;
struct sst_dsp {int spinlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct sst_hsw_stream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,struct sst_ipc_message,int *) ;
 int FUNC_9 (struct sst_hsw_stream*,TYPE_2__*) ;
 int FUNC_10 (char*,int ) ;

int FUNC_11(struct sst_hsw *VAR_2, struct sst_hsw_stream *VAR_3)
{
 struct sst_ipc_message VAR_4;
 int VAR_5 = 0;
 struct sst_dsp *VAR_6 = VAR_2->dsp;
 unsigned long VAR_7;

 if (!VAR_3) {
  FUNC_3(VAR_2->dev, "warning: stream is NULL, no stream to free, ignore it.\n");
  return 0;
 }


 if (!VAR_3->commited)
  goto out;

 FUNC_10("stream free", VAR_3->host_id);

 VAR_3->free_req.stream_id = VAR_3->reply.stream_hw_id;
 VAR_4.header = FUNC_0(VAR_1);
 VAR_4.data = &VAR_3->free_req;
 VAR_4.size = sizeof(VAR_3->free_req);

 VAR_5 = FUNC_8(&VAR_2->ipc, VAR_4, ((void*)0));
 if (VAR_5 < 0) {
  FUNC_2(VAR_2->dev, "error: free stream %d failed\n",
   VAR_3->free_req.stream_id);
  return -VAR_0;
 }

 FUNC_9(VAR_3, &VAR_3->free_req);

out:
 FUNC_1(&VAR_3->notify_work);
 FUNC_6(&VAR_6->spinlock, VAR_7);
 FUNC_5(&VAR_3->node);
 FUNC_4(VAR_3);
 FUNC_7(&VAR_6->spinlock, VAR_7);

 return VAR_5;
}
