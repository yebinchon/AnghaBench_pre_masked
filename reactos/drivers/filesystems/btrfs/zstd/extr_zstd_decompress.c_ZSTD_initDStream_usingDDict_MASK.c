
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int const* ddict; } ;
typedef TYPE_1__ ZSTD_DStream ;
typedef int ZSTD_DDict ;


 size_t FUNC_0 (TYPE_1__*) ;

size_t FUNC_1(ZSTD_DStream* VAR_0, const ZSTD_DDict* VAR_1)
{
    size_t const VAR_2 = FUNC_0(VAR_0);
    VAR_0->ddict = VAR_1;
    return VAR_2;
}
