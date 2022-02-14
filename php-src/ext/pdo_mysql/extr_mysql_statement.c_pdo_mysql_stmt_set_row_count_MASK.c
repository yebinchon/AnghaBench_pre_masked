
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ zend_long ;
struct TYPE_4__ {scalar_t__ row_count; TYPE_2__* driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_5__ {int stmt; } ;
typedef TYPE_2__ pdo_mysql_stmt ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(pdo_stmt_t *VAR_0)
{
 zend_long VAR_1;
 pdo_mysql_stmt *VAR_2 = VAR_0->driver_data;
 VAR_1 = (zend_long) FUNC_0(VAR_2->stmt);
 if (VAR_1 != (zend_long)-1) {
  VAR_0->row_count = VAR_1;
 }
}
