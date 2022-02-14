
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_5__ {int dictID; int contentSize; int blockSizeID; int contentChecksumFlag; int blockChecksumFlag; int blockMode; int frameType; } ;
struct TYPE_4__ {scalar_t__ const* header; size_t tmpInSize; int tmpInTarget; int dStage; TYPE_2__ frameInfo; int frameRemainingSize; int maxBlockSize; } ;
typedef TYPE_1__ LZ4F_dctx ;
typedef int LZ4F_contentChecksum_t ;
typedef int LZ4F_blockSizeID_t ;
typedef int LZ4F_blockMode_t ;
typedef int LZ4F_blockChecksum_t ;
typedef scalar_t__ BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__ const*,size_t) ;
 int FUNC_2 (scalar_t__ const*) ;
 int FUNC_3 (scalar_t__ const*) ;
 int VAR_9 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int FUNC_5 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__ const*,scalar_t__ const*,size_t) ;
 size_t VAR_18 ;

__attribute__((used)) static size_t FUNC_8(LZ4F_dctx* VAR_19, const void* VAR_20, size_t VAR_21)
{
    unsigned VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
    size_t VAR_28;
    const BYTE* VAR_29 = (const BYTE*)VAR_20;


    if (VAR_21 < VAR_18) return FUNC_6(VAR_0);
    FUNC_4(&(VAR_19->frameInfo), 0, sizeof(VAR_19->frameInfo));


    if ((FUNC_2(VAR_29) & 0xFFFFFFF0U) == VAR_7) {
        VAR_19->frameInfo.frameType = VAR_9;
        if (VAR_20 == (void*)(VAR_19->header)) {
            VAR_19->tmpInSize = VAR_21;
            VAR_19->tmpInTarget = 8;
            VAR_19->dStage = VAR_17;
            return VAR_21;
        } else {
            VAR_19->dStage = VAR_14;
            return 4;
        }
    }



    if (FUNC_2(VAR_29) != VAR_6)
        return FUNC_6(VAR_1);

    VAR_19->frameInfo.frameType = VAR_8;


    { U32 const VAR_30 = VAR_29[4];
        U32 const VAR_31 = (VAR_30>>6) & VAR_11;
        VAR_23 = (VAR_30>>4) & VAR_10;
        VAR_22 = (VAR_30>>5) & VAR_10;
        VAR_24 = (VAR_30>>3) & VAR_10;
        VAR_25 = (VAR_30>>2) & VAR_10;
        VAR_26 = VAR_30 & VAR_10;

        if (((VAR_30>>1)&VAR_10) != 0) return FUNC_6(VAR_5);
        if (VAR_31 != 1) return FUNC_6(VAR_3);
    }


    VAR_28 = VAR_18 + (VAR_24?8:0) + (VAR_26?4:0);

    if (VAR_21 < VAR_28) {

        if (VAR_29 != VAR_19->header)
            FUNC_7(VAR_19->header, VAR_29, VAR_21);
        VAR_19->tmpInSize = VAR_21;
        VAR_19->tmpInTarget = VAR_28;
        VAR_19->dStage = VAR_16;
        return VAR_21;
    }

    { U32 const VAR_32 = VAR_29[5];
        VAR_27 = (VAR_32>>4) & VAR_12;

        if (((VAR_32>>7)&VAR_10) != 0) return FUNC_6(VAR_5);
        if (VAR_27 < 4) return FUNC_6(VAR_4);
        if (((VAR_32>>0)&VAR_13) != 0) return FUNC_6(VAR_5);
    }


    FUNC_5(VAR_28 > 5);

    { BYTE const VAR_33 = FUNC_1(VAR_29+4, VAR_28-5);
        if (VAR_33 != VAR_29[VAR_28-1])
            return FUNC_6(VAR_2);
    }



    VAR_19->frameInfo.blockMode = (LZ4F_blockMode_t)VAR_22;
    VAR_19->frameInfo.blockChecksumFlag = (LZ4F_blockChecksum_t)VAR_23;
    VAR_19->frameInfo.contentChecksumFlag = (LZ4F_contentChecksum_t)VAR_25;
    VAR_19->frameInfo.blockSizeID = (LZ4F_blockSizeID_t)VAR_27;
    VAR_19->maxBlockSize = FUNC_0(VAR_27);
    if (VAR_24)
        VAR_19->frameRemainingSize =
            VAR_19->frameInfo.contentSize = FUNC_3(VAR_29+6);
    if (VAR_26)
        VAR_19->frameInfo.dictID = FUNC_2(VAR_29 + VAR_28 - 5);

    VAR_19->dStage = VAR_15;

    return VAR_28;
}
