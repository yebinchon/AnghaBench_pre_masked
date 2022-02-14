
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
struct TYPE_3__ {int time; } ;
typedef int HRESULT ;
typedef TYPE_1__ DateInstance ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (double) ;
 int FUNC_6 (int *,int ,double*) ;

__attribute__((used)) static HRESULT FUNC_7(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7,
        jsval_t *VAR_8)
{
    double VAR_9;
    HRESULT VAR_10;
    DateInstance *VAR_11;

    FUNC_1("\n");

    if(!(VAR_11 = FUNC_2(VAR_4)))
        return FUNC_4(VAR_3, VAR_0, ((void*)0));

    if(!VAR_6)
        return FUNC_4(VAR_3, VAR_1, ((void*)0));

    VAR_10 = FUNC_6(VAR_3, VAR_7[0], &VAR_9);
    if(FUNC_0(VAR_10))
        return VAR_10;

    VAR_11->time = FUNC_5(VAR_9);

    if(VAR_8)
        *VAR_8 = FUNC_3(VAR_11->time);
    return VAR_2;
}
