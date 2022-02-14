
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_cmd_ctx {struct MPContext* mpctx; } ;
struct MPContext {TYPE_2__* screenshot_ctx; } ;
struct TYPE_5__ {TYPE_3__* mpctx; int frameno; } ;
typedef TYPE_2__ screenshot_ctx ;
struct TYPE_6__ {int global; TYPE_1__* opts; } ;
struct TYPE_4__ {char* screenshot_directory; int screenshot_template; } ;


 int VAR_0 ;
 char* FUNC_0 (char*,int ) ;
 char* FUNC_1 (TYPE_3__*,int ,char const*,int*,int *) ;
 int FUNC_2 (struct mp_cmd_ctx*,int ,char*,...) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (void*,int ,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static char *FUNC_9(struct mp_cmd_ctx *VAR_1, const char *VAR_2)
{
    struct MPContext *VAR_3 = VAR_1->mpctx;
    screenshot_ctx *VAR_4 = VAR_3->screenshot_ctx;

    int VAR_5 = 0;
    for (;;) {
        int VAR_6 = VAR_5;
        char *VAR_7 = FUNC_1(VAR_4->mpctx,
                                   VAR_4->mpctx->opts->screenshot_template,
                                   VAR_2,
                                   &VAR_5,
                                   &VAR_4->frameno);

        if (!VAR_7) {
            FUNC_2(VAR_1, VAR_0, "Invalid screenshot filename "
                       "template! Fix or remove the --screenshot-template "
                       "option.");
            return ((void*)0);
        }

        char *VAR_8 = VAR_4->mpctx->opts->screenshot_directory;
        if (VAR_8 && VAR_8[0]) {
            void *VAR_9 = VAR_7;
            VAR_8 = FUNC_4(VAR_9, VAR_4->mpctx->global, VAR_8);
            VAR_7 = FUNC_7(((void*)0), VAR_8, VAR_7);

            FUNC_5(VAR_8);

            FUNC_8(VAR_9);
        }

        char *VAR_10 = FUNC_0(VAR_7, FUNC_3(VAR_7));
        if (!FUNC_6(VAR_10)) {
            FUNC_5(VAR_10);
        }

        if (!FUNC_6(VAR_7))
            return VAR_7;

        if (VAR_5 == VAR_6) {
            FUNC_2(VAR_1, VAR_0, "Can't save screenshot, file '%s' "
                       "already exists!", VAR_7);
            FUNC_8(VAR_7);
            return ((void*)0);
        }

        FUNC_8(VAR_7);
    }
}
