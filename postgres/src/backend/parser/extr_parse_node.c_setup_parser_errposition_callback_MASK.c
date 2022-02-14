
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* previous; void* arg; int callback; } ;
struct TYPE_4__ {int location; TYPE_3__ errcallback; int * pstate; } ;
typedef int ParseState ;
typedef TYPE_1__ ParseCallbackState ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;

void
FUNC_0(ParseCallbackState *VAR_2,
          ParseState *VAR_3, int VAR_4)
{

 VAR_2->pstate = VAR_3;
 VAR_2->location = VAR_4;
 VAR_2->errcallback.callback = VAR_1;
 VAR_2->errcallback.arg = (void *) VAR_2;
 VAR_2->errcallback.previous = VAR_0;
 VAR_0 = &VAR_2->errcallback;
}
