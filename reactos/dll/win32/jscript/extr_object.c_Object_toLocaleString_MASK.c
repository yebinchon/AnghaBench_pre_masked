
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int jsdisp; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
typedef TYPE_2__ vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,int ,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_4(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7,
        jsval_t *VAR_8)
{
    FUNC_1("\n");

    if(!FUNC_2(VAR_4)) {
        FUNC_0("Host object this\n");
        return VAR_1;
    }

    return FUNC_3(VAR_4->u.jsdisp, VAR_2, VAR_0, 0, ((void*)0), VAR_8);
}
