
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_ipc_message {int size; struct sst_hsw_ipc_fw_version* data; int header; int member_0; } ;
struct sst_hsw_ipc_fw_version {int dummy; } ;
struct sst_hsw {int dev; int ipc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,struct sst_ipc_message,struct sst_ipc_message*) ;

int FUNC_3(struct sst_hsw *VAR_1,
 struct sst_hsw_ipc_fw_version *VAR_2)
{
 struct sst_ipc_message VAR_3 = {0}, VAR_4 = {0};
 int VAR_5;

 VAR_3.header = FUNC_0(VAR_0);
 VAR_4.data = VAR_2;
 VAR_4.size = sizeof(*VAR_2);
 VAR_5 = FUNC_2(&VAR_1->ipc, VAR_3, &VAR_4);
 if (VAR_5 < 0)
  FUNC_1(VAR_1->dev, "error: get version failed\n");

 return VAR_5;
}
