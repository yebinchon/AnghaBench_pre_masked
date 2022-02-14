
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ refcount; int object; int name_to_dispid; int dispid_to_name; int * res; } ;
typedef TYPE_2__ php_dispatchex ;
struct TYPE_8__ {TYPE_1__* name; } ;
struct TYPE_6__ {int val; } ;
typedef int IUnknown ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(php_dispatchex *VAR_1)
{

 if (FUNC_0(VAR_0)) {
  FUNC_6("destroying COM wrapper for PHP object %p (name:unknown)\n", FUNC_4(VAR_1->object));
 } else {
  FUNC_6("destroying COM wrapper for PHP object %p (name:%s)\n", FUNC_4(VAR_1->object), FUNC_5(VAR_1->object)->name->val);
 }

 VAR_1->res = ((void*)0);

 if (VAR_1->refcount > 0)
  FUNC_1((IUnknown*)VAR_1, 0);

 FUNC_7(VAR_1->dispid_to_name);
 FUNC_7(VAR_1->name_to_dispid);
 FUNC_3(VAR_1->dispid_to_name);
 FUNC_3(VAR_1->name_to_dispid);

 FUNC_8(&VAR_1->object);

 FUNC_2(VAR_1);
}
