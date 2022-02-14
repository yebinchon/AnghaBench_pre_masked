
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int disp; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef TYPE_2__ vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
typedef int HRESULT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static HRESULT FUNC_3(script_ctx_t *VAR_1, vdisp_t *VAR_2, WORD VAR_3, unsigned VAR_4, jsval_t *VAR_5,
        jsval_t *VAR_6)
{
    FUNC_1("\n");

    if(VAR_6) {
        FUNC_0(VAR_2->u.disp);
        *VAR_6 = FUNC_2(VAR_2->u.disp);
    }
    return VAR_0;
}
