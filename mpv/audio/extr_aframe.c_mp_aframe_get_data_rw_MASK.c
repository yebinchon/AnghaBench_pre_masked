
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mp_aframe {TYPE_1__* av_frame; } ;
struct TYPE_2__ {int ** extended_data; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct mp_aframe*) ;

uint8_t **FUNC_2(struct mp_aframe *VAR_0)
{
    if (!FUNC_1(VAR_0))
        return ((void*)0);
    if (FUNC_0(VAR_0->av_frame) < 0)
        return ((void*)0);
    return VAR_0->av_frame->extended_data;
}
