
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_class_entry ;
typedef int pdo_dbh_t ;
struct TYPE_10__ {TYPE_1__ std; TYPE_8__* inner; } ;
typedef TYPE_2__ pdo_dbh_object_t ;
struct TYPE_11__ {int def_stmt_ce; } ;


 TYPE_8__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;

zend_object *FUNC_5(zend_class_entry *VAR_2)
{
 pdo_dbh_object_t *VAR_3;

 VAR_3 = FUNC_3(sizeof(pdo_dbh_object_t), VAR_2);
 FUNC_4(&VAR_3->std, VAR_2);
 FUNC_1(&VAR_3->std, VAR_2);
 FUNC_2(&VAR_3->std);
 VAR_3->inner = FUNC_0(1, sizeof(pdo_dbh_t));
 VAR_3->inner->def_stmt_ce = VAR_1;

 VAR_3->std.handlers = &VAR_0;

 return &VAR_3->std;
}
