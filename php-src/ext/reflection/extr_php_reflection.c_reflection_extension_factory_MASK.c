
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct _zend_module_entry {int name; } ;
struct TYPE_3__ {int * ce; int ref_type; struct _zend_module_entry* ptr; } ;
typedef TYPE_1__ reflection_object ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,size_t) ;
 TYPE_1__* FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (char const*) ;
 struct _zend_module_entry* FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,char const*,size_t) ;
 int * FUNC_8 (size_t,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(zval *VAR_3, const char *VAR_4)
{
 reflection_object *VAR_5;
 size_t VAR_6 = FUNC_5(VAR_4);
 zend_string *VAR_7;
 struct _zend_module_entry *VAR_8;

 VAR_7 = FUNC_8(VAR_6, 0);
 FUNC_7(FUNC_0(VAR_7), VAR_4, VAR_6);
 VAR_8 = FUNC_6(&VAR_1, VAR_7);
 FUNC_9(VAR_7);
 if (!VAR_8) {
  return;
 }

 FUNC_3(VAR_2, VAR_3);
 VAR_5 = FUNC_2(VAR_3);
 VAR_5->ptr = VAR_8;
 VAR_5->ref_type = VAR_0;
 VAR_5->ce = ((void*)0);
 FUNC_1(FUNC_4(VAR_3), VAR_8->name, VAR_6);
}
