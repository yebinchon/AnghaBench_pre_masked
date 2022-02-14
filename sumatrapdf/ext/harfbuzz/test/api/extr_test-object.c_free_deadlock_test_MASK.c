
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int key; int object; TYPE_1__* klass; } ;
typedef TYPE_2__ deadlock_test_t ;
struct TYPE_3__ {int * (* get_user_data ) (int ,int *) ;} ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2 (void *VAR_0)
{
  deadlock_test_t *VAR_1 = (deadlock_test_t *) VAR_0;

  FUNC_0 (((void*)0) == VAR_1->klass->get_user_data (VAR_1->object, &VAR_1->key));
}
