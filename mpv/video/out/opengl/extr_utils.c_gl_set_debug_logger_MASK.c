
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct TYPE_3__ {int (* DebugMessageCallback ) (int *,struct mp_log*) ;} ;
typedef TYPE_1__ GL ;


 int * VAR_0 ;
 int FUNC_0 (int *,struct mp_log*) ;

void FUNC_1(GL *VAR_1, struct mp_log *VAR_2)
{
    if (VAR_1->DebugMessageCallback)
        VAR_1->DebugMessageCallback(VAR_2 ? VAR_0 : ((void*)0), VAR_2);
}
