
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_4__ {scalar_t__ ptr; } ;
typedef TYPE_1__ mysqli_object ;
struct TYPE_5__ {int * ptr; scalar_t__ info; } ;
typedef int MYSQLI_WARNING ;
typedef TYPE_2__ MYSQLI_RESOURCE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(zend_object *VAR_0)
{
 mysqli_object *VAR_1 = FUNC_2(VAR_0);
 MYSQLI_RESOURCE *VAR_2 = (MYSQLI_RESOURCE *)VAR_1->ptr;

 if (VAR_2 && VAR_2->ptr) {
  FUNC_1((MYSQLI_WARNING *)VAR_2->info);
  VAR_2->ptr = ((void*)0);
 }
 FUNC_0(VAR_0);
}
