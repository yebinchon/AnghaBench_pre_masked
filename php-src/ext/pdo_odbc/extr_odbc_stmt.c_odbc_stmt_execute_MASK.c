
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int zend_ulong ;
struct pdo_bound_param_data {int parameter; scalar_t__ driver_data; } ;
typedef int php_stream ;
struct TYPE_6__ {int row_count; int column_count; scalar_t__ executed; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_7__ {char* convbuf; scalar_t__ going_long; int cols; int stmt; } ;
typedef TYPE_2__ pdo_odbc_stmt ;
struct TYPE_8__ {int is_unicode; } ;
typedef TYPE_3__ pdo_odbc_param ;
typedef int pdo_odbc_column ;
typedef scalar_t__ SQLSMALLINT ;
typedef int SQLPOINTER ;
typedef int SQLLEN ;
typedef int RETCODE ;


 scalar_t__ VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int*) ;
 int VAR_1 ;



 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (char*) ;
 char* FUNC_14 (int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (TYPE_1__*,int ,char*,int,int*) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,char*,int) ;

__attribute__((used)) static int FUNC_19(pdo_stmt_t *VAR_2)
{
 RETCODE VAR_3;
 pdo_odbc_stmt *VAR_4 = (pdo_odbc_stmt*)VAR_2->driver_data;
 char *VAR_5 = ((void*)0);
 SQLLEN VAR_6 = -1;

 if (VAR_2->executed) {
  FUNC_0(VAR_4->stmt);
 }

 VAR_3 = FUNC_1(VAR_4->stmt);

 while (VAR_3 == VAR_1) {
  struct pdo_bound_param_data *VAR_7;

  VAR_3 = FUNC_3(VAR_4->stmt, (SQLPOINTER*)&VAR_7);
  if (VAR_3 == VAR_1) {
   php_stream *VAR_8;
   int VAR_9;
   pdo_odbc_param *VAR_10;
   zval *VAR_11;

   VAR_10 = (pdo_odbc_param*)VAR_7->driver_data;
   if (FUNC_6(VAR_7->parameter)) {
    VAR_11 = FUNC_7(VAR_7->parameter);
   } else {
    VAR_11 = &VAR_7->parameter;
   }
   if (FUNC_10(VAR_11) != VAR_0) {

    zend_ulong VAR_12;
    FUNC_11(VAR_11);

    switch (FUNC_16(VAR_2, VAR_10->is_unicode,
       FUNC_9(VAR_11),
       FUNC_8(VAR_11),
       &VAR_12)) {
     case 132:
      FUNC_4(VAR_4->stmt, FUNC_9(VAR_11),
       FUNC_8(VAR_11));
      break;
     case 131:
      FUNC_4(VAR_4->stmt, VAR_4->convbuf, VAR_12);
      break;
     case 133:
      FUNC_15("error converting input string");
      FUNC_0(VAR_4->stmt);
      if (VAR_5) {
       FUNC_13(VAR_5);
      }
      return 0;
    }
    continue;
   }




   FUNC_17(VAR_8, VAR_11);
   if (!VAR_8) {

    FUNC_15("input LOB is no longer a stream");
    FUNC_0(VAR_4->stmt);
    if (VAR_5) {
     FUNC_13(VAR_5);
    }
    return 0;
   }


   if (VAR_5 == ((void*)0)) {
    VAR_5 = FUNC_14(8192);
   }

   do {
    VAR_9 = FUNC_18(VAR_8, VAR_5, 8192);
    if (VAR_9 == 0) {
     break;
    }
    FUNC_4(VAR_4->stmt, VAR_5, VAR_9);
   } while (1);
  }
 }

 if (VAR_5) {
  FUNC_13(VAR_5);
 }

 switch (VAR_3) {
  case 129:
   break;
  case 130:
  case 128:
   FUNC_15("SQLExecute");
   break;

  default:
   FUNC_15("SQLExecute");
   return 0;
 }

 FUNC_5(VAR_4->stmt, &VAR_6);
 VAR_2->row_count = VAR_6;

 if (!VAR_2->executed) {

  SQLSMALLINT VAR_13;


  FUNC_2(VAR_4->stmt, &VAR_13);

  VAR_2->column_count = (int)VAR_13;
  VAR_4->cols = FUNC_12(VAR_13, sizeof(pdo_odbc_column));
  VAR_4->going_long = 0;
 }

 return 1;
}
