
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_ipc_message {int header; int member_0; } ;
struct sst_hsw {int ipc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct sst_ipc_message) ;
 int FUNC_3 (int *,struct sst_ipc_message,int *) ;

__attribute__((used)) static int FUNC_4(struct sst_hsw *VAR_2, int VAR_3,
 int VAR_4, int VAR_5)
{
 struct sst_ipc_message VAR_6 = {0};

 VAR_6.header = FUNC_0(VAR_0);
 VAR_6.header |= FUNC_1(VAR_3) | (VAR_4 << VAR_1);

 if (VAR_5)
  return FUNC_3(&VAR_2->ipc, VAR_6, ((void*)0));
 else
  return FUNC_2(&VAR_2->ipc, VAR_6);
}
