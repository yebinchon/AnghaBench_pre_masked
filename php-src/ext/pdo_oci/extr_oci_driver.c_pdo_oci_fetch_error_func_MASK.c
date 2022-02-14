
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_8__ {scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_10__ {scalar_t__ errmsg; scalar_t__ errcode; } ;
struct TYPE_9__ {TYPE_3__ einfo; } ;
typedef TYPE_2__ pdo_oci_stmt ;
typedef TYPE_3__ pdo_oci_error_info ;
struct TYPE_11__ {TYPE_3__ einfo; } ;
typedef TYPE_4__ pdo_oci_db_handle ;
struct TYPE_12__ {scalar_t__ driver_data; } ;
typedef TYPE_5__ pdo_dbh_t ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_2(pdo_dbh_t *VAR_0, pdo_stmt_t *VAR_1, zval *VAR_2)
{
 pdo_oci_db_handle *VAR_3 = (pdo_oci_db_handle *)VAR_0->driver_data;
 pdo_oci_error_info *VAR_4;

 VAR_4 = &VAR_3->einfo;

 if (VAR_1) {
  pdo_oci_stmt *VAR_5 = (pdo_oci_stmt*)VAR_1->driver_data;

  if (VAR_5->einfo.errmsg) {
   VAR_4 = &VAR_5->einfo;
  }
 }

 if (VAR_4->errcode) {
  FUNC_0(VAR_2, VAR_4->errcode);
  FUNC_1(VAR_2, VAR_4->errmsg);
 }

 return 1;
}
