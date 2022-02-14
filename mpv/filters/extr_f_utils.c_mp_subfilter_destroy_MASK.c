
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_subfilter {int draining; int filter; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct mp_subfilter *VAR_0)
{
    FUNC_0(&VAR_0->filter);
    VAR_0->draining = 0;
}
