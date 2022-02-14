
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int prefs ;
typedef int options ;
typedef scalar_t__ U64 ;
struct TYPE_10__ {scalar_t__ contentSize; int blockMode; int blockSizeID; } ;
struct TYPE_11__ {int autoFlush; int stableSrc; TYPE_1__ frameInfo; } ;
typedef TYPE_2__ LZ4F_preferences_t ;
typedef TYPE_2__ LZ4F_compressOptions_t ;
typedef int LZ4F_cctx ;
typedef int LZ4F_CDict ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *,void*,size_t,int const*,TYPE_2__*) ;
 size_t FUNC_1 (int *,int *,size_t,TYPE_2__*) ;
 size_t FUNC_2 (size_t,TYPE_2__*) ;
 size_t FUNC_3 (int *,int *,size_t,void const*,size_t,TYPE_2__*) ;
 size_t FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (size_t const) ;
 int FUNC_6 (int ,size_t) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (int) ;
 size_t FUNC_9 (int ) ;

size_t FUNC_10(LZ4F_cctx* VAR_2,
                                     void* VAR_3, size_t VAR_4,
                               const void* VAR_5, size_t VAR_6,
                               const LZ4F_CDict* VAR_7,
                               const LZ4F_preferences_t* VAR_8)
{
    LZ4F_preferences_t VAR_9;
    LZ4F_compressOptions_t VAR_10;
    BYTE* const VAR_11 = (BYTE*) VAR_3;
    BYTE* VAR_12 = VAR_11;
    BYTE* const VAR_13 = VAR_11 + VAR_4;

    if (VAR_8!=((void*)0))
        VAR_9 = *VAR_8;
    else
        FUNC_7(&VAR_9, 0, sizeof(VAR_9));
    if (VAR_9.frameInfo.contentSize != 0)
        VAR_9.frameInfo.contentSize = (U64)VAR_6;

    VAR_9.frameInfo.blockSizeID = FUNC_6(VAR_9.frameInfo.blockSizeID, VAR_6);
    VAR_9.autoFlush = 1;
    if (VAR_6 <= FUNC_4(VAR_9.frameInfo.blockSizeID))
        VAR_9.frameInfo.blockMode = VAR_1;

    FUNC_7(&VAR_10, 0, sizeof(VAR_10));
    VAR_10.stableSrc = 1;

    if (VAR_4 < FUNC_2(VAR_6, &VAR_9))
        return FUNC_9(VAR_0);

    { size_t const VAR_14 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_7, &VAR_9);
      if (FUNC_5(VAR_14)) return VAR_14;
      VAR_12 += VAR_14; }

    FUNC_8(VAR_13 >= VAR_12);
    { size_t const VAR_15 = FUNC_3(VAR_2, VAR_12, (size_t)(VAR_13-VAR_12), VAR_5, VAR_6, &VAR_10);
      if (FUNC_5(VAR_15)) return VAR_15;
      VAR_12 += VAR_15; }

    FUNC_8(VAR_13 >= VAR_12);
    { size_t const VAR_16 = FUNC_1(VAR_2, VAR_12, (size_t)(VAR_13-VAR_12), &VAR_10);
      if (FUNC_5(VAR_16)) return VAR_16;
      VAR_12 += VAR_16; }

    FUNC_8(VAR_13 >= VAR_11);
    return (size_t)(VAR_12 - VAR_11);
}
