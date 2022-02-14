
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
struct TYPE_3__ {double time; } ;
typedef int HRESULT ;
typedef TYPE_1__ DateInstance ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 double FUNC_2 (double) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (double) ;
 double FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,double,double) ;
 int FUNC_7 (int *,int ,int *) ;
 double FUNC_8 (double) ;
 int FUNC_9 (double) ;
 int FUNC_10 (int *,int ,double*) ;
 int FUNC_11 (double) ;

__attribute__((used)) static HRESULT FUNC_12(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7,
        jsval_t *VAR_8)
{
    DateInstance *VAR_9;
    double VAR_10, VAR_11, VAR_12;
    HRESULT VAR_13;

    FUNC_1("\n");

    if(!(VAR_9 = FUNC_3(VAR_4)))
        return FUNC_7(VAR_3, VAR_0, ((void*)0));

    if(!VAR_6)
        return FUNC_7(VAR_3, VAR_1, ((void*)0));

    VAR_10 = VAR_9->time;

    VAR_13 = FUNC_10(VAR_3, VAR_7[0], &VAR_11);
    if(FUNC_0(VAR_13))
        return VAR_13;

    if(VAR_6 > 1) {
        VAR_13 = FUNC_10(VAR_3, VAR_7[1], &VAR_12);
        if(FUNC_0(VAR_13))
            return VAR_13;
    }else {
        VAR_12 = FUNC_2(VAR_10);
    }

    VAR_10 = FUNC_5(FUNC_6(FUNC_11(VAR_10), VAR_11, VAR_12),
            FUNC_9(VAR_10));
    VAR_9->time = FUNC_8(VAR_10);

    if(VAR_8)
        *VAR_8 = FUNC_4(VAR_9->time);
    return VAR_2;
}
