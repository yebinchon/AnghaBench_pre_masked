
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_filter {TYPE_1__* in; } ;
struct TYPE_2__ {int * children; scalar_t__ num_children; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct mp_filter *VAR_0)
{
    while(VAR_0->in->num_children)
        FUNC_0(VAR_0->in->children[0]);
}
