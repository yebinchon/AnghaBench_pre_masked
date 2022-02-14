
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t eType; int pReal; } ;
typedef TYPE_2__ sqlite3_mutex ;
struct TYPE_5__ {int (* xMutexEnter ) (int ) ;} ;
struct TYPE_7__ {int isInit; TYPE_1__ m; int * aCounter; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(sqlite3_mutex *VAR_2){
  FUNC_0( VAR_1.isInit );
  FUNC_0( VAR_2->eType>=0 );
  FUNC_0( VAR_2->eType<VAR_0 );
  VAR_1.aCounter[VAR_2->eType]++;
  VAR_1.m.xMutexEnter(VAR_2->pReal);
}
