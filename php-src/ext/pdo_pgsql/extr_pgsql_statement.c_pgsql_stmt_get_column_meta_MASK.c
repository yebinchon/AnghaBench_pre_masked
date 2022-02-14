
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef size_t zend_long ;
struct TYPE_8__ {size_t column_count; scalar_t__ driver_data; } ;
typedef TYPE_3__ pdo_stmt_t ;
struct TYPE_9__ {TYPE_2__* H; TYPE_1__* cols; int result; } ;
typedef TYPE_4__ pdo_pgsql_stmt ;
struct TYPE_7__ {int server; } ;
struct TYPE_6__ {int pgsql_type; } ;
typedef int PGresult ;
typedef int Oid ;
typedef int ExecStatusType ;


 char* VAR_0 ;

 char* VAR_1 ;

 char* VAR_2 ;

 int VAR_3 ;
 char* VAR_4 ;

 char* VAR_5 ;

 char* VAR_6 ;

 int VAR_7 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,size_t) ;
 char* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* VAR_8 ;

 char* VAR_9 ;

 char* VAR_10 ;

 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int,int ) ;
 int FUNC_11 (char**,int ,char*,int) ;

__attribute__((used)) static int FUNC_12(pdo_stmt_t *VAR_11, zend_long VAR_12, zval *VAR_13)
{
 pdo_pgsql_stmt *VAR_14 = (pdo_pgsql_stmt*)VAR_11->driver_data;
 PGresult *VAR_15;
 char *VAR_16=((void*)0);
 ExecStatusType VAR_17;
 Oid VAR_18;
 char *VAR_19=((void*)0);

 if (!VAR_14->result) {
  return VAR_3;
 }

 if (VAR_12 >= VAR_11->column_count) {
  return VAR_3;
 }

 FUNC_8(VAR_13);
 FUNC_6(VAR_13, "pgsql:oid", VAR_14->cols[VAR_12].pgsql_type);

 VAR_18 = FUNC_2(VAR_14->result, VAR_12);
 FUNC_6(VAR_13, "pgsql:table_oid", VAR_18);
 VAR_19 = FUNC_10(VAR_18, VAR_14->H->server);
 if (VAR_19) {
  FUNC_7(VAR_13, "table", VAR_19);
  FUNC_9(VAR_19);
 }

 switch (VAR_14->cols[VAR_12].pgsql_type) {
  case 136:
   FUNC_7(VAR_13, "native_type", VAR_0);
   break;
  case 135:
   FUNC_7(VAR_13, "native_type", VAR_1);
   break;
  case 131:
   FUNC_7(VAR_13, "native_type", VAR_6);
   break;
  case 133:
   FUNC_7(VAR_13, "native_type", VAR_4);
   break;
  case 132:
   FUNC_7(VAR_13, "native_type", VAR_5);
   break;
  case 130:
   FUNC_7(VAR_13, "native_type", VAR_8);
   break;
  case 128:
   FUNC_7(VAR_13, "native_type", VAR_10);
   break;
  case 134:
   FUNC_7(VAR_13, "native_type", VAR_2);
   break;
  case 129:
   FUNC_7(VAR_13, "native_type", VAR_9);
   break;
  default:

   FUNC_11(&VAR_16, 0, "SELECT TYPNAME FROM PG_TYPE WHERE OID=%u", VAR_14->cols[VAR_12].pgsql_type);
   VAR_15 = FUNC_1(VAR_14->H->server, VAR_16);
   FUNC_9(VAR_16);
   VAR_17 = FUNC_5(VAR_15);
   if (VAR_17 == VAR_7 && 1 == FUNC_4(VAR_15)) {
    FUNC_7(VAR_13, "native_type", FUNC_3(VAR_15, 0, 0));
   }
   FUNC_0(VAR_15);
 }
 return 1;
}
