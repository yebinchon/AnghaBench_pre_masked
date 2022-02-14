
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mpv_render_context {TYPE_2__* renderer; } ;
struct mp_image {int dummy; } ;
struct TYPE_4__ {TYPE_1__* fns; } ;
struct TYPE_3__ {struct mp_image* (* get_image ) (TYPE_2__*,int,int,int,int) ;} ;


 struct mp_image* FUNC_0 (TYPE_2__*,int,int,int,int) ;

__attribute__((used)) static struct mp_image *FUNC_1(void *VAR_0, int VAR_1, int VAR_2, int VAR_3,
                                         int VAR_4)
{
    struct mpv_render_context *VAR_5 = VAR_0;

    return VAR_5->renderer->fns->get_image(VAR_5->renderer, VAR_1, VAR_2, VAR_3, VAR_4);
}
