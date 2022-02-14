
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int unixFile ;
struct TYPE_6__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_5__ {scalar_t__ xLock; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(
  sqlite3_file *VAR_1
){
  FUNC_0(VAR_1);
  FUNC_2();
  FUNC_1( VAR_1->pMethods->xLock==VAR_0
       || FUNC_4((unixFile*)VAR_1)
  );
  FUNC_3();
  FUNC_5();
}
