
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_7__ {int (* xShmBarrier ) (TYPE_2__*) ;} ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(sqlite3_file *VAR_0){
  sqlite3_file *VAR_1 = FUNC_0(VAR_0);
  VAR_1->pMethods->xShmBarrier(VAR_1);
}
