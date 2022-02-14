
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dStage; size_t dictSize; int const* dict; } ;
typedef int LZ4F_decompressOptions_t ;
typedef TYPE_1__ LZ4F_dctx ;
typedef int BYTE ;


 size_t FUNC_0 (TYPE_1__*,void*,size_t*,void const*,size_t*,int const*) ;
 scalar_t__ VAR_0 ;

size_t FUNC_1(LZ4F_dctx* VAR_1,
                       void* VAR_2, size_t* VAR_3,
                       const void* VAR_4, size_t* VAR_5,
                       const void* VAR_6, size_t VAR_7,
                       const LZ4F_decompressOptions_t* VAR_8)
{
    if (VAR_1->dStage <= VAR_0) {
        VAR_1->dict = (const BYTE*)VAR_6;
        VAR_1->dictSize = VAR_7;
    }
    return FUNC_0(VAR_1, VAR_2, VAR_3,
                           VAR_4, VAR_5,
                           VAR_8);
}
