
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_6__ {scalar_t__ contentChecksumFlag; scalar_t__ contentSize; } ;
struct TYPE_7__ {TYPE_1__ frameInfo; } ;
struct TYPE_8__ {scalar_t__ totalInSize; TYPE_2__ prefs; scalar_t__ maxBufferSize; scalar_t__ cStage; int xxh; } ;
typedef int LZ4F_compressOptions_t ;
typedef TYPE_3__ LZ4F_cctx ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (TYPE_3__*,void*,size_t,int const*) ;
 scalar_t__ FUNC_1 (size_t const) ;
 int FUNC_2 (int *,int const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 size_t FUNC_5 (int ) ;

size_t FUNC_6(LZ4F_cctx* VAR_3,
                        void* VAR_4, size_t VAR_5,
                  const LZ4F_compressOptions_t* VAR_6)
{
    BYTE* const VAR_7 = (BYTE*)VAR_4;
    BYTE* VAR_8 = VAR_7;

    size_t const VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
    if (FUNC_1(VAR_9)) return VAR_9;
    VAR_8 += VAR_9;

    FUNC_4(VAR_9 <= VAR_5);
    VAR_5 -= VAR_9;

    if (VAR_5 < 4) return FUNC_5(VAR_0);
    FUNC_2(VAR_8, 0);
    VAR_8 += 4;

    if (VAR_3->prefs.frameInfo.contentChecksumFlag == VAR_2) {
        U32 const VAR_10 = FUNC_3(&(VAR_3->xxh));
        if (VAR_5 < 8) return FUNC_5(VAR_0);
        FUNC_2(VAR_8, VAR_10);
        VAR_8+=4;
    }

    VAR_3->cStage = 0;
    VAR_3->maxBufferSize = 0;

    if (VAR_3->prefs.frameInfo.contentSize) {
        if (VAR_3->prefs.frameInfo.contentSize != VAR_3->totalInSize)
            return FUNC_5(VAR_1);
    }

    return (size_t)(VAR_8 - VAR_7);
}
