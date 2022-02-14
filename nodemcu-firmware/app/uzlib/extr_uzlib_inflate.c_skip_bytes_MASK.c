
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* get_byte ) () ;} ;
typedef TYPE_1__ UZLIB_DATA ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(UZLIB_DATA *VAR_0, int VAR_1) {
  if (VAR_1)
    while (VAR_1--) (void) VAR_0->get_byte();
  else
    while (VAR_0->get_byte()) {}
}
