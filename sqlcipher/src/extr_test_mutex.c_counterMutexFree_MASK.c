
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ eType; int pReal; } ;
typedef TYPE_2__ sqlite3_mutex ;
struct TYPE_6__ {int (* xMutexFree ) (int ) ;} ;
struct TYPE_8__ {TYPE_1__ m; int isInit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(sqlite3_mutex *VAR_3){
  FUNC_0( VAR_2.isInit );
  VAR_2.m.xMutexFree(VAR_3->pReal);
  if( VAR_3->eType==VAR_0 || VAR_3->eType==VAR_1 ){
    FUNC_1(VAR_3);
  }
}
