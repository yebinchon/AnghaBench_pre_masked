
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_1__ POLLINFO ;


 int FUNC_0 (char*) ;

void FUNC_1(POLLINFO *VAR_0) {
    if(VAR_0->data)
        FUNC_0("POLLFD: internal error: del_callback_default() called with data pointer - possible memory leak");
}
