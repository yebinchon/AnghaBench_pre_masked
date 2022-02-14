
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_9__ {TYPE_1__* scope; int function_name; } ;
struct TYPE_10__ {TYPE_2__ common; } ;
typedef TYPE_3__ zend_function ;
typedef int zend_class_entry ;
struct TYPE_11__ {int obj; int * ce; int ref_type; TYPE_3__* ptr; } ;
typedef TYPE_4__ reflection_object ;
struct TYPE_8__ {int name; scalar_t__ trait_aliases; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_4__* FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_9(zend_class_entry *VAR_2, zend_function *VAR_3, zval *VAR_4, zval *VAR_5)
{
 reflection_object *VAR_6;

 FUNC_5(VAR_1, VAR_5);
 VAR_6 = FUNC_4(VAR_5);
 VAR_6->ptr = VAR_3;
 VAR_6->ref_type = VAR_0;
 VAR_6->ce = VAR_2;
 if (VAR_4) {
  FUNC_2(VAR_4);
  FUNC_0(&VAR_6->obj, FUNC_3(VAR_4));
 }

 FUNC_1(FUNC_7(VAR_5),
  (VAR_3->common.scope && VAR_3->common.scope->trait_aliases)
   ? FUNC_8(VAR_2, VAR_3) : VAR_3->common.function_name);
 FUNC_1(FUNC_6(VAR_5), VAR_3->common.scope->name);
}
