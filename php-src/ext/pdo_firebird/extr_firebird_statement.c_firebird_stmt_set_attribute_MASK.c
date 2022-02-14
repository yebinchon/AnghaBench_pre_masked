
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_7__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_stmt_t ;
struct TYPE_8__ {int name; int stmt; TYPE_1__* H; } ;
typedef TYPE_3__ pdo_firebird_stmt ;
struct TYPE_6__ {int isc_status; } ;



 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(pdo_stmt_t *VAR_0, zend_long VAR_1, zval *VAR_2)
{
 pdo_firebird_stmt *VAR_3 = (pdo_firebird_stmt*)VAR_0->driver_data;

 switch (VAR_1) {
  default:
   return 0;
  case 128:
   if (!FUNC_4(VAR_2)) {
    return 0;
   }

   if (FUNC_2(VAR_3->H->isc_status, &VAR_3->stmt, FUNC_1(VAR_2),0)) {
    FUNC_0(VAR_0);
    return 0;
   }
   FUNC_3(VAR_3->name, FUNC_1(VAR_2), sizeof(VAR_3->name));
   break;
 }
 return 1;
}
