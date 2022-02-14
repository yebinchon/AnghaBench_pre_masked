
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_keymap {int from; int to; } ;



int FUNC_0(const struct mp_keymap *VAR_0, int VAR_1)
{
    while (VAR_0->from && VAR_0->from != VAR_1)
        VAR_0++;
    return VAR_0->to;
}
