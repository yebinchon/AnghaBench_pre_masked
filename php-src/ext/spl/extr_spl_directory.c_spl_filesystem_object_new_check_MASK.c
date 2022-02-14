
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_class_entry ;
struct TYPE_6__ {TYPE_1__ std; } ;
typedef TYPE_2__ spl_filesystem_object ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static zend_object *FUNC_2(zend_class_entry *VAR_1)
{
 spl_filesystem_object *VAR_2 = FUNC_0(FUNC_1(VAR_1));
 VAR_2->std.handlers = &VAR_0;
 return &VAR_2->std;
}
