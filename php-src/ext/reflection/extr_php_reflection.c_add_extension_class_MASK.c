
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
struct TYPE_12__ {int name; } ;
typedef TYPE_4__ zend_module_entry ;
struct TYPE_10__ {TYPE_1__* module; } ;
struct TYPE_11__ {TYPE_2__ internal; } ;
struct TYPE_13__ {scalar_t__ type; int * name; TYPE_3__ info; } ;
typedef TYPE_5__ zend_class_entry ;
typedef scalar_t__ zend_bool ;
struct TYPE_9__ {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (TYPE_5__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void FUNC_7(zend_class_entry *VAR_1, zend_string *VAR_2, zval *VAR_3, zend_module_entry *VAR_4, zend_bool VAR_5)
{
 if (VAR_1->type == VAR_0 && VAR_1->info.internal.module && !FUNC_2(VAR_1->info.internal.module->name, VAR_4->name)) {
  zend_string *VAR_6;

  if (!FUNC_6(VAR_1->name, VAR_2)) {

   VAR_6 = VAR_2;
  } else {

   VAR_6 = VAR_1->name;
  }
  if (VAR_5) {
   zval VAR_7;
   FUNC_4(VAR_1, &VAR_7);
   FUNC_3(FUNC_0(VAR_3), VAR_6, &VAR_7);
  } else {
   FUNC_1(VAR_3, FUNC_5(VAR_6));
  }
 }
}
