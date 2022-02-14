
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
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (double) ;
 double FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,double) ;
 int FUNC_6 (double) ;
 int FUNC_7 (int *,int ,int *) ;
 double FUNC_8 (double) ;
 int FUNC_9 (double) ;
 int FUNC_10 (int *,int ,double*) ;
 int FUNC_11 (double) ;

__attribute__((used)) static HRESULT FUNC_12(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7,
        jsval_t *VAR_8)
{
    DateInstance *VAR_9;
    double VAR_10, VAR_11;
    HRESULT VAR_12;

    FUNC_1("\n");

    if(!(VAR_9 = FUNC_2(VAR_4)))
        return FUNC_7(VAR_3, VAR_0, ((void*)0));

    if(!VAR_6)
        return FUNC_7(VAR_3, VAR_1, ((void*)0));

    VAR_12 = FUNC_10(VAR_3, VAR_7[0], &VAR_11);
    if(FUNC_0(VAR_12))
        return VAR_12;

    VAR_10 = VAR_9->time;
    VAR_10 = FUNC_4(FUNC_5(FUNC_11(VAR_10), FUNC_6(VAR_10), VAR_11), FUNC_9(VAR_10));
    VAR_9->time = FUNC_8(VAR_10);

    if(VAR_8)
        *VAR_8 = FUNC_3(VAR_9->time);
    return VAR_2;
}
