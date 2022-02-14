
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_4__ {int zo; TYPE_3__* ptr; } ;
typedef TYPE_1__ finfo_object ;
struct TYPE_5__ {int magic; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(zend_object *VAR_0)
{
 finfo_object *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->ptr) {
  FUNC_1(VAR_1->ptr->magic);
  FUNC_0(VAR_1->ptr);
 }

 FUNC_3(&VAR_1->zo);
}
