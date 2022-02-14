
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int contentSizeFlag; } ;
struct TYPE_6__ {int compressionLevel; TYPE_1__ fParams; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

size_t FUNC_2(ZSTD_CCtx_params* VAR_1, int VAR_2) {
    if (!VAR_1) { return FUNC_0(VAR_0); }
    FUNC_1(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->compressionLevel = VAR_2;
    VAR_1->fParams.contentSizeFlag = 1;
    return 0;
}
