
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vo_frame {int dummy; } ;
struct mpv_render_context {TYPE_2__* renderer; int lock; int cur_frame; } ;
struct TYPE_5__ {TYPE_1__* fns; } ;
struct TYPE_4__ {int (* perfdata ) (TYPE_2__*,void*) ;int (* screenshot ) (TYPE_2__*,struct vo_frame*,void*) ;} ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,struct vo_frame*,void*) ;
 int FUNC_3 (TYPE_2__*,void*) ;
 int FUNC_4 (struct vo_frame*) ;
 struct vo_frame* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_2)
{
    void **VAR_3 = VAR_2;
    struct mpv_render_context *VAR_4 = VAR_3[0];
    int VAR_5 = (intptr_t)VAR_3[1];
    void *VAR_6 = VAR_3[2];
    int VAR_7 = VAR_0;

    switch (VAR_5) {
    case 128: {
        FUNC_0(&VAR_4->lock);
        struct vo_frame *VAR_8 = FUNC_5(VAR_4->cur_frame);
        FUNC_1(&VAR_4->lock);
        if (VAR_8 && VAR_4->renderer->fns->screenshot)
            VAR_4->renderer->fns->screenshot(VAR_4->renderer, VAR_8, VAR_6);
        FUNC_4(VAR_8);
        break;
    }
    case 129: {
        if (VAR_4->renderer->fns->perfdata) {
            VAR_4->renderer->fns->perfdata(VAR_4->renderer, VAR_6);
            VAR_7 = VAR_1;
        }
        break;
    }
    }

    *(int *)VAR_3[3] = VAR_7;
}
