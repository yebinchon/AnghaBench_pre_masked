
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_object ;
typedef scalar_t__ zend_long ;
struct TYPE_4__ {int dimensions; TYPE_1__* obj; } ;
typedef TYPE_2__ php_com_saproxy ;
struct TYPE_3__ {int v; } ;
typedef scalar_t__ LONG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(zend_object *VAR_2, zend_long *VAR_3)
{
 php_com_saproxy *VAR_4 = (php_com_saproxy*) VAR_2;
 LONG VAR_5, VAR_6;

 if (!FUNC_3(&VAR_4->obj->v)) {
  return VAR_0;
 }

 FUNC_0(FUNC_2(&VAR_4->obj->v), VAR_4->dimensions, &VAR_6);
 FUNC_1(FUNC_2(&VAR_4->obj->v), VAR_4->dimensions, &VAR_5);

 *VAR_3 = VAR_5 - VAR_6 + 1;

 return VAR_1;
}
