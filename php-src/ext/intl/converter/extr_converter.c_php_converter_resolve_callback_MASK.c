
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_fcall_info_cache ;
struct TYPE_4__ {int function_name; } ;
typedef TYPE_1__ zend_fcall_info ;
typedef int php_converter_object ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,char const*) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ,char*,char*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int ,TYPE_1__*,int *,int *,char**) ;

__attribute__((used)) static void FUNC_10(zval *VAR_2,
                                           php_converter_object *VAR_3,
                                           const char *VAR_4,
                                           zend_fcall_info *VAR_5,
                                           zend_fcall_info_cache *VAR_6) {
 char *VAR_7 = ((void*)0);
 zval VAR_8;

 FUNC_5(&VAR_8);
 FUNC_1(VAR_2);
 FUNC_4(&VAR_8, 0, VAR_2);
 FUNC_3(&VAR_8, 1, VAR_4);
 if (FUNC_9(&VAR_8, 0, VAR_5, VAR_6, ((void*)0), &VAR_7) == VAR_0) {
  FUNC_7(VAR_3, VAR_1, "Error setting converter callback: %s", VAR_7);
 }
 FUNC_8(FUNC_2(VAR_8));
 FUNC_0(&VAR_5->function_name);
 if (VAR_7) {
  FUNC_6(VAR_7);
 }
}
