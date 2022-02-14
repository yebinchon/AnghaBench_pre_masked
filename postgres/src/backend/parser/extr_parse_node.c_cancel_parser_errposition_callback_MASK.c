
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int previous; } ;
struct TYPE_5__ {TYPE_1__ errcallback; } ;
typedef TYPE_2__ ParseCallbackState ;


 int VAR_0 ;

void
FUNC_0(ParseCallbackState *VAR_1)
{

 VAR_0 = VAR_1->errcallback.previous;
}
