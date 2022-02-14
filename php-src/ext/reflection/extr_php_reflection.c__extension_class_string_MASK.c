
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_12__ {int name; } ;
typedef TYPE_4__ zend_module_entry ;
struct TYPE_10__ {TYPE_1__* module; } ;
struct TYPE_11__ {TYPE_2__ internal; } ;
struct TYPE_13__ {scalar_t__ type; int name; TYPE_3__ info; } ;
typedef TYPE_5__ zend_class_entry ;
typedef int smart_str ;
struct TYPE_9__ {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_5__*,int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(zend_class_entry *VAR_1, zend_string *VAR_2, smart_str *VAR_3, char *VAR_4, zend_module_entry *VAR_5, int *VAR_6)
{
 if (VAR_1->type == VAR_0 && VAR_1->info.internal.module && !FUNC_2(VAR_1->info.internal.module->name, VAR_5->name)) {

  if (FUNC_3(VAR_1->name, VAR_2)) {
   FUNC_1(VAR_3, "\n");
   FUNC_0(VAR_3, VAR_1, ((void*)0), VAR_4);
   (*VAR_6)++;
  }
 }
}
