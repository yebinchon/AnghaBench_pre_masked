
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mutex; TYPE_2__* pDisconnect; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_8__ {struct TYPE_8__* pNext; } ;
typedef TYPE_2__ VTable ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;

void FUNC_5(sqlite3 *VAR_0){
  VTable *VAR_1 = VAR_0->pDisconnect;
  VAR_0->pDisconnect = 0;

  FUNC_0( FUNC_1(VAR_0) );
  FUNC_0( FUNC_4(VAR_0->mutex) );

  if( VAR_1 ){
    FUNC_2(VAR_0, 0);
    do {
      VTable *VAR_2 = VAR_1->pNext;
      FUNC_3(VAR_1);
      VAR_1 = VAR_2;
    }while( VAR_1 );
  }
}
