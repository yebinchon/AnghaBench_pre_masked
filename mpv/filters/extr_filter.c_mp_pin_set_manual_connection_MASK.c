
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_pin {TYPE_2__* owner; } ;
struct TYPE_4__ {TYPE_1__* in; } ;
struct TYPE_3__ {int * parent; } ;


 int FUNC_0 (struct mp_pin*,int *) ;

void FUNC_1(struct mp_pin *VAR_0, bool VAR_1)
{
    FUNC_0(VAR_0, VAR_1 ? VAR_0->owner->in->parent : ((void*)0));
}
