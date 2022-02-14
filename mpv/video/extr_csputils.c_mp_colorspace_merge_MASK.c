
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_colorspace {scalar_t__ light; scalar_t__ sig_peak; scalar_t__ gamma; scalar_t__ primaries; scalar_t__ levels; scalar_t__ space; } ;



void FUNC_0(struct mp_colorspace *VAR_0, struct mp_colorspace *VAR_1)
{
    if (!VAR_0->space)
        VAR_0->space = VAR_1->space;
    if (!VAR_0->levels)
        VAR_0->levels = VAR_1->levels;
    if (!VAR_0->primaries)
        VAR_0->primaries = VAR_1->primaries;
    if (!VAR_0->gamma)
        VAR_0->gamma = VAR_1->gamma;
    if (!VAR_0->sig_peak)
        VAR_0->sig_peak = VAR_1->sig_peak;
    if (!VAR_0->light)
        VAR_0->light = VAR_1->light;
}
