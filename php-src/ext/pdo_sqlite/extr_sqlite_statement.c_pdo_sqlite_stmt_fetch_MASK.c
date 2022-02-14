
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_long ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_6__ {int done; int stmt; scalar_t__ pre_fetched; } ;
typedef TYPE_2__ pdo_sqlite_stmt ;
typedef enum pdo_fetch_orientation { ____Placeholder_pdo_fetch_orientation } pdo_fetch_orientation ;





 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(pdo_stmt_t *VAR_0,
 enum pdo_fetch_orientation VAR_1, zend_long VAR_2)
{
 pdo_sqlite_stmt *VAR_3 = (pdo_sqlite_stmt*)VAR_0->driver_data;
 int VAR_4;
 if (!VAR_3->stmt) {
  return 0;
 }
 if (VAR_3->pre_fetched) {
  VAR_3->pre_fetched = 0;
  return 1;
 }
 if (VAR_3->done) {
  return 0;
 }
 VAR_4 = FUNC_2(VAR_3->stmt);
 switch (VAR_4) {
  case 128:
   return 1;

  case 130:
   VAR_3->done = 1;
   FUNC_1(VAR_3->stmt);
   return 0;

  case 129:
   FUNC_1(VAR_3->stmt);
  default:
   FUNC_0(VAR_0);
   return 0;
 }
}
