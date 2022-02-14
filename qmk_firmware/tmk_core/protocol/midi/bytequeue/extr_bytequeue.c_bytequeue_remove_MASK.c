
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int interrupt_setting_t ;
struct TYPE_3__ {int start; int length; } ;
typedef TYPE_1__ byteQueue_t ;
typedef int byteQueueIndex_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;

void FUNC_2(byteQueue_t* VAR_0, byteQueueIndex_t VAR_1) {
    interrupt_setting_t VAR_2 = FUNC_1();
    VAR_0->start = (VAR_0->start + VAR_1) % VAR_0->length;
    FUNC_0(VAR_2);
}
