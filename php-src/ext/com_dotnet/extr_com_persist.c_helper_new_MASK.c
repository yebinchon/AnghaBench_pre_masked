
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
typedef TYPE_2__ php_com_persist_helper ;


 TYPE_2__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static zend_object* FUNC_3(zend_class_entry *VAR_2)
{
 php_com_persist_helper *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3));
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));

 FUNC_2(&VAR_3->std, VAR_0);
 VAR_3->std.handlers = &VAR_1;

 return &VAR_3->std;
}
