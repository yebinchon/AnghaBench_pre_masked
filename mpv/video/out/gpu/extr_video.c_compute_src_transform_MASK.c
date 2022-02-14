
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float x1; float x0; float y1; float y0; } ;
struct gl_video {int texture_offset; TYPE_1__ src_rect; scalar_t__ texture_h; scalar_t__ texture_w; } ;
struct TYPE_10__ {float member_0; float member_1; } ;
struct TYPE_9__ {float member_1; int member_0; } ;
struct TYPE_8__ {float member_0; int member_1; } ;
struct TYPE_7__ {TYPE_4__ member_1; TYPE_3__ member_0; } ;
struct gl_transform {TYPE_5__ member_1; TYPE_2__ member_0; } ;


 int FUNC_0 (int ,struct gl_transform*) ;

__attribute__((used)) static void FUNC_1(struct gl_video *VAR_0, struct gl_transform *VAR_1)
{
    float VAR_2 = (VAR_0->src_rect.x1 - VAR_0->src_rect.x0) / (float)VAR_0->texture_w,
          VAR_3 = (VAR_0->src_rect.y1 - VAR_0->src_rect.y0) / (float)VAR_0->texture_h,
          VAR_4 = VAR_0->src_rect.x0,
          VAR_5 = VAR_0->src_rect.y0;
    struct gl_transform VAR_6 = {{{VAR_2, 0}, {0, VAR_3}}, {VAR_4, VAR_5}};

    FUNC_0(VAR_0->texture_offset, &VAR_6);

    *VAR_1 = VAR_6;
}
