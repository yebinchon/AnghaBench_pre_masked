
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_ipc_message {int header; int member_0; } ;
struct sst_byt {int ipc; } ;


 int FUNC_0 (int,int ,int,int) ;
 int FUNC_1 (int *,struct sst_ipc_message) ;
 int FUNC_2 (int *,struct sst_ipc_message,int *) ;

__attribute__((used)) static int FUNC_3(struct sst_byt *VAR_0, int VAR_1,
         int VAR_2, int VAR_3)
{
 struct sst_ipc_message VAR_4 = {0};

 VAR_4.header = FUNC_0(VAR_1, 0, 0, VAR_2);
 if (VAR_3)
  return FUNC_2(&VAR_0->ipc, VAR_4, ((void*)0));
 else
  return FUNC_1(&VAR_0->ipc, VAR_4);
}
