
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * handlers; } ;
struct TYPE_6__ {TYPE_2__ std; } ;
typedef TYPE_1__ zend_weakref ;
typedef TYPE_2__ zend_object ;
typedef int zend_class_entry ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static zend_object* FUNC_2(zend_class_entry *VAR_2) {
 zend_weakref *VAR_3 = FUNC_0(sizeof(zend_weakref), VAR_0);

 FUNC_1(&VAR_3->std, VAR_0);

 VAR_3->std.handlers = &VAR_1;

 return &VAR_3->std;
}
