
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* callback_arg; int * callback; } ;
typedef int * ASYNC_callback_fn ;
typedef TYPE_1__ ASYNC_WAIT_CTX ;



int FUNC_0(ASYNC_WAIT_CTX *VAR_0,
                                ASYNC_callback_fn *VAR_1,
                                void **VAR_2)
{
      if (VAR_0->callback == ((void*)0))
          return 0;

      *VAR_1 = VAR_0->callback;
      *VAR_2 = VAR_0->callback_arg;
      return 1;
}
