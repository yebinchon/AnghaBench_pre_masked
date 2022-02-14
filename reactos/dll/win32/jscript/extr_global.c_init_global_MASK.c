
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int version; scalar_t__ global; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsdisp_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_1__*,int **) ;
 int FUNC_2 (TYPE_1__*,int *,int *,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,int **) ;
 int FUNC_4 (TYPE_1__*,int **) ;
 int FUNC_5 (TYPE_1__*,int **) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (scalar_t__,int ,unsigned int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int VAR_11 ;

HRESULT FUNC_12(script_ctx_t *VAR_12)
{
    unsigned VAR_13 = VAR_12->version >= VAR_9 ? 0 : VAR_8;
    jsdisp_t *VAR_14, *VAR_15, *VAR_16;
    HRESULT VAR_17;

    if(VAR_12->global)
        return VAR_10;

    VAR_17 = FUNC_2(VAR_12, &VAR_3, ((void*)0), &VAR_12->global);
    if(FUNC_0(VAR_17))
        return VAR_17;

    VAR_17 = FUNC_5(VAR_12, &VAR_15);
    if(FUNC_0(VAR_17))
        return VAR_17;

    VAR_17 = FUNC_6(VAR_12, VAR_15);
    FUNC_8(VAR_15);
    if(FUNC_0(VAR_17))
        return VAR_17;

    VAR_17 = FUNC_4(VAR_12, &VAR_14);
    if(FUNC_0(VAR_17))
        return VAR_17;

    VAR_17 = FUNC_7(VAR_12->global, VAR_5, VAR_8, FUNC_10(VAR_14));
    FUNC_8(VAR_14);
    if(FUNC_0(VAR_17))
        return VAR_17;

    if(VAR_12->version >= 2) {
        jsdisp_t *VAR_18;

        VAR_17 = FUNC_3(VAR_12, &VAR_18);
        if(FUNC_0(VAR_17))
            return VAR_17;

        VAR_17 = FUNC_7(VAR_12->global, VAR_4, VAR_8, FUNC_10(VAR_18));
        FUNC_8(VAR_18);
        if(FUNC_0(VAR_17))
            return VAR_17;
    }

    VAR_17 = FUNC_1(VAR_12, &VAR_16);
    if(FUNC_0(VAR_17))
        return VAR_17;

    VAR_17 = FUNC_7(VAR_12->global, VAR_0, VAR_8,
                                       FUNC_10(VAR_16));
    FUNC_8(VAR_16);
    if(FUNC_0(VAR_17))
        return VAR_17;

    VAR_17 = FUNC_7(VAR_12->global, VAR_11, VAR_13, FUNC_11());
    if(FUNC_0(VAR_17))
        return VAR_17;

    VAR_17 = FUNC_7(VAR_12->global, VAR_7, VAR_13, FUNC_9(VAR_6));
    if(FUNC_0(VAR_17))
        return VAR_17;

    VAR_17 = FUNC_7(VAR_12->global, VAR_2, VAR_13, FUNC_9(VAR_1));
    return VAR_17;
}
