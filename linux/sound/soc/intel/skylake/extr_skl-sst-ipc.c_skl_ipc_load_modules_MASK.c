
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct sst_ipc_message {int size; void* data; int header; } ;
struct sst_generic_ipc {int dev; } ;
struct skl_ipc_header {int primary; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct sst_generic_ipc*,struct sst_ipc_message) ;

int FUNC_6(struct sst_generic_ipc *VAR_3,
    u8 VAR_4, void *VAR_5)
{
 struct skl_ipc_header VAR_6 = {0};
 struct sst_ipc_message VAR_7;
 int VAR_8;

 VAR_6.primary = FUNC_3(VAR_0);
 VAR_6.primary |= FUNC_2(VAR_2);
 VAR_6.primary |= FUNC_0(VAR_1);
 VAR_6.primary |= FUNC_1(VAR_4);

 VAR_7.header = *(u64 *)(&VAR_6);
 VAR_7.data = VAR_5;
 VAR_7.size = sizeof(u16) * VAR_4;

 VAR_8 = FUNC_5(VAR_3, VAR_7);
 if (VAR_8 < 0)
  FUNC_4(VAR_3->dev, "ipc: load modules failed :%d\n", VAR_8);

 return VAR_8;
}
