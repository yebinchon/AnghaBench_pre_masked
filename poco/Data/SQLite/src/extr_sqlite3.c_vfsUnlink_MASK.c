
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pNext; } ;
typedef TYPE_1__ sqlite3_vfs ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3(sqlite3_vfs *VAR_2){
  FUNC_0( FUNC_2(FUNC_1(VAR_0)) );
  if( VAR_2==0 ){

  }else if( VAR_1==VAR_2 ){
    VAR_1 = VAR_2->pNext;
  }else if( VAR_1 ){
    sqlite3_vfs *VAR_3 = VAR_1;
    while( VAR_3->pNext && VAR_3->pNext!=VAR_2 ){
      VAR_3 = VAR_3->pNext;
    }
    if( VAR_3->pNext==VAR_2 ){
      VAR_3->pNext = VAR_2->pNext;
    }
  }
}
