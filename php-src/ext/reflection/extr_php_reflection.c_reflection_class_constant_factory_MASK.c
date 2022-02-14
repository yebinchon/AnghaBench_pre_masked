
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_7__ {int * name; } ;
typedef TYPE_1__ zend_class_entry ;
struct TYPE_8__ {int ce; } ;
typedef TYPE_2__ zend_class_constant ;
struct TYPE_9__ {scalar_t__ ignore_visibility; int ce; int ref_type; TYPE_2__* ptr; } ;
typedef TYPE_3__ reflection_object ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 TYPE_3__* FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(zend_class_entry *VAR_2, zend_string *VAR_3, zend_class_constant *VAR_4, zval *VAR_5)
{
 reflection_object *VAR_6;

 FUNC_2(VAR_1, VAR_5);
 VAR_6 = FUNC_1(VAR_5);
 VAR_6->ptr = VAR_4;
 VAR_6->ref_type = VAR_0;
 VAR_6->ce = VAR_4->ce;
 VAR_6->ignore_visibility = 0;

 FUNC_0(FUNC_4(VAR_5), VAR_3);
 FUNC_0(FUNC_3(VAR_5), VAR_2->name);
}
