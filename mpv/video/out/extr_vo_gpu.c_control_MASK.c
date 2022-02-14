
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct voctrl_performance_data {int dummy; } ;
struct vo_frame {int dummy; } ;
struct vo {int want_redraw; struct gpu_priv* priv; } ;
struct gpu_priv {int events; TYPE_2__* ctx; int renderer; } ;
struct TYPE_5__ {TYPE_1__* fns; } ;
struct TYPE_4__ {int (* control ) (TYPE_2__*,int*,int ,void*) ;int (* reconfig ) (TYPE_2__*) ;} ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gpu_priv*) ;
 int FUNC_1 (struct gpu_priv*) ;
 int FUNC_2 (int ,struct vo*) ;
 int FUNC_3 (int ,struct voctrl_performance_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct vo_frame*,void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct vo*) ;
 int FUNC_8 (struct vo*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int*,int ,void*) ;
 int FUNC_11 (struct vo_frame*) ;
 int FUNC_12 (struct vo*,int) ;
 struct vo_frame* FUNC_13 (struct vo*) ;

__attribute__((used)) static int FUNC_14(struct vo *VAR_5, uint32_t VAR_6, void *VAR_7)
{
    struct gpu_priv *VAR_8 = VAR_5->priv;

    switch (VAR_6) {
    case 129:
        FUNC_8(VAR_5);
        return VAR_4;
    case 130:
        VAR_5->want_redraw = 1;
        return VAR_4;
    case 131: {
        struct vo_frame *VAR_9 = FUNC_13(VAR_5);
        if (VAR_9)
            FUNC_5(VAR_8->renderer, VAR_9, VAR_7);
        FUNC_11(VAR_9);
        return 1;
    }
    case 135:
        FUNC_7(VAR_5);
        return 1;
    case 128: {
        FUNC_2(VAR_8->renderer, VAR_5);
        FUNC_1(VAR_8);
        VAR_5->want_redraw = 1;
        return 1;
    }
    case 132:
        FUNC_4(VAR_8->renderer);
        return 1;
    case 134:
        if (FUNC_6(VAR_8->renderer))
            VAR_5->want_redraw = 1;
        return 1;
    case 133:
        FUNC_3(VAR_8->renderer, (struct voctrl_performance_data *)VAR_7);
        return 1;
    case 136:
        VAR_8->ctx->fns->reconfig(VAR_8->ctx);
        FUNC_8(VAR_5);
        return 1;
    }

    int VAR_10 = 0;
    int VAR_11 = VAR_8->ctx->fns->control(VAR_8->ctx, &VAR_10, VAR_6, VAR_7);
    if (VAR_10 & VAR_2) {
        FUNC_1(VAR_8);
        VAR_5->want_redraw = 1;
    }
    if (VAR_10 & VAR_0) {
        FUNC_0(VAR_8);
        VAR_5->want_redraw = 1;
    }
    VAR_10 |= VAR_8->events;
    VAR_8->events = 0;
    if (VAR_10 & VAR_3)
        FUNC_8(VAR_5);
    if (VAR_10 & VAR_1)
        VAR_5->want_redraw = 1;
    FUNC_12(VAR_5, VAR_10);

    return VAR_11;
}
