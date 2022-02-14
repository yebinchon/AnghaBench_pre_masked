
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_filter {TYPE_1__* in; } ;
struct TYPE_2__ {int failed; struct mp_filter* parent; scalar_t__ error_handler; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct mp_filter *VAR_0)
{
    while (VAR_0) {
        VAR_0->in->failed = 1;
        if (VAR_0->in->error_handler) {
            FUNC_0(VAR_0->in->error_handler);
            break;
        }
        VAR_0 = VAR_0->in->parent;
    }
}
