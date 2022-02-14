
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_subfilter {int draining; int frame; scalar_t__ filter; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mp_subfilter *VAR_0)
{
    if (VAR_0->filter && VAR_0->draining)
        FUNC_0(&VAR_0->filter);
    VAR_0->draining = 0;
    FUNC_1(&VAR_0->frame);
}
