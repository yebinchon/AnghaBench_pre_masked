
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vo_x11_state {int window; int display; int screen; int rootwin; } ;
struct vo {struct vo_x11_state* x11; int global; int log; struct priv* priv; } ;
struct TYPE_8__ {scalar_t__ visualid; } ;
struct priv {int gc; TYPE_2__ vinfo; int depth; TYPE_3__* sws; struct vo* vo; } ;
struct TYPE_7__ {int depth; } ;
typedef TYPE_1__ XWindowAttributes ;
struct TYPE_9__ {int log; } ;


 int FUNC_0 (struct vo*,char*,int) ;
 int FUNC_1 (struct vo*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ,int ,TYPE_2__*) ;
 TYPE_3__* FUNC_5 (struct vo*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (struct vo*) ;
 int FUNC_8 (struct vo*,TYPE_2__*,char*) ;
 int FUNC_9 (struct vo*) ;

__attribute__((used)) static int FUNC_10(struct vo *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    VAR_2->vo = VAR_1;
    VAR_2->sws = FUNC_5(VAR_1);
    VAR_2->sws->log = VAR_1->log;
    FUNC_6(VAR_2->sws, VAR_1->global);

    if (!FUNC_9(VAR_1))
        goto error;
    struct vo_x11_state *VAR_3 = VAR_1->x11;

    XWindowAttributes VAR_4;
    FUNC_3(VAR_3->display, VAR_3->rootwin, &VAR_4);
    VAR_2->depth = VAR_4.depth;

    if (!FUNC_4(VAR_3->display, VAR_3->screen, VAR_2->depth,
                          VAR_0, &VAR_2->vinfo))
        goto error;

    FUNC_0(VAR_1, "selected visual: %d\n", (int)VAR_2->vinfo.visualid);

    if (!FUNC_8(VAR_1, &VAR_2->vinfo, "x11"))
        goto error;

    VAR_2->gc = FUNC_2(VAR_3->display, VAR_3->window, 0, ((void*)0));
    FUNC_1(VAR_1, "Warning: this legacy VO has bad performance. Consider fixing "
                "your graphics drivers, or not forcing the x11 VO.\n");
    return 0;

error:
    FUNC_7(VAR_1);
    return -1;
}
