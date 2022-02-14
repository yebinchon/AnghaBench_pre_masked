
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_uchar ;
typedef int zend_bool ;
typedef scalar_t__ enum_func_status ;
struct TYPE_8__ {TYPE_2__* data; } ;
struct TYPE_6__ {int* buffer; size_t length; } ;
struct TYPE_7__ {scalar_t__ param_count; TYPE_1__ execute_cmd_buffer; scalar_t__ flags; int stmt_id; } ;
typedef TYPE_2__ MYSQLND_STMT_DATA ;
typedef TYPE_3__ MYSQLND_STMT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int*,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__* const,int**,int**,size_t*) ;

enum_func_status
FUNC_6(MYSQLND_STMT * const VAR_1, zend_uchar ** VAR_2, size_t *VAR_3, zend_bool * VAR_4)
{
 MYSQLND_STMT_DATA * VAR_5 = VAR_1->data;
 zend_uchar *VAR_6 = VAR_5->execute_cmd_buffer.buffer,
    *VAR_7 = VAR_5->execute_cmd_buffer.buffer;
 size_t VAR_8 = VAR_5->execute_cmd_buffer.length;
 enum_func_status VAR_9 = VAR_0;

 FUNC_0("mysqlnd_stmt_execute_generate_request");

 FUNC_4(VAR_6, VAR_5->stmt_id);
 VAR_6 += 4;


 FUNC_3(VAR_6, (zend_uchar) VAR_5->flags);
 VAR_6++;


 FUNC_4(VAR_6, 0);

 FUNC_3(VAR_6, 1);
 VAR_6+= 4;

 if (VAR_5->param_count != 0) {
     VAR_9 = FUNC_5(VAR_1, &VAR_7, &VAR_6, &VAR_8);
 }

 *VAR_4 = (VAR_7 != VAR_5->execute_cmd_buffer.buffer);
 *VAR_3 = (VAR_6 - VAR_7);
 *VAR_2 = VAR_7;
 FUNC_1("ret=%s", VAR_9 == VAR_0? "PASS":"FAIL");
 FUNC_2(VAR_9);
}
