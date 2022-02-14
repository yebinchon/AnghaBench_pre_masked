
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_5__ {int stmt; } ;
typedef TYPE_2__ pdo_sqlite_stmt ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(pdo_stmt_t *VAR_0)
{
 pdo_sqlite_stmt *VAR_1 = (pdo_sqlite_stmt*)VAR_0->driver_data;
 FUNC_0(VAR_1->stmt);
 return 1;
}
