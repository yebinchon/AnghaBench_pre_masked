
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_bool ;
struct TYPE_4__ {int ar_flags; int array; } ;
typedef TYPE_1__ spl_array_object ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline zend_bool FUNC_2(spl_array_object *VAR_3)
{
 while (VAR_3->ar_flags & VAR_2) {
  VAR_3 = FUNC_0(&VAR_3->array);
 }
 return (VAR_3->ar_flags & VAR_1) || FUNC_1(VAR_3->array) == VAR_0;
}
