
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ZSTD_dictContentType_e ;
struct TYPE_8__ {int inBuffTarget; int blockSize; scalar_t__ frameEnded; int streamStage; scalar_t__ outBuffFlushedSize; scalar_t__ outBuffContentSize; scalar_t__ inBuffPos; scalar_t__ inToCompress; } ;
typedef TYPE_1__ ZSTD_CStream ;
typedef int ZSTD_CDict ;
struct TYPE_9__ {int cParams; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,void const* const,size_t const,int const,int ,int const* const,TYPE_2__,unsigned long long const,int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_2__*,unsigned long long const,size_t const) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int) ;
 int VAR_2 ;

__attribute__((used)) static size_t FUNC_7(ZSTD_CStream* VAR_3,
                    const void* const VAR_4, size_t const VAR_5, ZSTD_dictContentType_e const VAR_6,
                    const ZSTD_CDict* const VAR_7,
                    ZSTD_CCtx_params VAR_8, unsigned long long const VAR_9)
{
    FUNC_1(4, "ZSTD_resetCStream_internal");

    VAR_8.cParams = FUNC_4(&VAR_8, VAR_9, VAR_5);

    FUNC_6(!FUNC_5(FUNC_2(VAR_8.cParams)));
    FUNC_6(!((VAR_4) && (VAR_7)));

    FUNC_0( FUNC_3(VAR_3,
                                         VAR_4, VAR_5, VAR_6, VAR_0,
                                         VAR_7,
                                         VAR_8, VAR_9,
                                         VAR_1) );

    VAR_3->inToCompress = 0;
    VAR_3->inBuffPos = 0;
    VAR_3->inBuffTarget = VAR_3->blockSize
                      + (VAR_3->blockSize == VAR_9);
    VAR_3->outBuffContentSize = VAR_3->outBuffFlushedSize = 0;
    VAR_3->streamStage = VAR_2;
    VAR_3->frameEnded = 0;
    return 0;
}
