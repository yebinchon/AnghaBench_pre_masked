
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sst_ipc_message {int size; int * data; int header; int member_0; } ;
struct sst_byt_stream {int commited; int reply; int request; int str_id; } ;
struct sst_byt {int dev; int ipc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (int *,struct sst_ipc_message,struct sst_ipc_message*) ;

int FUNC_3(struct sst_byt *VAR_1, struct sst_byt_stream *VAR_2)
{
 struct sst_ipc_message VAR_3, VAR_4 = {0};
 int VAR_5;

 VAR_3.header = FUNC_1(VAR_0,
    sizeof(VAR_2->request) + sizeof(u32),
    1, VAR_2->str_id);
 VAR_3.data = &VAR_2->request;
 VAR_3.size = sizeof(VAR_2->request);
 VAR_4.data = &VAR_2->reply;
 VAR_4.size = sizeof(VAR_2->reply);

 VAR_5 = FUNC_2(&VAR_1->ipc, VAR_3, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(VAR_1->dev, "ipc: error stream commit failed\n");
  return VAR_5;
 }

 VAR_2->commited = 1;

 return 0;
}
