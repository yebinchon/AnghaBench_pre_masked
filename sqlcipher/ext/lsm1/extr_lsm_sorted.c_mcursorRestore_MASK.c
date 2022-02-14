
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int pClient; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_8__ {int nData; scalar_t__ pData; } ;
struct TYPE_10__ {TYPE_1__ key; int eType; } ;
typedef TYPE_3__ MultiCursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,scalar_t__,int ,int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(lsm_db *VAR_1, MultiCursor *VAR_2){
  int VAR_3;
  VAR_3 = FUNC_1(VAR_2, VAR_1->pClient);
  if( VAR_3==VAR_0 && VAR_2->key.pData ){
    VAR_3 = FUNC_0(VAR_2,
         FUNC_2(VAR_2->eType), VAR_2->key.pData, VAR_2->key.nData, +1
    );
  }
  return VAR_3;
}
