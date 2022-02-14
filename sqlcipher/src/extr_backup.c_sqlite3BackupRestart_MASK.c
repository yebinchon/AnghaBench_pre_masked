
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int iNext; TYPE_2__* pSrc; struct TYPE_7__* pNext; } ;
typedef TYPE_3__ sqlite3_backup ;
struct TYPE_6__ {TYPE_1__* pBt; } ;
struct TYPE_5__ {int mutex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(sqlite3_backup *VAR_0){
  sqlite3_backup *VAR_1;
  for(VAR_1=VAR_0; VAR_1; VAR_1=VAR_1->pNext){
    FUNC_0( FUNC_1(VAR_1->pSrc->pBt->mutex) );
    VAR_1->iNext = 1;
  }
}
