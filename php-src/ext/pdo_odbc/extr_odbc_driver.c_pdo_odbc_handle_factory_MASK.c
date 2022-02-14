
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_ulong ;
struct TYPE_5__ {int dbc; int env; } ;
typedef TYPE_1__ pdo_odbc_db_handle ;
struct TYPE_6__ {char* data_source; int alloc_own_columns; int * methods; int password; scalar_t__* username; int is_persistent; scalar_t__ auto_commit; TYPE_1__* driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int dsnbuf ;
typedef int SQLSMALLINT ;
typedef void* SQLPOINTER ;
typedef scalar_t__ RETCODE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ,char*,int ,scalar_t__*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *,char*,int ,char*,int,int *,int ) ;
 scalar_t__ FUNC_3 (int ,int ,void*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,void*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_5 (int *,int ,scalar_t__) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 TYPE_1__* FUNC_7 (int,int,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char**,int ,char*,char*,scalar_t__*,int ) ;
 scalar_t__ FUNC_10 (char*,char) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static int FUNC_13(pdo_dbh_t *VAR_21, zval *VAR_22)
{
 pdo_odbc_db_handle *VAR_23;
 RETCODE VAR_24;
 int VAR_25 = 0;
 zend_ulong VAR_26;

 VAR_23 = FUNC_7(1, sizeof(*VAR_23), VAR_21->is_persistent);

 VAR_21->driver_data = VAR_23;

 FUNC_0(VAR_10, VAR_13, &VAR_23->env);
 VAR_24 = FUNC_4(VAR_23->env, VAR_3, (void*)VAR_15, 0);

 if (VAR_24 != VAR_16 && VAR_24 != VAR_17) {
  FUNC_6("SQLSetEnvAttr: ODBC3");
  goto fail;
 }
 VAR_24 = FUNC_0(VAR_9, VAR_23->env, &VAR_23->dbc);
 if (VAR_24 != VAR_16 && VAR_24 != VAR_17) {
  FUNC_6("SQLAllocHandle (DBC)");
  goto fail;
 }

 VAR_24 = FUNC_3(VAR_23->dbc, VAR_1,
  (SQLPOINTER)(VAR_21->auto_commit ? VAR_5 : VAR_4), VAR_11);
 if (VAR_24 != VAR_16) {
  FUNC_6("SQLSetConnectAttr AUTOCOMMIT");
  goto fail;
 }


 VAR_26 = FUNC_5(VAR_22, VAR_0, VAR_7);
 VAR_24 = FUNC_3(VAR_23->dbc, VAR_14, (void*)VAR_26, VAR_11);
 if (VAR_24 != VAR_16 && VAR_26 != VAR_7) {
  FUNC_6("SQLSetConnectAttr SQL_ODBC_CURSORS");
  goto fail;
 }

 if (FUNC_10(VAR_21->data_source, ';')) {
  char VAR_27[1024];
  SQLSMALLINT VAR_28;

  VAR_25 = 1;


  if (VAR_21->username && *VAR_21->username && !FUNC_12(VAR_21->data_source, "uid")
    && !FUNC_12(VAR_21->data_source, "UID")) {
   char *VAR_29;
   FUNC_9(&VAR_29, 0, "%s;UID=%s;PWD=%s", VAR_21->data_source, VAR_21->username, VAR_21->password);
   FUNC_8((char*)VAR_21->data_source, VAR_21->is_persistent);
   VAR_21->data_source = VAR_29;
  }

  VAR_24 = FUNC_2(VAR_23->dbc, ((void*)0), (char*)VAR_21->data_source, FUNC_11(VAR_21->data_source),
    VAR_27, sizeof(VAR_27)-1, &VAR_28, VAR_8);
 }
 if (!VAR_25) {
  VAR_24 = FUNC_1(VAR_23->dbc, (char*)VAR_21->data_source, VAR_12, VAR_21->username, VAR_12, VAR_21->password, VAR_12);
 }

 if (VAR_24 != VAR_16 && VAR_24 != VAR_17) {
  FUNC_6(VAR_25 ? "SQLDriverConnect" : "SQLConnect");
  goto fail;
 }



 VAR_21->methods = &VAR_18;
 VAR_21->alloc_own_columns = 1;

 return 1;

fail:
 VAR_21->methods = &VAR_18;
 return 0;
}
