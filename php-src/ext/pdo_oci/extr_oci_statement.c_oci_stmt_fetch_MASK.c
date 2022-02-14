
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ zend_long ;
typedef int ub4 ;
typedef int sb4 ;
struct TYPE_4__ {scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_5__ {scalar_t__ last_err; int err; int stmt; } ;
typedef TYPE_2__ pdo_oci_stmt ;
typedef enum pdo_fetch_orientation { ____Placeholder_pdo_fetch_orientation } pdo_fetch_orientation ;


 scalar_t__ FUNC_0 (int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;






 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(pdo_stmt_t *VAR_11, enum pdo_fetch_orientation VAR_12, zend_long VAR_13)
{



 pdo_oci_stmt *VAR_14 = (pdo_oci_stmt*)VAR_11->driver_data;
 VAR_14->last_err = FUNC_0(VAR_14->stmt, VAR_14->err, 1, VAR_4, VAR_0);


 if (VAR_14->last_err == VAR_8) {

  return 0;
 }

 if (VAR_14->last_err == VAR_7) {
  FUNC_2("OCI_NEED_DATA");
  return 0;
 }

 if (VAR_14->last_err == VAR_10 || VAR_14->last_err == VAR_9) {
  return 1;
 }

 FUNC_2("OCIStmtFetch");

 return 0;
}
