
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo {int log; TYPE_2__* x11; } ;
struct TYPE_3__ {scalar_t__ debug; } ;
struct ra_ctx {TYPE_1__ opts; struct vo* vo; struct priv* priv; } ;
struct priv {void* XGetSyncValues; scalar_t__ context; int fbc; } ;
typedef scalar_t__ (* glXCreateContextAttribsARBProc ) (int ,int ,int ,int ,int*) ;
struct TYPE_4__ {int display; int window; int screen; } ;
typedef int GLubyte ;
typedef scalar_t__ GLXContext ;
typedef int GL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct vo*,char*) ;
 int FUNC_3 (struct vo*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 char* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (int *,void*,char const*,int ) ;
 int FUNC_10 (struct ra_ctx*,int,int) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static bool FUNC_13(struct ra_ctx *VAR_9, GL *VAR_10, int VAR_11,
                                   bool VAR_12)
{
    struct priv *VAR_13 = VAR_9->priv;
    struct vo *VAR_14 = VAR_9->vo;

    if (VAR_13->context)
        return 1;

    if (!FUNC_10(VAR_9, VAR_11, VAR_12))
        return 0;

    glXCreateContextAttribsARBProc VAR_15 =
        (glXCreateContextAttribsARBProc)
            FUNC_5((const GLubyte *)"glXCreateContextAttribsARB");

    const char *VAR_16 =
        FUNC_7(VAR_14->x11->display, VAR_14->x11->screen);
    bool VAR_17 = VAR_16 && !!FUNC_11(VAR_16, "GLX_ARB_create_context");

    if (!(VAR_17 && VAR_15)) {
        return 0;
    }

    int VAR_18 = VAR_9->opts.debug ? VAR_1 : 0;
    int VAR_19 = VAR_0;

    if (VAR_12) {
        VAR_19 = VAR_2;
        if (!(VAR_16 && FUNC_11(VAR_16, "GLX_EXT_create_context_es2_profile")))
            return 0;
    }

    int VAR_20[] = {
        VAR_4, FUNC_0(VAR_11),
        VAR_5, FUNC_1(VAR_11),
        VAR_6, VAR_19,
        VAR_3, VAR_18,
        VAR_7
    };
    FUNC_12(1);
    GLXContext VAR_21 = VAR_15(VAR_14->x11->display,
                                                    VAR_13->fbc, 0, VAR_8,
                                                    VAR_20);
    FUNC_12(-1);
    if (!VAR_21)
        return 0;


    if (!FUNC_6(VAR_14->x11->display, VAR_14->x11->window, VAR_21)) {
        FUNC_2(VAR_14, "Could not set GLX context!\n");
        FUNC_4(VAR_14->x11->display, VAR_21);
        return 0;
    }

    VAR_13->context = VAR_21;

    FUNC_9(VAR_10, (void *)FUNC_5, VAR_16, VAR_14->log);

    if (FUNC_8(VAR_16, "GLX_OML_sync_control")) {
        VAR_13->XGetSyncValues =
            (void *)FUNC_5((const GLubyte *)"glXGetSyncValuesOML");
    }
    if (VAR_13->XGetSyncValues)
        FUNC_3(VAR_14, "Using GLX_OML_sync_control.\n");

    return 1;
}
