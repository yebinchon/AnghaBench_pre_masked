
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_long ;
struct TYPE_5__ {int error_code; } ;
typedef TYPE_1__ pdo_stmt_t ;
typedef int pdo_error_type ;
struct TYPE_6__ {int error_code; } ;
typedef TYPE_2__ pdo_dbh_t ;


 int FUNC_0 (int ,char*) ;

void FUNC_1(pdo_dbh_t *VAR_0, pdo_stmt_t *VAR_1, char const *VAR_2, zend_long VAR_3)
{
 pdo_error_type *const VAR_4 = VAR_1 ? &VAR_1->error_code : &VAR_0->error_code;

 FUNC_0(*VAR_4, "HY000");
}
