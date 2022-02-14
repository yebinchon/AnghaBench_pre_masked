
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_long ;
struct pdo_column_data {void* param_type; int name; int precision; int maxlen; } ;
struct pdo_bound_param_data {int param_type; } ;
struct TYPE_6__ {int bound_columns; struct pdo_column_data* columns; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_stmt_t ;
struct TYPE_7__ {TYPE_1__* cols; int result; } ;
typedef TYPE_3__ pdo_pgsql_stmt ;
struct TYPE_5__ {int pgsql_type; } ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 char* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*) ;
 struct pdo_bound_param_data* FUNC_6 (int ,int ) ;
 struct pdo_bound_param_data* FUNC_7 (int ,int) ;
 int FUNC_8 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_9(pdo_stmt_t *VAR_4, int VAR_5)
{
 pdo_pgsql_stmt *VAR_6 = (pdo_pgsql_stmt*)VAR_4->driver_data;
 struct pdo_column_data *VAR_7 = VAR_4->columns;
 struct pdo_bound_param_data *VAR_8;
 char *VAR_9;

 if (!VAR_6->result) {
  return 0;
 }

 VAR_9 = FUNC_2(VAR_6->result, VAR_5);
 VAR_7[VAR_5].name = FUNC_8(VAR_9, FUNC_5(VAR_9), 0);
 VAR_7[VAR_5].maxlen = FUNC_3(VAR_6->result, VAR_5);
 VAR_7[VAR_5].precision = FUNC_1(VAR_6->result, VAR_5);
 VAR_6->cols[VAR_5].pgsql_type = FUNC_4(VAR_6->result, VAR_5);

 switch (VAR_6->cols[VAR_5].pgsql_type) {

  case 133:
   VAR_7[VAR_5].param_type = VAR_0;
   break;

  case 128:

   if (VAR_4->bound_columns && (
     (VAR_8 = FUNC_7(VAR_4->bound_columns, VAR_5)) != ((void*)0) ||
     (VAR_8 = FUNC_6(VAR_4->bound_columns, VAR_7[VAR_5].name)) != ((void*)0))) {

    if (FUNC_0(VAR_8->param_type) == VAR_2) {
     VAR_7[VAR_5].param_type = VAR_2;
     break;
    }
   }
   VAR_7[VAR_5].param_type = VAR_1;
   break;

  case 131:
  case 130:
   VAR_7[VAR_5].param_type = VAR_1;
   break;

  case 129:
   if (sizeof(zend_long)>=8) {
    VAR_7[VAR_5].param_type = VAR_1;
   } else {
    VAR_7[VAR_5].param_type = VAR_3;
   }
   break;

  case 132:
   VAR_7[VAR_5].param_type = VAR_2;
   break;

  default:
   VAR_7[VAR_5].param_type = VAR_3;
 }

 return 1;
}
