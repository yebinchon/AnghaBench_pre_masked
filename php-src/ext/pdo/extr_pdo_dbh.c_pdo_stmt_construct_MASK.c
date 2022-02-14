
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_11__ {void* object; int called_scope; scalar_t__ function_handler; } ;
typedef TYPE_1__ zend_fcall_info_cache ;
struct TYPE_12__ {int size; int no_separation; int * params; scalar_t__ param_count; int * retval; void* object; int function_name; } ;
typedef TYPE_2__ zend_fcall_info ;
typedef int zend_execute_data ;
struct TYPE_13__ {scalar_t__ constructor; } ;
typedef TYPE_3__ zend_class_entry ;
struct TYPE_14__ {int query_stringlen; int query_string; } ;
typedef TYPE_4__ pdo_stmt_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (void*,int *,int *,int *) ;
 int * FUNC_8 (char*,int,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(zend_execute_data *VAR_1, pdo_stmt_t *VAR_2, zval *VAR_3, zend_class_entry *VAR_4, zval *VAR_5)
{
 zval VAR_6;
 zend_string *VAR_7;

 FUNC_0(&VAR_6, VAR_2->query_string, VAR_2->query_stringlen);
 VAR_7 = FUNC_8("queryString", sizeof("queryString") - 1, 0);
 FUNC_7(FUNC_3(VAR_3), VAR_7, &VAR_6, ((void*)0));
 FUNC_10(&VAR_6);
 FUNC_9(VAR_7, 0);

 if (VAR_4->constructor) {
  zend_fcall_info VAR_8;
  zend_fcall_info_cache VAR_9;
  zval VAR_10;

  VAR_8.size = sizeof(zend_fcall_info);
  FUNC_1(&VAR_8.function_name);
  VAR_8.object = FUNC_3(VAR_3);
  VAR_8.retval = &VAR_10;
  VAR_8.param_count = 0;
  VAR_8.params = ((void*)0);
  VAR_8.no_separation = 1;

  FUNC_5(&VAR_8, VAR_5);

  VAR_9.function_handler = VAR_4->constructor;
  VAR_9.called_scope = FUNC_2(VAR_3);
  VAR_9.object = FUNC_3(VAR_3);

  if (FUNC_4(&VAR_8, &VAR_9) != VAR_0) {
   FUNC_10(&VAR_10);
  }

  FUNC_6(&VAR_8, 1);
 }
}
