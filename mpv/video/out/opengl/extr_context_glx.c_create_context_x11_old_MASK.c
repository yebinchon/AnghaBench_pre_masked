
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {int log; TYPE_1__* x11; } ;
struct ra_ctx {struct vo* vo; struct priv* priv; } ;
struct priv {scalar_t__ context; int vinfo; } ;
struct TYPE_2__ {int screen; int window; int * display; } ;
typedef scalar_t__ GLXContext ;
typedef int GL ;
typedef int Display ;


 int FUNC_0 (struct vo*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 char* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,void*,char const*,int ) ;

__attribute__((used)) static bool FUNC_6(struct ra_ctx *VAR_2, GL *VAR_3)
{
    struct priv *VAR_4 = VAR_2->priv;
    Display *VAR_5 = VAR_2->vo->x11->display;
    struct vo *VAR_6 = VAR_2->vo;

    if (VAR_4->context)
        return 1;

    if (!VAR_4->vinfo) {
        FUNC_0(VAR_6, "Can't create a legacy GLX context without X visual\n");
        return 0;
    }

    GLXContext VAR_7 = FUNC_1(VAR_5, VAR_4->vinfo, ((void*)0), VAR_0);
    if (!VAR_7) {
        FUNC_0(VAR_6, "Could not create GLX context!\n");
        return 0;
    }

    if (!FUNC_3(VAR_5, VAR_2->vo->x11->window, VAR_7)) {
        FUNC_0(VAR_6, "Could not set GLX context!\n");
        FUNC_2(VAR_5, VAR_7);
        return 0;
    }

    const char *VAR_8 = FUNC_4(VAR_5, VAR_2->vo->x11->screen);

    FUNC_5(VAR_3, (void *)VAR_1, VAR_8, VAR_6->log);

    VAR_4->context = VAR_7;

    return 1;
}
