
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ra_ctx {TYPE_2__* vo; struct priv* priv; } ;
struct priv {scalar_t__ context; scalar_t__ vinfo; } ;
struct TYPE_4__ {TYPE_1__* x11; } ;
struct TYPE_3__ {int * display; } ;
typedef int Display ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (struct ra_ctx*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct ra_ctx *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    FUNC_3(VAR_1);

    if (VAR_2->vinfo)
        FUNC_0(VAR_2->vinfo);
    if (VAR_2->context) {
        Display *VAR_3 = VAR_1->vo->x11->display;
        FUNC_2(VAR_3, VAR_0, ((void*)0));
        FUNC_1(VAR_3, VAR_2->context);
    }

    FUNC_4(VAR_1->vo);
}
