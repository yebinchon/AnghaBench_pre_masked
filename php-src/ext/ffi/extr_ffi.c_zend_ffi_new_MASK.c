
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
struct TYPE_7__ {TYPE_1__ std; scalar_t__ persistent; int * tags; int * symbols; int * lib; } ;
typedef TYPE_2__ zend_ffi ;
typedef int zend_class_entry ;


 TYPE_2__* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static zend_object *FUNC_2(zend_class_entry *VAR_1)
{
 zend_ffi *VAR_2;

 VAR_2 = FUNC_0(sizeof(zend_ffi));

 FUNC_1(&VAR_2->std, VAR_1);
 VAR_2->std.handlers = &VAR_0;

 VAR_2->lib = ((void*)0);
 VAR_2->symbols = ((void*)0);
 VAR_2->tags = ((void*)0);
 VAR_2->persistent = 0;

 return &VAR_2->std;
}
