
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; int encoding; } ;
typedef TYPE_1__ intset ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int) ;

intset *FUNC_2(void) {
    intset *VAR_1 = FUNC_1(sizeof(intset));
    VAR_1->encoding = FUNC_0(VAR_0);
    VAR_1->length = 0;
    return VAR_1;
}
