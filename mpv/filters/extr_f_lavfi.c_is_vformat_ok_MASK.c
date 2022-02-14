
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ p_w; scalar_t__ p_h; } ;
struct mp_image {scalar_t__ imgfmt; scalar_t__ w; scalar_t__ nominal_fps; TYPE_1__ params; scalar_t__ h; } ;



__attribute__((used)) static bool FUNC_0(struct mp_image *VAR_0, struct mp_image *VAR_1)
{
    return VAR_0->imgfmt == VAR_1->imgfmt &&
           VAR_0->w == VAR_1->w && VAR_0->h && VAR_1->h &&
           VAR_0->params.p_w == VAR_1->params.p_w && VAR_0->params.p_h == VAR_1->params.p_h &&
           VAR_0->nominal_fps == VAR_1->nominal_fps;
}
