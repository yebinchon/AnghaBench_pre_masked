
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_class_entry ;
struct TYPE_8__ {TYPE_1__ std; } ;
typedef TYPE_2__ pdo_stmt_t ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;

zend_object *FUNC_3(zend_class_entry *VAR_1)
{
 pdo_stmt_t *VAR_2;

 VAR_2 = FUNC_1(sizeof(pdo_stmt_t), VAR_1);
 FUNC_2(&VAR_2->std, VAR_1);
 FUNC_0(&VAR_2->std, VAR_1);

 VAR_2->std.handlers = &VAR_0;

 return &VAR_2->std;
}
