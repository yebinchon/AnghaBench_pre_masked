
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_ipc_message {int size; int * data; int header; int member_0; } ;
struct sst_hsw_stream {int commited; int reply; int request; int host_id; } ;
struct sst_hsw {int dev; int ipc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,struct sst_ipc_message,struct sst_ipc_message*) ;
 int FUNC_4 (struct sst_hsw_stream*) ;
 int FUNC_5 (char*,int ) ;

int FUNC_6(struct sst_hsw *VAR_1, struct sst_hsw_stream *VAR_2)
{
 struct sst_ipc_message VAR_3, VAR_4 = {0};
 int VAR_5;

 if (!VAR_2) {
  FUNC_2(VAR_1->dev, "warning: stream is NULL, no stream to commit, ignore it.\n");
  return 0;
 }

 if (VAR_2->commited) {
  FUNC_2(VAR_1->dev, "warning: stream is already committed, ignore it.\n");
  return 0;
 }

 FUNC_5("stream alloc", VAR_2->host_id);

 VAR_3.header = FUNC_0(VAR_0);
 VAR_3.data = &VAR_2->request;
 VAR_3.size = sizeof(VAR_2->request);
 VAR_4.data = &VAR_2->reply;
 VAR_4.size = sizeof(VAR_2->reply);

 VAR_5 = FUNC_3(&VAR_1->ipc, VAR_3, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_1(VAR_1->dev, "error: stream commit failed\n");
  return VAR_5;
 }

 VAR_2->commited = 1;
 FUNC_4(VAR_2);

 return 0;
}
