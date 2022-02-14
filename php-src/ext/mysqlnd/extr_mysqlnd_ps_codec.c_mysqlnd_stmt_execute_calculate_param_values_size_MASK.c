
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int enum_func_status ;
struct TYPE_5__ {unsigned int param_count; int error_info; TYPE_1__* param_bind; } ;
struct TYPE_4__ {int type; int flags; int zv; } ;
typedef TYPE_2__ MYSQLND_STMT_DATA ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;





 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 size_t FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int **,int *,unsigned int,unsigned int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static enum_func_status
FUNC_13(MYSQLND_STMT_DATA * VAR_6, zval ** VAR_7, size_t * VAR_8)
{
 unsigned int VAR_9;
 FUNC_0("mysqlnd_stmt_execute_calculate_param_values_size");
 for (VAR_9 = 0; VAR_9 < VAR_6->param_count; VAR_9++) {
  unsigned short VAR_10 = 0;
  unsigned int VAR_11;
  zval *VAR_12, *VAR_13 = &VAR_6->param_bind[VAR_9].zv;

  VAR_12 = VAR_13;
  FUNC_3(VAR_13);
  if ((VAR_6->param_bind[VAR_9].type != 129 && FUNC_9(VAR_13) == VAR_2)) {
   continue;
  }

  if (FUNC_5(VAR_12)) {
   for (VAR_11 = VAR_9 + 1; VAR_11 < VAR_6->param_count; VAR_11++) {
    if (FUNC_4(VAR_6->param_bind[VAR_11].zv) && FUNC_7(VAR_6->param_bind[VAR_11].zv) == VAR_13) {

     if (!*VAR_7 || FUNC_6((*VAR_7)[VAR_9])) {
      if (VAR_5 != FUNC_11(VAR_7, VAR_13, VAR_6->param_count, VAR_9)) {
       FUNC_2(VAR_6->error_info);
       goto end;
      }
     }
     break;
    }
   }
  }

  switch (VAR_6->param_bind[VAR_9].type) {
   case 132:
    *VAR_8 += 8;
    if (FUNC_9(VAR_13) != VAR_1) {
     if (!*VAR_7 || FUNC_6((*VAR_7)[VAR_9])) {
      if (VAR_5 != FUNC_11(VAR_7, VAR_13, VAR_6->param_count, VAR_9)) {
       FUNC_2(VAR_6->error_info);
       goto end;
      }
     }
    }
    break;
   case 130:
    VAR_10 = 4;

   case 131:
    {
     zval *VAR_14 = (*VAR_7 && !FUNC_6((*VAR_7)[VAR_9]))? &(*VAR_7)[VAR_9]: VAR_13;
     if (FUNC_9(VAR_14) == VAR_3) {
      goto use_string;
     }
     FUNC_10(VAR_14);
    }
    *VAR_8 += 4 + VAR_10;
    break;
   case 129:
    if (!(VAR_6->param_bind[VAR_9].flags & VAR_4)) {





     (*VAR_8)++;
    }
    break;
   case 128:
use_string:
    *VAR_8 += 8;
    if (FUNC_9(VAR_13) != VAR_3) {
     if (!*VAR_7 || FUNC_6((*VAR_7)[VAR_9])) {
      if (VAR_5 != FUNC_11(VAR_7, VAR_13, VAR_6->param_count, VAR_9)) {
       FUNC_2(VAR_6->error_info);
       goto end;
      }
     }
     VAR_13 = &((*VAR_7)[VAR_9]);
    }

    if (!FUNC_12(VAR_13)) {
     goto end;
    }
    *VAR_8 += FUNC_8(VAR_13);
    break;
  }
 }
 FUNC_1(VAR_5);
end:
 FUNC_1(VAR_0);
}
