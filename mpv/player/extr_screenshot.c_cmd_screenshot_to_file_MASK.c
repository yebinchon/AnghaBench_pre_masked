
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_image {int dummy; } ;
struct mp_cmd_ctx {int success; TYPE_2__* args; struct MPContext* mpctx; } ;
struct image_writer_opts {int format; } ;
struct MPContext {TYPE_3__* opts; } ;
struct TYPE_6__ {struct image_writer_opts* screenshot_image_opts; } ;
struct TYPE_4__ {char* s; int i; } ;
struct TYPE_5__ {TYPE_1__ v; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct image_writer_opts*) ;
 int FUNC_2 (struct mp_cmd_ctx*,int ,char*) ;
 char* FUNC_3 (char const*,int *) ;
 struct mp_image* FUNC_4 (struct MPContext*,int,int) ;
 int FUNC_5 (struct mp_image*) ;
 int FUNC_6 (struct mp_cmd_ctx*,struct mp_image*,char const*,struct image_writer_opts*) ;

void FUNC_7(void *VAR_1)
{
    struct mp_cmd_ctx *VAR_2 = VAR_1;
    struct MPContext *VAR_3 = VAR_2->mpctx;
    const char *VAR_4 = VAR_2->args[0].v.s;
    int VAR_5 = VAR_2->args[1].v.i;
    struct image_writer_opts VAR_6 = *VAR_3->opts->screenshot_image_opts;

    char *VAR_7 = FUNC_3(VAR_4, ((void*)0));
    int VAR_8 = FUNC_0(VAR_7);
    if (VAR_8)
        VAR_6.format = VAR_8;
    bool VAR_9 = FUNC_1(&VAR_6);
    struct mp_image *VAR_10 = FUNC_4(VAR_3, VAR_5, VAR_9);
    if (!VAR_10) {
        FUNC_2(VAR_2, VAR_0, "Taking screenshot failed.");
        VAR_2->success = 0;
        return;
    }
    VAR_2->success = FUNC_6(VAR_2, VAR_10, VAR_4, &VAR_6);
    FUNC_5(VAR_10);
}
