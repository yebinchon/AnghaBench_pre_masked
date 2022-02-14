
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ ZSTD_frameParameters ;
typedef int ZSTD_CStream ;
typedef int ZSTD_CDict ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 size_t FUNC_1 (int *,int const*,TYPE_1__ const,int ) ;

size_t FUNC_2(ZSTD_CStream* VAR_1, const ZSTD_CDict* VAR_2)
{
    ZSTD_frameParameters const VAR_3 = { 0 , 0 , 0 };
    FUNC_0(4, "ZSTD_initCStream_usingCDict");
    return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0);
}
