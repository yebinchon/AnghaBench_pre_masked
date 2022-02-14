
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ isInit; TYPE_1__* pBt; } ;
struct TYPE_4__ {int mutex; } ;
typedef TYPE_2__ MemPage ;
typedef int DbPage ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(DbPage *VAR_0){
  MemPage *VAR_1;
  VAR_1 = (MemPage *)FUNC_2(VAR_0);
  FUNC_0( FUNC_3(VAR_0)>0 );
  if( VAR_1->isInit ){
    FUNC_0( FUNC_4(VAR_1->pBt->mutex) );
    VAR_1->isInit = 0;
    if( FUNC_3(VAR_0)>1 ){






      FUNC_1(VAR_1);
    }
  }
}
