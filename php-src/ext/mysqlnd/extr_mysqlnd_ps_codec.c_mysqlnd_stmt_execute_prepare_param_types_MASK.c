
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int enum_func_status ;
struct TYPE_5__ {unsigned int param_count; int send_types_to_server; int error_info; TYPE_1__* param_bind; } ;
struct TYPE_4__ {short type; int zv; } ;
typedef TYPE_2__ MYSQLND_STMT_DATA ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 short const VAR_2 ;
 short const VAR_3 ;
 short const VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 double VAR_6 ;
 double VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int **,int *,unsigned int,unsigned int) ;
 double FUNC_10 (int *) ;

__attribute__((used)) static enum_func_status
FUNC_11(MYSQLND_STMT_DATA * VAR_8, zval ** VAR_9, int * VAR_10)
{
 unsigned int VAR_11;
 FUNC_0("mysqlnd_stmt_execute_prepare_param_types");
 for (VAR_11 = 0; VAR_11 < VAR_8->param_count; VAR_11++) {
  const short VAR_12 = VAR_8->param_bind[VAR_11].type;
  zval *VAR_13 = &VAR_8->param_bind[VAR_11].zv;

  FUNC_3(VAR_13);
  if (!FUNC_4(VAR_13) && (VAR_12 == VAR_2 || VAR_12 == VAR_3 || VAR_12 == VAR_4)) {

   if (FUNC_6(VAR_13) != VAR_1 &&
    VAR_5 != FUNC_9(VAR_9, VAR_13, VAR_8->param_count, VAR_11))
   {
    FUNC_2(VAR_8->error_info);
    goto end;
   }




   if (FUNC_6(VAR_13) != VAR_1) {
    zval *VAR_14 = (*VAR_9 && !FUNC_5((*VAR_9)[VAR_11]))? &(*VAR_9)[VAR_11]: VAR_13;





    double VAR_15 = FUNC_10(VAR_14);






    if (VAR_15 > VAR_6 || VAR_15 < VAR_7) {
     VAR_8->send_types_to_server = *VAR_10 = 1;
     FUNC_8(VAR_14);
    } else {
     FUNC_7(VAR_14);
    }
   }
  }
 }
 FUNC_1(VAR_5);
end:
 FUNC_1(VAR_0);
}
