
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union semun {scalar_t__ val; } ;
typedef int IpcSemaphoreId ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,union semun) ;

__attribute__((used)) static void
FUNC_2(IpcSemaphoreId VAR_2)
{
 union semun VAR_3;

 VAR_3.val = 0;

 if (FUNC_1(VAR_2, 0, VAR_0, VAR_3) < 0)
  FUNC_0(VAR_1, "semctl(%d, 0, IPC_RMID, ...) failed: %m", VAR_2);
}
