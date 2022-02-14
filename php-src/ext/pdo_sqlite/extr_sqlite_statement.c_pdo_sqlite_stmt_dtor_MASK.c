
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_6__ {int * stmt; } ;
typedef TYPE_2__ pdo_sqlite_stmt ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(pdo_stmt_t *VAR_0)
{
 pdo_sqlite_stmt *VAR_1 = (pdo_sqlite_stmt*)VAR_0->driver_data;

 if (VAR_1->stmt) {
  FUNC_1(VAR_1->stmt);
  VAR_1->stmt = ((void*)0);
 }
 FUNC_0(VAR_1);
 return 1;
}
