
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ num; } ;
struct mp_aframe {int format; int speed; TYPE_2__ chmap; TYPE_4__* av_frame; } ;
struct avframe_opaque {int speed; } ;
struct AVFrame {scalar_t__ width; scalar_t__ height; TYPE_1__* opaque_ref; int channels; int format; } ;
struct TYPE_7__ {scalar_t__ channels; int channel_layout; } ;
struct TYPE_5__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,struct AVFrame*) ;
 struct mp_aframe* FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;

struct mp_aframe *FUNC_6(struct AVFrame *VAR_1)
{
    if (!VAR_1 || VAR_1->width > 0 || VAR_1->height > 0)
        return ((void*)0);

    int VAR_2 = FUNC_1(VAR_1->format);
    if (!VAR_2 && VAR_1->format != VAR_0)
        return ((void*)0);

    struct mp_aframe *VAR_3 = FUNC_3();


    if (FUNC_2(VAR_3->av_frame, VAR_1) < 0)
        FUNC_0();

    VAR_3->format = VAR_2;
    FUNC_5(&VAR_3->chmap, VAR_3->av_frame->channel_layout);







    if (VAR_1->opaque_ref) {
        struct avframe_opaque *VAR_4 = (void *)VAR_1->opaque_ref->data;
        VAR_3->speed = VAR_4->speed;
    }

    return VAR_3;
}
