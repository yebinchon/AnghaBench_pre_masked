
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_compressionParameters ;
struct TYPE_4__ {int cParams; } ;
struct TYPE_5__ {TYPE_1__ matchState; } ;
typedef TYPE_2__ ZSTD_CDict ;


 int FUNC_0 (int ) ;

ZSTD_compressionParameters FUNC_1(const ZSTD_CDict* VAR_0)
{
    FUNC_0(VAR_0 != ((void*)0));
    return VAR_0->matchState.cParams;
}
