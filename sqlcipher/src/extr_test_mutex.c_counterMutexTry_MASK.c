
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t eType; int pReal; } ;
typedef TYPE_2__ sqlite3_mutex ;
struct TYPE_5__ {int (* xMutexTry ) (int ) ;} ;
struct TYPE_7__ {int isInit; TYPE_1__ m; scalar_t__ disableTry; int * aCounter; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_mutex *VAR_3){
  FUNC_0( VAR_2.isInit );
  FUNC_0( VAR_3->eType>=0 );
  FUNC_0( VAR_3->eType<VAR_0 );
  VAR_2.aCounter[VAR_3->eType]++;
  if( VAR_2.disableTry ) return VAR_1;
  return VAR_2.m.xMutexTry(VAR_3->pReal);
}
