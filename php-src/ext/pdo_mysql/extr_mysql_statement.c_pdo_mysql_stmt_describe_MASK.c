
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pdo_column_data {int param_type; int maxlen; int precision; scalar_t__ name; } ;
struct TYPE_8__ {int column_count; struct pdo_column_data* columns; scalar_t__ driver_data; } ;
typedef TYPE_3__ pdo_stmt_t ;
struct TYPE_9__ {scalar_t__ stmt; TYPE_2__* fields; TYPE_1__* H; int result; } ;
typedef TYPE_4__ pdo_mysql_stmt ;
struct TYPE_7__ {int length; int decimals; int name_length; int name; int table; } ;
struct TYPE_6__ {scalar_t__ fetch_table_names; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(pdo_stmt_t *VAR_2, int VAR_3)
{
 pdo_mysql_stmt *VAR_4 = (pdo_mysql_stmt*)VAR_2->driver_data;
 struct pdo_column_data *VAR_5 = VAR_2->columns;
 int VAR_6;

 FUNC_0("pdo_mysql_stmt_describe");
 FUNC_1("stmt=%p", VAR_4->stmt);
 if (!VAR_4->result) {
  FUNC_2(0);
 }

 if (VAR_3 >= VAR_2->column_count) {

  FUNC_2(0);
 }




 if (VAR_5[0].name) {
  FUNC_2(1);
 }
 for (VAR_6 = 0; VAR_6 < VAR_2->column_count; VAR_6++) {

  if (VAR_4->H->fetch_table_names) {
   VAR_5[VAR_6].name = FUNC_3(0, "%s.%s", VAR_4->fields[VAR_6].table, VAR_4->fields[VAR_6].name);
  } else {
   VAR_5[VAR_6].name = FUNC_4(VAR_4->fields[VAR_6].name, VAR_4->fields[VAR_6].name_length, 0);
  }

  VAR_5[VAR_6].precision = VAR_4->fields[VAR_6].decimals;
  VAR_5[VAR_6].maxlen = VAR_4->fields[VAR_6].length;






  {
   VAR_5[VAR_6].param_type = VAR_0;
  }
 }
 FUNC_2(1);
}
