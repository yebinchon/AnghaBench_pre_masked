
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
typedef int pdo_stmt_t ;
struct TYPE_4__ {scalar_t__ last_app_error; int * isc_status; } ;
typedef TYPE_1__ pdo_firebird_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int buf ;
typedef int ISC_STATUS ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int,int const**) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(pdo_dbh_t *VAR_0, pdo_stmt_t *VAR_1, zval *VAR_2)
{
 pdo_firebird_db_handle *VAR_3 = (pdo_firebird_db_handle *)VAR_0->driver_data;
 const ISC_STATUS *VAR_4 = VAR_3->isc_status;
 char VAR_5[400];
 zend_long VAR_6 = 0, VAR_7, VAR_8 = FUNC_4(VAR_4);

 if (VAR_8) {
  FUNC_0(VAR_2, VAR_8);

  while ((sizeof(VAR_5)>(VAR_6+2))&&(VAR_7 = FUNC_3(&VAR_5[VAR_6],(sizeof(VAR_5)-VAR_6-2),&VAR_4))) {
   VAR_6 += VAR_7;
   FUNC_5(&VAR_5[VAR_6++], " ");
  }
  FUNC_1(VAR_2, VAR_5);
 } else if (VAR_3->last_app_error) {
  FUNC_0(VAR_2, -999);
  FUNC_1(VAR_2, FUNC_2(VAR_3->last_app_error));
 }
 return 1;
}
