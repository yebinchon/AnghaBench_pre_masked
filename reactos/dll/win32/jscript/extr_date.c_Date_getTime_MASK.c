
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_4(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    DateInstance *VAR_8;

    FUNC_0("\n");

    if(!(VAR_8 = FUNC_1(VAR_3)))
        return FUNC_3(VAR_2, VAR_0, ((void*)0));

    if(VAR_7)
        *VAR_7 = FUNC_2(VAR_8->time);
    return VAR_1;
}
