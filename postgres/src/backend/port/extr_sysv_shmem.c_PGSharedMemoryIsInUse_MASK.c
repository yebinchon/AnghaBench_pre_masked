
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGShmemHeader ;
typedef int IpcMemoryState ;
typedef int IpcMemoryId ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int **) ;





 int FUNC_1 (int ,char*,int *) ;
 scalar_t__ FUNC_2 (int *) ;

bool
FUNC_3(unsigned long VAR_1, unsigned long VAR_2)
{
 PGShmemHeader *VAR_3;
 IpcMemoryState VAR_4;

 VAR_4 = FUNC_0((IpcMemoryId) VAR_2, ((void*)0), &VAR_3);
 if (VAR_3 && FUNC_2(VAR_3) < 0)
  FUNC_1(VAR_0, "shmdt(%p) failed: %m", VAR_3);
 switch (VAR_4)
 {
  case 130:
  case 129:
  case 128:
   return 0;
  case 132:
  case 131:
   return 1;
 }
 return 1;
}
