
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
struct TYPE_9__ {TYPE_2__* funcs; } ;
typedef TYPE_3__ zend_object_iterator ;
struct TYPE_10__ {size_t level; TYPE_1__* iterators; } ;
typedef TYPE_4__ spl_recursive_it_object ;
struct TYPE_8__ {int * (* get_current_data ) (TYPE_3__*) ;} ;
struct TYPE_7__ {TYPE_3__* iterator; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(spl_recursive_it_object *VAR_2, zval *VAR_3)
{
 zend_object_iterator *VAR_4 = VAR_2->iterators[VAR_2->level].iterator;
 zval *VAR_5;

 VAR_5 = VAR_4->funcs->get_current_data(VAR_4);
 if (VAR_5) {
  FUNC_3(VAR_5);

  if (FUNC_4(VAR_5) == VAR_0) {
   FUNC_0(FUNC_1(VAR_1));
  } else {
   FUNC_2(VAR_3, VAR_5);
   FUNC_5(VAR_3);
  }
 }
}
