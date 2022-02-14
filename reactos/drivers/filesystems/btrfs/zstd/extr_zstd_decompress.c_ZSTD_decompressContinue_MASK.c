
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int lastBlock; int origSize; int blockType; } ;
typedef TYPE_2__ blockProperties_t ;
struct TYPE_9__ {size_t frameContentSize; int checksumFlag; } ;
struct TYPE_11__ {size_t expected; int stage; size_t headerBuffer; size_t headerSize; size_t decodedSize; char* previousDstEnd; int xxhState; TYPE_1__ fParams; int rleSize; int bType; int format; } ;
typedef TYPE_3__ ZSTD_DCtx ;
typedef int U32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 size_t FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,void*,size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_6 (TYPE_3__*,void*) ;
 size_t FUNC_7 (void*,size_t,void const*,size_t) ;
 int FUNC_8 (TYPE_3__*,size_t,size_t) ;
 size_t FUNC_9 (TYPE_3__*,void*,size_t,void const*,size_t,int) ;
 int VAR_5 ;
 size_t FUNC_10 (void const*,size_t,int ) ;
 size_t FUNC_11 (void const*,void*,TYPE_2__*) ;
 int FUNC_12 (size_t const) ;
 size_t FUNC_13 (void*,size_t,void const*,size_t,int ) ;
 size_t VAR_6 ;
 int FUNC_14 (int) ;




 int VAR_7 ;
 int VAR_8 ;
 int FUNC_15 (size_t,void const*,size_t) ;
 int VAR_9 ;

size_t FUNC_16(ZSTD_DCtx* VAR_10, void* VAR_11, size_t VAR_12, const void* VAR_13, size_t VAR_14)
{
    FUNC_1(5, "ZSTD_decompressContinue (srcSize:%u)", (U32)VAR_14);

    if (VAR_14 != VAR_10->expected) return FUNC_2(VAR_9);
    if (VAR_12) FUNC_6(VAR_10, VAR_11);

    switch (VAR_10->stage)
    {
    case 133 :
        FUNC_14(VAR_13 != ((void*)0));
        if (VAR_10->format == VAR_5) {
            FUNC_14(VAR_14 >= VAR_2);
            if ((FUNC_3(VAR_13) & 0xFFFFFFF0U) == VAR_3) {
                FUNC_15(VAR_10->headerBuffer, VAR_13, VAR_14);
                VAR_10->expected = VAR_6 - VAR_14;
                VAR_10->stage = 136;
                return 0;
        } }
        VAR_10->headerSize = FUNC_10(VAR_13, VAR_14, VAR_10->format);
        if (FUNC_12(VAR_10->headerSize)) return VAR_10->headerSize;
        FUNC_15(VAR_10->headerBuffer, VAR_13, VAR_14);
        VAR_10->expected = VAR_10->headerSize - VAR_14;
        VAR_10->stage = 137;
        return 0;

    case 137:
        FUNC_14(VAR_13 != ((void*)0));
        FUNC_15(VAR_10->headerBuffer + (VAR_10->headerSize - VAR_14), VAR_13, VAR_14);
        FUNC_0(FUNC_8(VAR_10, VAR_10->headerBuffer, VAR_10->headerSize));
        VAR_10->expected = VAR_4;
        VAR_10->stage = 138;
        return 0;

    case 138:
        { blockProperties_t VAR_15;
            size_t const VAR_16 = FUNC_11(VAR_13, VAR_4, &VAR_15);
            if (FUNC_12(VAR_16)) return VAR_16;
            VAR_10->expected = VAR_16;
            VAR_10->bType = VAR_15.blockType;
            VAR_10->rleSize = VAR_15.origSize;
            if (VAR_16) {
                VAR_10->stage = VAR_15.lastBlock ? 134 : 135;
                return 0;
            }

            if (VAR_15.lastBlock) {
                if (VAR_10->fParams.checksumFlag) {
                    VAR_10->expected = 4;
                    VAR_10->stage = 139;
                } else {
                    VAR_10->expected = 0;
                    VAR_10->stage = 133;
                }
            } else {
                VAR_10->expected = VAR_4;
                VAR_10->stage = 138;
            }
            return 0;
        }

    case 134:
    case 135:
        FUNC_1(5, "ZSTD_decompressContinue: case ZSTDds_decompressBlock");
        { size_t VAR_17;
            switch(VAR_10->bType)
            {
            case 131:
                FUNC_1(5, "ZSTD_decompressContinue: case bt_compressed");
                VAR_17 = FUNC_9(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, 1);
                break;
            case 130 :
                VAR_17 = FUNC_7(VAR_11, VAR_12, VAR_13, VAR_14);
                break;
            case 128 :
                VAR_17 = FUNC_13(VAR_11, VAR_12, VAR_13, VAR_14, VAR_10->rleSize);
                break;
            case 129 :
            default:
                return FUNC_2(VAR_8);
            }
            if (FUNC_12(VAR_17)) return VAR_17;
            FUNC_1(5, "ZSTD_decompressContinue: decoded size from block : %u", (U32)VAR_17);
            VAR_10->decodedSize += VAR_17;
            if (VAR_10->fParams.checksumFlag) FUNC_5(&VAR_10->xxhState, VAR_11, VAR_17);

            if (VAR_10->stage == 134) {
                FUNC_1(4, "ZSTD_decompressContinue: decoded size from frame : %u", (U32)VAR_10->decodedSize);
                if (VAR_10->fParams.frameContentSize != VAR_1) {
                    if (VAR_10->decodedSize != VAR_10->fParams.frameContentSize) {
                        return FUNC_2(VAR_8);
                } }
                if (VAR_10->fParams.checksumFlag) {
                    VAR_10->expected = 4;
                    VAR_10->stage = 139;
                } else {
                    VAR_10->expected = 0;
                    VAR_10->stage = 133;
                }
            } else {
                VAR_10->stage = 138;
                VAR_10->expected = VAR_4;
                VAR_10->previousDstEnd = (char*)VAR_11 + VAR_17;
            }
            return VAR_17;
        }

    case 139:
        FUNC_14(VAR_14 == 4);
        { U32 const VAR_18 = (U32)FUNC_4(&VAR_10->xxhState);
            U32 const VAR_19 = FUNC_3(VAR_13);
            FUNC_1(4, "ZSTD_decompressContinue: checksum : calculated %08X :: %08X read", VAR_18, VAR_19);
            if (VAR_19 != VAR_18) return FUNC_2(VAR_7);
            VAR_10->expected = 0;
            VAR_10->stage = 133;
            return 0;
        }

    case 136:
        FUNC_14(VAR_13 != ((void*)0));
        FUNC_14(VAR_14 <= VAR_6);
        FUNC_15(VAR_10->headerBuffer + (VAR_6 - VAR_14), VAR_13, VAR_14);
        VAR_10->expected = FUNC_3(VAR_10->headerBuffer + VAR_2);
        VAR_10->stage = 132;
        return 0;

    case 132:
        VAR_10->expected = 0;
        VAR_10->stage = 133;
        return 0;

    default:
        return FUNC_2(VAR_0);
    }
}
