
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pWorker; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_4__ {int * aiAppend; } ;
typedef int LsmPgno ;
typedef int CkptBuffer ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,int ,int*) ;

__attribute__((used)) static void FUNC_1(
  lsm_db *VAR_1,
  CkptBuffer *VAR_2,
  int *VAR_3,
  int *VAR_4
){
  int VAR_5;
  LsmPgno *VAR_6 = VAR_1->pWorker->aiAppend;

  for(VAR_5=0; VAR_5<VAR_0; VAR_5++){
    FUNC_0(VAR_2, VAR_3, VAR_6[VAR_5], VAR_4);
  }
}
