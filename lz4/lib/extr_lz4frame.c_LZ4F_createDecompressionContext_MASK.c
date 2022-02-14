
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int version; } ;
typedef int LZ4F_errorCode_t ;
typedef TYPE_1__ LZ4F_dctx ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

LZ4F_errorCode_t FUNC_2(LZ4F_dctx** VAR_2, unsigned VAR_3)
{
    LZ4F_dctx* const VAR_4 = (LZ4F_dctx*)FUNC_0(sizeof(LZ4F_dctx));
    if (VAR_4 == ((void*)0)) {
        *VAR_2 = ((void*)0);
        return FUNC_1(VAR_0);
    }

    VAR_4->version = VAR_3;
    *VAR_2 = VAR_4;
    return VAR_1;
}
