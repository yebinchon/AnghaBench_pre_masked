
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int eType; struct TYPE_7__* pReal; } ;
typedef TYPE_2__ sqlite3_mutex ;
struct TYPE_6__ {TYPE_2__* (* xMutexAlloc ) (int) ;} ;
struct TYPE_8__ {int isInit; TYPE_2__* aStatic; TYPE_1__ m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 TYPE_4__ VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int) ;

__attribute__((used)) static sqlite3_mutex *FUNC_3(int VAR_6){
  sqlite3_mutex *VAR_7;
  sqlite3_mutex *VAR_8 = 0;

  FUNC_0( VAR_5.isInit );
  FUNC_0( VAR_6>=VAR_1 );
  FUNC_0( VAR_6<=VAR_3 );

  VAR_7 = VAR_5.m.xMutexAlloc(VAR_6);
  if( !VAR_7 ) return 0;

  if( VAR_6==VAR_1 || VAR_6==VAR_2 ){
    VAR_8 = (sqlite3_mutex *)FUNC_1(sizeof(sqlite3_mutex));
  }else{
    int VAR_9 = VAR_6 - (VAR_0 - VAR_4);
    FUNC_0( VAR_9>=0 );
    FUNC_0( VAR_9<VAR_4 );
    VAR_8 = &VAR_5.aStatic[VAR_9];
  }

  VAR_8->eType = VAR_6;
  VAR_8->pReal = VAR_7;
  return VAR_8;
}
