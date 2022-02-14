
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
struct TYPE_5__ {double time; } ;
typedef int HRESULT ;
typedef TYPE_1__ DateInstance ;
typedef double DOUBLE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (double) ;
 TYPE_1__* FUNC_3 (int *) ;
 double FUNC_4 (double) ;
 scalar_t__ FUNC_5 (double) ;
 int FUNC_6 (double) ;
 double FUNC_7 (double,TYPE_1__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (double,int ,int ) ;
 int FUNC_10 (double) ;
 int FUNC_11 (int *,int ,int *) ;
 double FUNC_12 (int ) ;
 int FUNC_13 (double) ;
 int FUNC_14 (int *,int ,double*) ;
 int FUNC_15 (int ,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_16(script_ctx_t *VAR_4, vdisp_t *VAR_5, WORD VAR_6, unsigned VAR_7, jsval_t *VAR_8,
        jsval_t *VAR_9)
{
    DateInstance *VAR_10;
    DOUBLE VAR_11, VAR_12;
    HRESULT VAR_13;

    FUNC_1("\n");

    if(!(VAR_10 = FUNC_3(VAR_5)))
        return FUNC_11(VAR_4, VAR_0, ((void*)0));

    if(!VAR_7)
        return FUNC_11(VAR_4, VAR_1, ((void*)0));

    VAR_11 = FUNC_7(VAR_10->time, VAR_10);

    VAR_13 = FUNC_14(VAR_4, VAR_8[0], &VAR_12);
    if(FUNC_0(VAR_13))
        return VAR_13;

    if(FUNC_5(VAR_12)) {
        VAR_10->time = VAR_12;
        if(VAR_9)
            *VAR_9 = FUNC_6(VAR_2);
        return VAR_3;
    }

    VAR_12 = VAR_12 >= 0.0 ? FUNC_4(VAR_12) : -FUNC_4(-VAR_12);
    if(-1.0 < VAR_12 && VAR_12 < 100.0)
        VAR_12 += 1900.0;

    VAR_10->time = FUNC_12(FUNC_15(FUNC_8(FUNC_9(VAR_12, FUNC_10(VAR_11), FUNC_2(VAR_11)), FUNC_13(VAR_11)), VAR_10));

    if(VAR_9)
        *VAR_9 = FUNC_6(VAR_10->time);
    return VAR_3;
}
