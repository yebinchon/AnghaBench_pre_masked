
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* buf_ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 () ;

void FUNC_1(void)
{
 VAR_1 = *(++(VAR_2->buf_ptr));

 if (VAR_1 == VAR_0) {
  VAR_1 = FUNC_0 ();
 }
}
