
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct sst_ipc_message {int header; int member_0; } ;
struct sst_generic_ipc {int dev; } ;
struct skl_ipc_header {int primary; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct sst_generic_ipc*,struct sst_ipc_message) ;
 int FUNC_7 (struct sst_generic_ipc*,struct sst_ipc_message,int *) ;

int FUNC_8(struct sst_generic_ipc *VAR_3,
    u8 VAR_4, u8 VAR_5, bool VAR_6)
{
 struct skl_ipc_header VAR_7 = {0};
 struct sst_ipc_message VAR_8 = {0};
 int VAR_9 = 0;

 VAR_7.primary = FUNC_4(VAR_0);
 VAR_7.primary |= FUNC_3(VAR_2);
 VAR_7.primary |= FUNC_0(VAR_1);
 VAR_7.primary |= FUNC_2(VAR_5);
 VAR_7.primary |= FUNC_1(VAR_4);
 VAR_8.header = *(u64 *)(&VAR_7);

 if (VAR_6)
  VAR_9 = FUNC_7(VAR_3, VAR_8, ((void*)0));
 else
  VAR_9 = FUNC_6(VAR_3, VAR_8);

 if (VAR_9 < 0)
  FUNC_5(VAR_3->dev, "ipc: load lib failed\n");

 return VAR_9;
}
