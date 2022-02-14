
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* desc; } ;
typedef TYPE_3__ vbdisp_t ;
typedef int VARIANT ;
struct TYPE_6__ {TYPE_1__* ctx; } ;
struct TYPE_5__ {int err_number; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_5(vbdisp_t *VAR_3, VARIANT *VAR_4, unsigned VAR_5, VARIANT *VAR_6)
{
    HRESULT VAR_7;

    FUNC_3("\n");

    if(!VAR_3->desc)
        return VAR_1;

    if(VAR_5) {
        FUNC_0("setter not implemented\n");
        return VAR_0;
    }

    VAR_7 = VAR_3->desc->ctx->err_number;
    return FUNC_4(VAR_6, FUNC_2(VAR_7) == VAR_2 ? FUNC_1(VAR_7) : VAR_7);
}
