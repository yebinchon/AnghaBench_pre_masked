
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
 int FUNC_0 (char*) ;

__attribute__((used)) static HRESULT FUNC_1(vbdisp_t *VAR_2, VARIANT *VAR_3, unsigned VAR_4, VARIANT *VAR_5)
{
    FUNC_0("\n");

    if(!VAR_2->desc)
        return VAR_0;

    VAR_2->desc->ctx->err_number = VAR_1;
    return VAR_1;
}
