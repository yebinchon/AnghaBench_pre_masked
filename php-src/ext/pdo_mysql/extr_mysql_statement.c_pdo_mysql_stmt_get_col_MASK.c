
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_11__ {int column_count; int error_code; scalar_t__ driver_data; } ;
typedef TYPE_4__ pdo_stmt_t ;
struct TYPE_12__ {char** current_data; size_t* out_length; size_t* current_lengths; TYPE_3__* bound_result; scalar_t__* out_null; TYPE_7__* stmt; int result; } ;
typedef TYPE_5__ pdo_mysql_stmt ;
struct TYPE_13__ {TYPE_2__* data; } ;
struct TYPE_10__ {char* buffer; size_t buffer_length; } ;
struct TYPE_9__ {TYPE_1__* result_bind; } ;
struct TYPE_8__ {int zv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,TYPE_7__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(pdo_stmt_t *VAR_0, int VAR_1, char **VAR_2, size_t *VAR_3, int *VAR_4)
{
 pdo_mysql_stmt *VAR_5 = (pdo_mysql_stmt*)VAR_0->driver_data;

 FUNC_0("pdo_mysql_stmt_get_col");
 FUNC_1("stmt=%p", VAR_5->stmt);
 if (!VAR_5->result) {
  FUNC_2(0);
 }


 if (!VAR_5->stmt) {
  if (VAR_5->current_data == ((void*)0) || !VAR_5->result) {
   FUNC_2(0);
  }
 }

 if (VAR_1 >= VAR_0->column_count) {

  FUNC_2(0);
 }
 if (VAR_5->stmt) {
  if (VAR_5->out_null[VAR_1]) {
   *VAR_2 = ((void*)0);
   *VAR_3 = 0;
   FUNC_2(1);
  }
  *VAR_2 = VAR_5->bound_result[VAR_1].buffer;
  if (VAR_5->out_length[VAR_1] > VAR_5->bound_result[VAR_1].buffer_length) {

   FUNC_4(VAR_0->error_code, "01004");
   VAR_5->out_length[VAR_1] = VAR_5->bound_result[VAR_1].buffer_length;
   *VAR_3 = VAR_5->out_length[VAR_1];
   FUNC_2(0);
  }
  *VAR_3 = VAR_5->out_length[VAR_1];
  FUNC_2(1);
 }

 *VAR_2 = VAR_5->current_data[VAR_1];
 *VAR_3 = VAR_5->current_lengths[VAR_1];
 FUNC_2(1);
}
