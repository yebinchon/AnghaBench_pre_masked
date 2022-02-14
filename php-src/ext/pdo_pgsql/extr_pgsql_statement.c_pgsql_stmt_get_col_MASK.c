
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_long ;
typedef int zend_bool ;
struct pdo_column_data {int param_type; } ;
struct TYPE_8__ {int database_object_handle; struct pdo_column_data* columns; scalar_t__ driver_data; } ;
typedef TYPE_3__ pdo_stmt_t ;
struct TYPE_9__ {TYPE_2__* H; TYPE_1__* cols; scalar_t__ current_row; int result; } ;
typedef TYPE_4__ pdo_pgsql_stmt ;
struct TYPE_7__ {int server; } ;
struct TYPE_6__ {int boolval; int pgsql_type; int intval; } ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int) ;
 size_t FUNC_2 (int ,scalar_t__,int) ;
 char* FUNC_3 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_4 (unsigned char*,size_t*) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*) ;
 char* FUNC_6 (char*,size_t) ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int *,int,int ) ;
 scalar_t__ FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (char*,char**,int) ;

__attribute__((used)) static int FUNC_11(pdo_stmt_t *VAR_3, int VAR_4, char **VAR_5, size_t *VAR_6, int *VAR_7 )
{
 pdo_pgsql_stmt *VAR_8 = (pdo_pgsql_stmt*)VAR_3->driver_data;
 struct pdo_column_data *VAR_9 = VAR_3->columns;
 size_t VAR_10;

 if (!VAR_8->result) {
  return 0;
 }


 if (FUNC_1(VAR_8->result, VAR_8->current_row - 1, VAR_4)) {
  *VAR_5 = ((void*)0);
  *VAR_6 = 0;
 } else {
  *VAR_5 = FUNC_3(VAR_8->result, VAR_8->current_row - 1, VAR_4);
  *VAR_6 = FUNC_2(VAR_8->result, VAR_8->current_row - 1, VAR_4);

  switch (VAR_9[VAR_4].param_type) {

   case 133:
    FUNC_5(VAR_8->cols[VAR_4].intval, *VAR_5);
    *VAR_5 = (char *) &(VAR_8->cols[VAR_4].intval);
    *VAR_6 = sizeof(zend_long);
    break;

   case 135:
    VAR_8->cols[VAR_4].boolval = **VAR_5 == 't';
    *VAR_5 = (char *) &(VAR_8->cols[VAR_4].boolval);
    *VAR_6 = sizeof(zend_bool);
    break;

   case 132:
    if (VAR_8->cols[VAR_4].pgsql_type == VAR_1) {

     char *VAR_11;
     Oid VAR_12 = (Oid)FUNC_10(*VAR_5, &VAR_11, 10);
     int VAR_13 = FUNC_7(VAR_8->H->server, VAR_12, VAR_0);
     if (VAR_13 >= 0) {
      *VAR_5 = (char*)FUNC_8(&VAR_3->database_object_handle, VAR_13, VAR_12);
      *VAR_6 = 0;
      return *VAR_5 ? 1 : 0;
     }
     *VAR_5 = ((void*)0);
     *VAR_6 = 0;
     return 0;
    } else {
     char *VAR_14 = (char *)FUNC_4((unsigned char *)*VAR_5, &VAR_10);
     if (!VAR_14) {

      *VAR_6 = 0;
      return 0;
     }
     if (!VAR_10) {

      *VAR_5 = (char *)FUNC_9(VAR_2, "", 0);
      FUNC_0(VAR_14);
      *VAR_6 = 0;
     } else {
      *VAR_5 = FUNC_6(VAR_14, VAR_10);
      FUNC_0(VAR_14);
      *VAR_6 = VAR_10;
      *VAR_7 = 1;
     }
    }
    break;
   case 131:
   case 129:
   case 130:
   case 134:
   case 128:
   default:
    break;
  }
 }

 return 1;
}
