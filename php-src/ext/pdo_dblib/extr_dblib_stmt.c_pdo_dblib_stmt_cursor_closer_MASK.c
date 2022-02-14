
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_6__ {TYPE_3__* H; } ;
typedef TYPE_2__ pdo_dblib_stmt ;
struct TYPE_7__ {int err; int link; } ;
typedef TYPE_3__ pdo_dblib_db_handle ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(pdo_stmt_t *VAR_0)
{
 pdo_dblib_stmt *VAR_1 = (pdo_dblib_stmt*)VAR_0->driver_data;
 pdo_dblib_db_handle *VAR_2 = VAR_1->H;


 FUNC_0(VAR_2->link);

 FUNC_1(&VAR_2->err);

 return 1;
}
