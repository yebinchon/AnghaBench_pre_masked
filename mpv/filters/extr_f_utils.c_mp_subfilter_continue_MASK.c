
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_subfilter {int frame; struct mp_pin* out; TYPE_1__* filter; } ;
struct mp_pin {int dummy; } ;
struct TYPE_2__ {struct mp_pin** pins; } ;


 int VAR_0 ;
 int FUNC_0 (struct mp_subfilter*) ;
 int FUNC_1 (struct mp_pin*) ;
 int FUNC_2 (struct mp_pin*,int ) ;

void FUNC_3(struct mp_subfilter *VAR_1)
{
    struct mp_pin *VAR_2 = VAR_1->filter ? VAR_1->filter->pins[0] : VAR_1->out;




    if (!FUNC_1(VAR_2)) {
        FUNC_0(VAR_1);
        return;
    }
    FUNC_2(VAR_2, VAR_1->frame);
    VAR_1->frame = VAR_0;
}
