
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_10__ {int * handlers; } ;
struct TYPE_7__ {TYPE_3__* root; } ;
struct TYPE_8__ {TYPE_1__ ptr; scalar_t__ children; int * parent; } ;
struct TYPE_9__ {int largest_used_integer_key; TYPE_4__ std; TYPE_2__ node; int values; int retval; } ;
typedef TYPE_3__ zend_generator ;
typedef int zend_class_entry ;


 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_4__*,int *) ;

__attribute__((used)) static zend_object *FUNC_4(zend_class_entry *VAR_1)
{
 zend_generator *VAR_2;

 VAR_2 = FUNC_1(sizeof(zend_generator));
 FUNC_2(VAR_2, 0, sizeof(zend_generator));


 VAR_2->largest_used_integer_key = -1;

 FUNC_0(&VAR_2->retval);
 FUNC_0(&VAR_2->values);


 VAR_2->node.parent = ((void*)0);
 VAR_2->node.children = 0;
 VAR_2->node.ptr.root = VAR_2;

 FUNC_3(&VAR_2->std, VAR_1);
 VAR_2->std.handlers = &VAR_0;

 return (zend_object*)VAR_2;
}
