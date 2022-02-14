
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_3__ {int zo; scalar_t__ ptr; } ;
typedef TYPE_1__ mysqli_object ;
typedef int MYSQLI_RESOURCE ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(zend_object *VAR_0)
{
 mysqli_object *VAR_1 = FUNC_1(VAR_0);
 MYSQLI_RESOURCE *VAR_2 = (MYSQLI_RESOURCE *)VAR_1->ptr;

 if (VAR_2) {
  FUNC_0(VAR_2);
 }
 FUNC_2(&VAR_1->zo);
}
