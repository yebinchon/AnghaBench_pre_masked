
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_10__ {TYPE_1__* ce; } ;
typedef TYPE_2__ zend_property_info ;
struct TYPE_11__ {int * name; } ;
typedef TYPE_3__ zend_class_entry ;
struct TYPE_12__ {scalar_t__ ignore_visibility; TYPE_3__* ce; int ref_type; TYPE_5__* ptr; } ;
typedef TYPE_4__ reflection_object ;
struct TYPE_13__ {int unmangled_name; TYPE_2__* prop; } ;
typedef TYPE_5__ property_reference ;
struct TYPE_9__ {int * name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 TYPE_4__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(zend_class_entry *VAR_2, zend_string *VAR_3, zend_property_info *VAR_4, zval *VAR_5)
{
 reflection_object *VAR_6;
 property_reference *VAR_7;

 FUNC_3(VAR_1, VAR_5);
 VAR_6 = FUNC_1(VAR_5);
 VAR_7 = (property_reference*) FUNC_2(sizeof(property_reference));
 VAR_7->prop = VAR_4;
 VAR_7->unmangled_name = FUNC_6(VAR_3);
 VAR_6->ptr = VAR_7;
 VAR_6->ref_type = VAR_0;
 VAR_6->ce = VAR_2;
 VAR_6->ignore_visibility = 0;
 FUNC_0(FUNC_5(VAR_5), VAR_3);
 FUNC_0(FUNC_4(VAR_5), VAR_4 ? VAR_4->ce->name : VAR_2->name);
}
