
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ is_available; int size; } ;
typedef TYPE_1__* MCB_P ;
typedef int MCB ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(void *VAR_3) {

 MCB_P VAR_4 = (MCB_P)VAR_3;
 VAR_4--;

 if (VAR_4->is_available != VAR_0) {
  VAR_2--;
  VAR_4->is_available = VAR_0;
  VAR_1 -= (VAR_4->size - sizeof (MCB));
  }
}
