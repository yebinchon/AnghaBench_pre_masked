
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int closure; TYPE_3__* func_ptr; int obj; } ;
typedef TYPE_2__ autoload_func_info ;
struct TYPE_5__ {int fn_flags; int function_name; } ;
struct TYPE_7__ {TYPE_1__ common; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(zval *VAR_1)
{
 autoload_func_info *VAR_2 = (autoload_func_info*)FUNC_2(VAR_1);
 if (!FUNC_1(VAR_2->obj)) {
  FUNC_6(&VAR_2->obj);
 }
 if (VAR_2->func_ptr &&
  FUNC_0(VAR_2->func_ptr->common.fn_flags & VAR_0)) {
  FUNC_5(VAR_2->func_ptr->common.function_name, 0);
  FUNC_4(VAR_2->func_ptr);
 }
 if (!FUNC_1(VAR_2->closure)) {
  FUNC_6(&VAR_2->closure);
 }
 FUNC_3(VAR_2);
}
