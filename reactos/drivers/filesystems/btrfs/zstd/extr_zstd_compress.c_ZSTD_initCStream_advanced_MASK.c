
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ contentSizeFlag; } ;
struct TYPE_9__ {TYPE_1__ fParams; int cParams; } ;
typedef TYPE_2__ ZSTD_parameters ;
struct TYPE_10__ {int requestedParams; } ;
typedef TYPE_3__ ZSTD_CStream ;
typedef int U32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int ,scalar_t__) ;
 unsigned long long VAR_0 ;
 int FUNC_2 (int ,TYPE_2__) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (TYPE_3__*,void const*,size_t,int *,int ,unsigned long long) ;

size_t FUNC_5(ZSTD_CStream* VAR_1,
                                 const void* VAR_2, size_t VAR_3,
                                 ZSTD_parameters VAR_4, unsigned long long VAR_5)
{
    FUNC_1(4, "ZSTD_initCStream_advanced: pledgedSrcSize=%u, flag=%u",
                (U32)VAR_5, VAR_4.fParams.contentSizeFlag);
    FUNC_0( FUNC_3(VAR_4.cParams) );
    if ((VAR_5==0) && (VAR_4.fParams.contentSizeFlag==0)) VAR_5 = VAR_0;
    VAR_1->requestedParams = FUNC_2(VAR_1->requestedParams, VAR_4);
    return FUNC_4(VAR_1, VAR_2, VAR_3, ((void*)0) , VAR_1->requestedParams, VAR_5);
}
