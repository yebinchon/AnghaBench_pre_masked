
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_class_entry ;
typedef int php_sqlite3_free_list ;
struct TYPE_8__ {TYPE_1__ zo; int free_list; } ;
typedef TYPE_2__ php_sqlite3_db_object ;
typedef int llist_dtor_func_t ;


 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int ,int ) ;
 TYPE_2__* FUNC_2 (int,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static zend_object *FUNC_4(zend_class_entry *VAR_2)
{
 php_sqlite3_db_object *VAR_3;


 VAR_3 = FUNC_2(sizeof(php_sqlite3_db_object), VAR_2);


 FUNC_1(&(VAR_3->free_list), sizeof(php_sqlite3_free_list *), (llist_dtor_func_t)VAR_0, 0);

 FUNC_3(&VAR_3->zo, VAR_2);
 FUNC_0(&VAR_3->zo, VAR_2);

 VAR_3->zo.handlers = &VAR_1;

 return &VAR_3->zo;
}
