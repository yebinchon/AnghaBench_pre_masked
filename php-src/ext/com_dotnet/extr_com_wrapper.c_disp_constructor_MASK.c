
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int refcount; int res; int object; int * lpVtbl; int engine_thread; } ;
typedef TYPE_1__ php_dispatchex ;
struct TYPE_7__ {int name; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 TYPE_5__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int FUNC_7 (char*,int *,int ) ;
 int * FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static php_dispatchex *FUNC_9(zval *VAR_2)
{
 php_dispatchex *VAR_3 = (php_dispatchex*)FUNC_0(sizeof(php_dispatchex));
 zval *VAR_4;

 FUNC_7("constructing a COM wrapper for PHP object %p (%s)\n", VAR_2, FUNC_4(VAR_2)->name);

 if (VAR_3 == ((void*)0))
  return ((void*)0);

 FUNC_6(VAR_3, 0, sizeof(php_dispatchex));

 VAR_3->engine_thread = FUNC_1();
 VAR_3->lpVtbl = &VAR_1;
 VAR_3->refcount = 1;


 if (VAR_2) {
  FUNC_2(&VAR_3->object, VAR_2);
 } else {
  FUNC_3(&VAR_3->object);
 }

 VAR_4 = FUNC_8(VAR_3, VAR_0);
 VAR_3->res = FUNC_5(VAR_4);

 return VAR_3;
}
