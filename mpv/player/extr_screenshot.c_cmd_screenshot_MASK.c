
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char mp_image ;
struct mp_cmd_ctx {int success; int cmd; TYPE_2__* args; struct MPContext* mpctx; } ;
struct image_writer_opts {int dummy; } ;
struct MPContext {TYPE_5__* opts; int osd; TYPE_6__* screenshot_ctx; } ;
struct TYPE_15__ {TYPE_7__* each_frame; } ;
typedef TYPE_6__ screenshot_ctx ;
struct TYPE_16__ {TYPE_4__* args; } ;
struct TYPE_14__ {struct image_writer_opts* screenshot_image_opts; } ;
struct TYPE_12__ {int i; } ;
struct TYPE_13__ {TYPE_3__ v; } ;
struct TYPE_10__ {int i; } ;
struct TYPE_11__ {TYPE_1__ v; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__**) ;
 char* FUNC_1 (struct mp_cmd_ctx*,int ) ;
 int FUNC_2 (struct image_writer_opts*) ;
 int FUNC_3 (struct image_writer_opts*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mp_cmd_ctx*,int ,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 char* FUNC_7 (struct MPContext*,int,int) ;
 int FUNC_8 (char*) ;
 TYPE_7__* FUNC_9 (TYPE_6__*,int ) ;
 int FUNC_10 (struct mp_cmd_ctx*,char*,char*,int *) ;

void FUNC_11(void *VAR_2)
{
    struct mp_cmd_ctx *VAR_3 = VAR_2;
    struct MPContext *VAR_4 = VAR_3->mpctx;
    int VAR_5 = VAR_3->args[0].v.i & 3;
    bool VAR_6 = (VAR_3->args[0].v.i | VAR_3->args[1].v.i) & 8;
    bool VAR_7 = VAR_3->args[0].v.i & 16;

    screenshot_ctx *VAR_8 = VAR_4->screenshot_ctx;

    if (VAR_5 == VAR_0 && FUNC_6(VAR_4->osd))
        VAR_5 = 0;

    if (!VAR_7) {
        if (VAR_6) {
            if (VAR_8->each_frame) {
                FUNC_0(&VAR_8->each_frame);
                return;
            }
            VAR_8->each_frame = FUNC_9(VAR_8, FUNC_4(VAR_3->cmd));
            VAR_8->each_frame->args[0].v.i |= 16;
        } else {
            FUNC_0(&VAR_8->each_frame);
        }
    }

    VAR_3->success = 0;

    struct image_writer_opts *VAR_9 = VAR_4->opts->screenshot_image_opts;
    bool VAR_10 = FUNC_3(VAR_9);

    struct mp_image *VAR_11 = FUNC_7(VAR_4, VAR_5, VAR_10);

    if (VAR_11) {
        char *VAR_12 = FUNC_1(VAR_3, FUNC_2(VAR_9));
        if (VAR_12)
            VAR_3->success = FUNC_10(VAR_3, VAR_11, VAR_12, ((void*)0));
        FUNC_8(VAR_12);
    } else {
        FUNC_5(VAR_3, VAR_1, "Taking screenshot failed.");
    }

    FUNC_8(VAR_11);
}
