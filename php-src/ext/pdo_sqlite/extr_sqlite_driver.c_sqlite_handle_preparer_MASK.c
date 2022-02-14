
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
struct TYPE_11__ {int supports_placeholders; int * methods; TYPE_3__* driver_data; } ;
typedef TYPE_2__ pdo_stmt_t ;
struct TYPE_12__ {int stmt; TYPE_4__* H; } ;
typedef TYPE_3__ pdo_sqlite_stmt ;
struct TYPE_10__ {int errcode; } ;
struct TYPE_13__ {int db; TYPE_1__ einfo; } ;
typedef TYPE_4__ pdo_sqlite_db_handle ;
struct TYPE_14__ {scalar_t__ driver_data; } ;
typedef TYPE_5__ pdo_dbh_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,char const*,size_t,int *,char const**) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(pdo_dbh_t *VAR_7, const char *VAR_8, size_t VAR_9, pdo_stmt_t *VAR_10, zval *VAR_11)
{
 pdo_sqlite_db_handle *VAR_12 = (pdo_sqlite_db_handle *)VAR_7->driver_data;
 pdo_sqlite_stmt *VAR_13 = FUNC_0(1, sizeof(pdo_sqlite_stmt));
 int VAR_14;
 const char *VAR_15;

 VAR_13->H = VAR_12;
 VAR_10->driver_data = VAR_13;
 VAR_10->methods = &VAR_6;
 VAR_10->supports_placeholders = VAR_3|VAR_2;

 if (VAR_1 != FUNC_1(VAR_11, VAR_0, VAR_1)) {
  VAR_12->einfo.errcode = VAR_4;
  FUNC_2(VAR_7);
  return 0;
 }

 VAR_14 = FUNC_3(VAR_12->db, VAR_8, VAR_9, &VAR_13->stmt, &VAR_15);
 if (VAR_14 == VAR_5) {
  return 1;
 }

 FUNC_2(VAR_7);

 return 0;
}
