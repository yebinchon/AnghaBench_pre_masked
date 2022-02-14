
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_ipc_message {int size; int * data; int header; int member_0; } ;
struct sst_hsw {int mixer_info; int dev; int ipc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,struct sst_ipc_message,struct sst_ipc_message*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;

int FUNC_5(struct sst_hsw *VAR_1)
{
 struct sst_ipc_message VAR_2 = {0}, VAR_3 = {0};
 int VAR_4;

 VAR_2.header = FUNC_0(VAR_0);
 VAR_3.data = &VAR_1->mixer_info;
 VAR_3.size = sizeof(VAR_1->mixer_info);

 FUNC_4("get global mixer info", 0);

 VAR_4 = FUNC_2(&VAR_1->ipc, VAR_2, &VAR_3);
 if (VAR_4 < 0) {
  FUNC_1(VAR_1->dev, "error: get stream info failed\n");
  return VAR_4;
 }

 FUNC_3(&VAR_1->mixer_info);

 return 0;
}
