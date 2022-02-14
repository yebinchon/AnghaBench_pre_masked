
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int nAlloc; int * aCkpt; int pEnv; } ;
typedef TYPE_1__ CkptBuffer ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *,int) ;

__attribute__((used)) static void FUNC_2(CkptBuffer *VAR_1, int VAR_2, u32 VAR_3, int *VAR_4){
  if( *VAR_4 ) return;
  if( VAR_2>=VAR_1->nAlloc ){
    int VAR_5 = FUNC_0(8, VAR_2*2);
    VAR_1->aCkpt = (u32 *)FUNC_1(VAR_1->pEnv, VAR_1->aCkpt, VAR_5*sizeof(u32));
    if( !VAR_1->aCkpt ){
      *VAR_4 = VAR_0;
      return;
    }
    VAR_1->nAlloc = VAR_5;
  }
  VAR_1->aCkpt[VAR_2] = VAR_3;
}
