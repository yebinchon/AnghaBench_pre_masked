
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int key; TYPE_1__* pDb; int eType; int * aTree; } ;
struct TYPE_5__ {int pEnv; } ;
typedef TYPE_2__ MultiCursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int *,void**,int*) ;
 int FUNC_1 (int ,int *,void*,int) ;

__attribute__((used)) static void FUNC_2(MultiCursor *VAR_1, int *VAR_2){
  if( *VAR_2==VAR_0 ){
    void *VAR_3;
    int VAR_4;
    FUNC_0(VAR_1, VAR_1->aTree[1], &VAR_1->eType, &VAR_3, &VAR_4);
    *VAR_2 = FUNC_1(VAR_1->pDb->pEnv, &VAR_1->key, VAR_3, VAR_4);
  }
}
