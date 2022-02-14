
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vo {int want_redraw; struct vdpctx* priv; } ;
struct vdpctx {int deint; } ;
struct mp_image {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vo*) ;
 int FUNC_1 (struct vo*) ;
 int FUNC_2 (struct vo*,int) ;
 struct mp_image* FUNC_3 (struct vo*) ;
 int FUNC_4 (struct vo*) ;
 int FUNC_5 (struct vo*,int) ;
 int FUNC_6 (struct vo*,int*,int ,void*) ;

__attribute__((used)) static int FUNC_7(struct vo *VAR_3, uint32_t VAR_4, void *VAR_5)
{
    struct vdpctx *VAR_6 = VAR_3->priv;

    FUNC_0(VAR_3);

    switch (VAR_4) {
    case 128:
        FUNC_1(VAR_3);
        return VAR_2;
    case 129:
        VAR_3->want_redraw = 1;
        return 1;
    case 131:
        FUNC_2(VAR_3, 1);
        return 1;
    case 130:
        if (!FUNC_4(VAR_3))
            return 0;
        *(struct mp_image **)VAR_5 = FUNC_3(VAR_3);
        return 1;
    case 132:
        *(int *)VAR_5 = VAR_6->deint;
        return 1;
    }

    int VAR_7 = 0;
    int VAR_8 = FUNC_6(VAR_3, &VAR_7, VAR_4, VAR_5);

    if (VAR_7 & VAR_1) {
        FUNC_1(VAR_3);
    } else if (VAR_7 & VAR_0) {
        VAR_3->want_redraw = 1;
    }
    FUNC_5(VAR_3, VAR_7);

    return VAR_8;
}
