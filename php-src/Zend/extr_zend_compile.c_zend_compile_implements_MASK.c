
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_8__ {int name; int lc_name; } ;
typedef TYPE_1__ zend_class_name ;
struct TYPE_9__ {size_t num_interfaces; TYPE_1__* interface_names; int ce_flags; } ;
typedef TYPE_2__ zend_class_entry ;
struct TYPE_10__ {int children; int ** child; } ;
typedef TYPE_3__ zend_ast_list ;
typedef int zend_ast ;
typedef size_t uint32_t ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 TYPE_3__* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

void FUNC_10(zend_ast *VAR_3)
{
 zend_ast_list *VAR_4 = FUNC_4(VAR_3);
 zend_class_entry *VAR_5 = FUNC_0(VAR_2);
 zend_class_name *VAR_6;
 uint32_t VAR_7;

 VAR_6 = FUNC_3(sizeof(zend_class_name) * VAR_4->children);

 for (VAR_7 = 0; VAR_7 < VAR_4->children; ++VAR_7) {
  zend_ast *VAR_8 = VAR_4->child[VAR_7];
  zend_string *VAR_9 = FUNC_5(VAR_8);

  if (!FUNC_7(VAR_8)) {
   FUNC_2(VAR_6);
   FUNC_6(VAR_0,
    "Cannot use '%s' as interface name as it is reserved", FUNC_1(VAR_9));
  }

  VAR_6[VAR_7].name = FUNC_8(VAR_8);
  VAR_6[VAR_7].lc_name = FUNC_9(VAR_6[VAR_7].name);
 }

 VAR_5->ce_flags |= VAR_1;
 VAR_5->num_interfaces = VAR_4->children;
 VAR_5->interface_names = VAR_6;
}
