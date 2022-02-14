
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct vo {int want_redraw; TYPE_2__* priv; } ;
struct mp_image {int dummy; } ;
struct TYPE_8__ {TYPE_1__* vo; } ;
typedef TYPE_2__ d3d_priv ;
struct TYPE_7__ {int want_redraw; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 struct mp_image* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct vo*,int) ;
 int FUNC_5 (struct vo*,int*,int ,void*) ;

__attribute__((used)) static int FUNC_6(struct vo *VAR_3, uint32_t VAR_4, void *VAR_5)
{
    d3d_priv *VAR_6 = VAR_3->priv;

    switch (VAR_4) {
    case 130:
        FUNC_1(VAR_6);
        return VAR_2;
    case 128:
        FUNC_0(VAR_6);
        VAR_6->vo->want_redraw = 1;
        return VAR_2;
    case 129:
        *(struct mp_image **)VAR_5 = FUNC_2(VAR_6);
        return VAR_2;
    }

    int VAR_7 = 0;
    int VAR_8 = FUNC_5(VAR_3, &VAR_7, VAR_4, VAR_5);

    if (VAR_7 & VAR_1)
        FUNC_3(VAR_6);

    if (VAR_7 & VAR_0)
        VAR_3->want_redraw = 1;

    FUNC_4(VAR_3, VAR_7);

    return VAR_8;
}
