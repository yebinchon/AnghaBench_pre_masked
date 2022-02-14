
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
typedef int zend_uchar ;
typedef scalar_t__ enum_func_status ;
struct TYPE_10__ {TYPE_1__* data; } ;
struct TYPE_9__ {int param_count; int send_types_to_server; int error_info; } ;
typedef TYPE_1__ MYSQLND_STMT_DATA ;
typedef TYPE_2__ MYSQLND_STMT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,unsigned int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int **,size_t*) ;
 scalar_t__ FUNC_7 (int **,int **,size_t*,int *,size_t) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int **,int*) ;
 int FUNC_9 (TYPE_1__*,int *,int *,int **,size_t) ;
 int FUNC_10 (TYPE_1__*,int *,int **) ;
 int FUNC_11 (TYPE_1__*,int *) ;

__attribute__((used)) static enum_func_status
FUNC_12(MYSQLND_STMT * VAR_2, zend_uchar **VAR_3, zend_uchar **VAR_4, size_t *VAR_5 )
{
 MYSQLND_STMT_DATA * VAR_6 = VAR_2->data;
 zend_uchar * VAR_7 = *VAR_3;
 size_t VAR_8 = 0;
 zval *VAR_9 = ((void*)0);
 enum_func_status VAR_10 = VAR_0;
 int VAR_11 = 0;
 size_t VAR_12;

 FUNC_0("mysqlnd_stmt_execute_store_params");

 {
  unsigned int VAR_13 = (VAR_6->param_count + 7) / 8;
  if (VAR_0 == FUNC_7(VAR_3, VAR_4, VAR_5, VAR_7, VAR_13)) {
   FUNC_3(VAR_6->error_info);
   goto end;
  }

  VAR_12 = *VAR_4 - *VAR_3;
  FUNC_5(*VAR_4, 0, VAR_13);
  *VAR_4 += VAR_13;
 }
 if (VAR_0 == FUNC_8(VAR_6, &VAR_9, &VAR_11)) {
  goto end;
 }

 FUNC_4(*VAR_4, VAR_6->send_types_to_server);
 (*VAR_4)++;

 if (VAR_6->send_types_to_server) {
  if (VAR_0 == FUNC_7(VAR_3, VAR_4, VAR_5, VAR_7, VAR_6->param_count * 2)) {
   FUNC_3(VAR_6->error_info);
   goto end;
  }
  FUNC_10(VAR_6, VAR_9, VAR_4);
 }

 VAR_6->send_types_to_server = VAR_11;



 if (VAR_0 == FUNC_6(VAR_6, &VAR_9, &VAR_8)) {
  goto end;
 }


 if (VAR_0 == FUNC_7(VAR_3, VAR_4, VAR_5, VAR_7, VAR_8)) {
  FUNC_3(VAR_6->error_info);
  goto end;
 }


 FUNC_9(VAR_6, VAR_9, *VAR_3, VAR_4, VAR_12);

 VAR_10 = VAR_1;
end:
 FUNC_11(VAR_6, VAR_9);

 FUNC_1("ret=%s", VAR_10 == VAR_1? "PASS":"FAIL");
 FUNC_2(VAR_10);
}
