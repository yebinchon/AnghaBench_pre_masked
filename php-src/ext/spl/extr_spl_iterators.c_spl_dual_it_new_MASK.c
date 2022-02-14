
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_class_entry ;
struct TYPE_8__ {TYPE_1__ std; int dit_type; } ;
typedef TYPE_2__ spl_dual_it_object ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static zend_object *FUNC_3(zend_class_entry *VAR_2)
{
 spl_dual_it_object *VAR_3;

 VAR_3 = FUNC_1(sizeof(spl_dual_it_object), VAR_2);
 VAR_3->dit_type = VAR_0;

 FUNC_2(&VAR_3->std, VAR_2);
 FUNC_0(&VAR_3->std, VAR_2);

 VAR_3->std.handlers = &VAR_1;
 return &VAR_3->std;
}
