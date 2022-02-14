
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_aframe {double speed; TYPE_1__* av_frame; int chmap; int format; } ;
struct avframe_opaque {double speed; } ;
struct AVFrame {int dummy; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ format; TYPE_2__* opaque_ref; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int) ;
 struct AVFrame* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

struct AVFrame *FUNC_4(struct mp_aframe *VAR_0)
{
    if (!VAR_0)
        return ((void*)0);

    if (FUNC_0(VAR_0->format) != VAR_0->av_frame->format)
        return ((void*)0);

    if (!FUNC_3(&VAR_0->chmap))
        return ((void*)0);

    if (!VAR_0->av_frame->opaque_ref && VAR_0->speed != 1.0) {
        VAR_0->av_frame->opaque_ref =
            FUNC_1(sizeof(struct avframe_opaque));
        if (!VAR_0->av_frame->opaque_ref)
            return ((void*)0);

        struct avframe_opaque *VAR_1 = (void *)VAR_0->av_frame->opaque_ref->data;
        VAR_1->speed = VAR_0->speed;
    }

    return FUNC_2(VAR_0->av_frame);
}
