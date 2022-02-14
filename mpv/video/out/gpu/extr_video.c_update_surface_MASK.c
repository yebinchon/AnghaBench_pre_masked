
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct surface {int pts; int id; int tex; } ;
struct mp_image {int pts; } ;
struct TYPE_5__ {int gamma; } ;
struct TYPE_6__ {TYPE_2__ color; } ;
struct TYPE_4__ {int x1; int x0; int y1; int y0; } ;
struct gl_video {int use_linear; TYPE_3__ image_params; int sc; TYPE_1__ dst_rect; } ;


 int FUNC_0 (struct gl_video*,int *,int,int) ;
 int FUNC_1 (struct gl_video*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct gl_video*,struct mp_image*,int ,int) ;

__attribute__((used)) static bool FUNC_4(struct gl_video *VAR_0, struct mp_image *VAR_1,
                           uint64_t VAR_2, struct surface *VAR_3, int VAR_4)
{
    int VAR_5 = VAR_0->dst_rect.x1 - VAR_0->dst_rect.x0,
        VAR_6 = VAR_0->dst_rect.y1 - VAR_0->dst_rect.y0;

    FUNC_1(VAR_0, 0);
    if (!FUNC_3(VAR_0, VAR_1, VAR_2, VAR_4))
        return 0;




    if (!VAR_0->use_linear) {
        VAR_0->use_linear = 1;
        FUNC_2(VAR_0->sc, VAR_0->image_params.color.gamma);
    }

    FUNC_0(VAR_0, &VAR_3->tex, VAR_5, VAR_6);
    VAR_3->id = VAR_2;
    VAR_3->pts = VAR_1->pts;
    return 1;
}
