
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_long ;
typedef scalar_t__ ub4 ;
typedef scalar_t__ ub2 ;
typedef int text ;
struct TYPE_4__ {int err; void* last_err; int svc; int env; } ;
typedef TYPE_1__ pdo_oci_db_handle ;
struct TYPE_5__ {int in_txn; scalar_t__ auto_commit; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int dvoid ;
typedef int OCIStmt ;


 int VAR_0 ;
 void* FUNC_0 (int *,int ,scalar_t__*,int ,int ,int ) ;
 int FUNC_1 (int ,int *,int ,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 void* FUNC_3 (int ,int *,int ,int,int ,int *,int *,int ) ;
 void* FUNC_4 (int *,int ,int *,scalar_t__,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,char*) ;

__attribute__((used)) static zend_long FUNC_7(pdo_dbh_t *VAR_8, const char *VAR_9, size_t VAR_10)
{
 pdo_oci_db_handle *VAR_11 = (pdo_oci_db_handle *)VAR_8->driver_data;
 OCIStmt *VAR_12;
 ub2 VAR_13;
 ub4 VAR_14;
 int VAR_15 = -1;

 FUNC_1(VAR_11->env, (dvoid*)&VAR_12, VAR_5, 0, ((void*)0));

 VAR_11->last_err = FUNC_4(VAR_12, VAR_11->err, (text*)VAR_9, (ub4) VAR_10, VAR_6, VAR_4);
 if (VAR_11->last_err) {
  VAR_11->last_err = FUNC_5("OCIStmtPrepare");
  FUNC_2(VAR_12, VAR_5);
  return -1;
 }

 VAR_11->last_err = FUNC_0(VAR_12, VAR_5, &VAR_13, 0, VAR_2, VAR_11->err);

 if (VAR_13 == VAR_7) {

  FUNC_2(VAR_12, VAR_5);
  FUNC_6(((void*)0), VAR_0, "issuing a SELECT query here is invalid");
  return -1;
 }


 VAR_11->last_err = FUNC_3(VAR_11->svc, VAR_12, VAR_11->err, 1, 0, ((void*)0), ((void*)0),
   (VAR_8->auto_commit && !VAR_8->in_txn) ? VAR_3 : VAR_4);

 if (VAR_11->last_err) {
  VAR_11->last_err = FUNC_5("OCIStmtExecute");
 } else {

  VAR_11->last_err = FUNC_0(VAR_12, VAR_5, &VAR_14, 0, VAR_1, VAR_11->err);
  VAR_15 = VAR_14;
 }

 FUNC_2(VAR_12, VAR_5);

 return VAR_15;
}
