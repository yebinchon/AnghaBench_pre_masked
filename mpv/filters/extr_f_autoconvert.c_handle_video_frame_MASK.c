
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct mp_image* data; } ;
struct TYPE_7__ {struct mp_filter* filter; TYPE_1__ frame; } ;
struct priv {int force_update; scalar_t__ in_imgfmt; scalar_t__ in_subfmt; TYPE_3__ sub; int log; int public; } ;
struct TYPE_6__ {scalar_t__ hw_subfmt; scalar_t__ imgfmt; } ;
struct mp_image {scalar_t__ imgfmt; TYPE_2__ params; } ;
struct mp_filter {struct priv* priv; } ;


 scalar_t__ FUNC_0 (int *,int ,struct mp_image*,struct mp_filter**) ;
 int FUNC_1 (struct mp_filter*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(struct mp_filter *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    struct mp_image *VAR_2 = VAR_1->sub.frame.data;

    if (VAR_1->force_update)
        VAR_1->in_imgfmt = VAR_1->in_subfmt = 0;

    if (VAR_2->imgfmt == VAR_1->in_imgfmt && VAR_2->params.hw_subfmt == VAR_1->in_subfmt) {
        FUNC_2(&VAR_1->sub);
        return;
    }

    if (!FUNC_3(&VAR_1->sub)) {
        VAR_1->in_imgfmt = VAR_1->in_subfmt = 0;
        return;
    }

    VAR_1->in_imgfmt = VAR_2->params.imgfmt;
    VAR_1->in_subfmt = VAR_2->params.hw_subfmt;
    VAR_1->force_update = 0;

    struct mp_filter *VAR_3 = ((void*)0);
    if (FUNC_0(&VAR_1->public, VAR_1->log, VAR_2, &VAR_3)) {
        VAR_1->sub.filter = VAR_3;
        FUNC_2(&VAR_1->sub);
    } else {
        FUNC_1(VAR_0);
    }
}
