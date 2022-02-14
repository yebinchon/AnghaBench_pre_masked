
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int searchLength; } ;
struct TYPE_6__ {TYPE_2__ cParams; } ;
typedef TYPE_1__ ZSTD_matchState_t ;
typedef TYPE_2__ ZSTD_compressionParameters ;
typedef int U32 ;
typedef int BYTE ;


 int FUNC_0 (TYPE_1__*,TYPE_2__ const* const,int const*,int ) ;

U32 FUNC_1(ZSTD_matchState_t* VAR_0, const BYTE* VAR_1) {
    const ZSTD_compressionParameters* const VAR_2 = &VAR_0->cParams;
    return FUNC_0(VAR_0, VAR_2, VAR_1, VAR_0->cParams.searchLength);
}
