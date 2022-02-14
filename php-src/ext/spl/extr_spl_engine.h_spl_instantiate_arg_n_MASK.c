
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
struct TYPE_10__ {int function_name; } ;
struct TYPE_11__ {TYPE_1__ common; } ;
typedef TYPE_2__ zend_function ;
struct TYPE_12__ {void* object; TYPE_5__* called_scope; TYPE_2__* function_handler; } ;
typedef TYPE_3__ zend_fcall_info_cache ;
struct TYPE_13__ {int size; int param_count; int no_separation; int * params; int * retval; void* object; int function_name; } ;
typedef TYPE_4__ zend_fcall_info ;
struct TYPE_14__ {TYPE_2__* constructor; } ;
typedef TYPE_5__ zend_class_entry ;


 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static inline void FUNC_4(zend_class_entry *VAR_0, zval *VAR_1, int VAR_2, zval *VAR_3)
{
 zend_function *VAR_4 = VAR_0->constructor;
 zend_fcall_info VAR_5;
 zend_fcall_info_cache VAR_6;
 zval VAR_7;

 FUNC_2(VAR_0, VAR_1);

 VAR_5.size = sizeof(zend_fcall_info);
 FUNC_0(&VAR_5.function_name, VAR_4->common.function_name);
 VAR_5.object = FUNC_1(VAR_1);
 VAR_5.retval = &VAR_7;
 VAR_5.param_count = VAR_2;
 VAR_5.params = VAR_3;
 VAR_5.no_separation = 1;

 VAR_6.function_handler = VAR_4;
 VAR_6.called_scope = VAR_0;
 VAR_6.object = FUNC_1(VAR_1);

 FUNC_3(&VAR_5, &VAR_6);
}
