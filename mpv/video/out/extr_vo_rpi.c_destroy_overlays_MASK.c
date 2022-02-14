
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct TYPE_2__ {int ra; } ;
struct priv {scalar_t__ osd_overlay; int update; TYPE_1__ egl; int * gl_video; scalar_t__ window; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_1->window)
        FUNC_3(VAR_1->update, VAR_1->window);
    VAR_1->window = 0;

    FUNC_0(VAR_1->gl_video);
    VAR_1->gl_video = ((void*)0);
    FUNC_2(&VAR_1->egl.ra);
    FUNC_1(&VAR_1->egl);

    if (VAR_1->osd_overlay)
        FUNC_3(VAR_1->update, VAR_1->osd_overlay);
    VAR_1->osd_overlay = 0;
}
