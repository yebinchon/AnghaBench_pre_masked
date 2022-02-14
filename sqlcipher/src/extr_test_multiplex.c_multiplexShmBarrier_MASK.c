
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_9__ {int pGroup; } ;
typedef TYPE_3__ multiplexConn ;
struct TYPE_7__ {int (* xShmBarrier ) (TYPE_2__*) ;} ;


 TYPE_2__* FUNC_0 (int ,int ,int*,int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(sqlite3_file *VAR_0){
  multiplexConn *VAR_1 = (multiplexConn*)VAR_0;
  int VAR_2;
  sqlite3_file *VAR_3 = FUNC_0(VAR_1->pGroup, 0, &VAR_2, ((void*)0), 0);
  if( VAR_3 ){
    VAR_3->pMethods->xShmBarrier(VAR_3);
  }
}
