
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct priv {int do_deint; TYPE_1__* opts; scalar_t__ num_buffers; scalar_t__* buffers; int context; int display; int config; } ;
struct mp_filter {struct priv* priv; } ;
typedef int param ;
typedef int VAStatus ;
typedef size_t VAProcFilterType ;
struct TYPE_7__ {size_t type; scalar_t__ algorithm; int member_0; } ;
typedef TYPE_2__ VAProcFilterParameterBufferDeinterlacing ;
struct TYPE_8__ {scalar_t__ type; } ;
typedef TYPE_3__ VAProcFilterCapDeinterlacing ;
typedef scalar_t__ VAProcDeinterlacingType ;
typedef int VAContextID ;
typedef int VAConfigID ;
typedef scalar_t__ VABufferID ;
struct TYPE_6__ {int deint_type; } ;


 int FUNC_0 (struct mp_filter*,char*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (struct mp_filter*,char*,scalar_t__) ;
 int FUNC_3 (struct mp_filter*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_4 (int ,int ,int ,int *,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int *,int ,int *) ;
 int FUNC_6 (int ,int ,size_t*,int*) ;
 scalar_t__ FUNC_7 (struct mp_filter*,int,int,TYPE_2__*) ;
 int FUNC_8 (struct mp_filter*,size_t,TYPE_3__*,int) ;

__attribute__((used)) static bool FUNC_9(struct mp_filter *VAR_7)
{
    struct priv *VAR_8 = VAR_7->priv;
    VAStatus VAR_9;

    VAConfigID VAR_10;
    VAR_9 = FUNC_4(VAR_8->display, VAR_4, VAR_0,
                            ((void*)0), 0, &VAR_10);
    if (!FUNC_0(VAR_7, "vaCreateConfig()"))
        return 0;
    VAR_8->config = VAR_10;

    VAContextID VAR_11;
    VAR_9 = FUNC_5(VAR_8->display, VAR_8->config, 0, 0, 0, ((void*)0), 0, &VAR_11);
    if (!FUNC_0(VAR_7, "vaCreateContext()"))
        return 0;
    VAR_8->context = VAR_11;

    VAProcFilterType VAR_12[VAR_2];
    int VAR_13 = VAR_2;
    VAR_9 = FUNC_6(VAR_8->display, VAR_8->context, VAR_12, &VAR_13);
    if (!FUNC_0(VAR_7, "vaQueryVideoProcFilters()"))
        return 0;

    VABufferID VAR_14[VAR_2];
    for (int VAR_15 = 0; VAR_15 < VAR_2; VAR_15++)
        VAR_14[VAR_15] = VAR_5;
    for (int VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
        if (VAR_12[VAR_16] == VAR_3) {
            VAProcFilterCapDeinterlacing VAR_17[VAR_1];
            int VAR_18 = FUNC_8(VAR_7, VAR_3, VAR_17,
                                           VAR_1);
            if (!VAR_18)
                continue;
            if (VAR_8->opts->deint_type < 0) {
                for (int VAR_19 = FUNC_1(VAR_6) - 1; VAR_19 > 0; VAR_19--) {
                    for (int VAR_20 = 0; VAR_20 < VAR_18; VAR_20++) {
                        if (VAR_17[VAR_20].type == VAR_6[VAR_19]) {
                            VAR_8->opts->deint_type = VAR_19;
                            FUNC_2(VAR_7, "Selected deinterlacing algorithm: "
                                       "%d\n", VAR_6[VAR_19]);
                            goto found;
                        }
                    }
                }
                found: ;
            }
            if (VAR_8->opts->deint_type <= 0)
                continue;
            VAProcDeinterlacingType VAR_21 =
                VAR_6[VAR_8->opts->deint_type];
            for (int VAR_22=0; VAR_22 < VAR_18; VAR_22++) {
                if (VAR_17[VAR_22].type != VAR_21)
                    continue;
                VAProcFilterParameterBufferDeinterlacing VAR_23 = {0};
                VAR_23.type = VAR_3;
                VAR_23.algorithm = VAR_21;
                VAR_14[VAR_3] =
                    FUNC_7(VAR_7, sizeof(VAR_23), 1, &VAR_23);
            }
            if (VAR_14[VAR_3] == VAR_5)
                FUNC_3(VAR_7, "Selected deinterlacing algorithm not supported.\n");
        }
    }
    if (VAR_8->opts->deint_type < 0)
        VAR_8->opts->deint_type = 0;
    VAR_8->num_buffers = 0;
    if (VAR_14[VAR_3] != VAR_5)
        VAR_8->buffers[VAR_8->num_buffers++] = VAR_14[VAR_3];
    VAR_8->do_deint = !!VAR_8->opts->deint_type;

    return 1;
}
