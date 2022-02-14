
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
typedef TYPE_1__ zend_object_iterator ;
struct TYPE_7__ {int flags; scalar_t__ current; } ;
typedef TYPE_2__ spl_fixedarray_object ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(zend_object_iterator *VAR_1)
{
 spl_fixedarray_object *VAR_2 = FUNC_0(&VAR_1->data);

 if (VAR_2->flags & VAR_0) {
  FUNC_1(VAR_1);
 } else {
  VAR_2->current = 0;
 }
}
