
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
struct TYPE_4__ {int time; } ;
typedef int HRESULT ;
typedef TYPE_1__ DateInstance ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_6(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7,
        jsval_t *VAR_8)
{
    DateInstance *VAR_9;

    FUNC_0("\n");

    if(!(VAR_9 = FUNC_1(VAR_4)))
        return FUNC_5(VAR_3, VAR_0, ((void*)0));

    if(VAR_8)
        *VAR_8 = FUNC_3(FUNC_2((VAR_9->time-FUNC_4(VAR_9->time, VAR_9))/VAR_1));
    return VAR_2;
}
