
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {double contentSize; int contentChecksumFlag; int blockMode; int blockSizeID; int blockChecksumFlag; } ;
struct TYPE_6__ {size_t frameType; TYPE_5__ lz4FrameInfo; } ;
struct TYPE_7__ {scalar_t__ frameCount; TYPE_1__ frameSummary; int allContentSize; int eqBlockTypes; int eqFrameTypes; int fileSize; } ;
typedef scalar_t__ LZ4IO_infoResult ;
typedef TYPE_1__ LZ4IO_frameInfo_t ;
typedef TYPE_2__ LZ4IO_cFileInfo_t ;
typedef int LZ4F_dctx ;
typedef int FILE ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char*,...) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_2 (int **,int ) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *,TYPE_5__*,unsigned char*,size_t*) ;
 size_t FUNC_5 (unsigned char**,int ) ;
 unsigned int FUNC_6 (size_t) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;


 int FUNC_7 (int ,int ,char*) ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_8 (unsigned int) ;
 int * FUNC_9 (char const*) ;
 void* FUNC_10 (unsigned char*) ;
 unsigned long long FUNC_11 (int * const,int ,int ) ;
 unsigned long long FUNC_12 (int * const) ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (int * const) ;
 int FUNC_15 (int * const) ;
 int FUNC_16 (int * const) ;
 void* FUNC_17 (unsigned char*,int,int,int * const) ;
 int FUNC_18 (int * const,unsigned int const,int ) ;
 long FUNC_19 (int * const) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;

__attribute__((used)) static LZ4IO_infoResult
FUNC_20(LZ4IO_cFileInfo_t* VAR_12, const char* VAR_13)
{
    LZ4IO_infoResult VAR_14 = VAR_5;
    unsigned char VAR_15[VAR_0];
    FILE* const VAR_16 = FUNC_9(VAR_13);
    VAR_12->fileSize = FUNC_13(VAR_13);

    while (!FUNC_15(VAR_16)) {
        LZ4IO_frameInfo_t VAR_17 = VAR_3;
        unsigned VAR_18;

        size_t VAR_19 = FUNC_17(VAR_15, 1, VAR_7, VAR_16);
        if (VAR_19 == 0) { break; }
        VAR_14 = VAR_5;
        if (VAR_19 != VAR_7)
            FUNC_1(40, "Unrecognized header : Magic Number unreadable");
        VAR_18 = FUNC_10(VAR_15);
        if (FUNC_8(VAR_18))
            VAR_18 = 128;

        switch (VAR_18) {
        case 129:
            if (VAR_12->frameSummary.frameType != VAR_10) VAR_12->eqFrameTypes = 0;

            { const size_t VAR_20 = FUNC_17(VAR_15 + VAR_7, 1, VAR_1 - VAR_7, VAR_16);
                if (!VAR_20 || FUNC_16(VAR_16)) FUNC_1(71, "Error reading %s", VAR_13);
            }
            { size_t VAR_21 = FUNC_5(&VAR_15, VAR_1);
                if (!FUNC_6(VAR_21)) {
                    if (VAR_21 > (VAR_1 + VAR_7)) {

                        const size_t VAR_22 = FUNC_17(VAR_15 + VAR_1, 1, VAR_21 - VAR_1, VAR_16);
                        if (!VAR_22 || FUNC_16(VAR_16)) FUNC_1(72, "Error reading %s", VAR_13);
                    }

                    { LZ4F_dctx* VAR_23;
                        unsigned VAR_24 = FUNC_6(FUNC_2(&VAR_23, VAR_2));
                        if (!VAR_24) {
                            VAR_24 = FUNC_6(FUNC_4(VAR_23, &VAR_17.lz4FrameInfo, VAR_15, &VAR_21));
                            FUNC_3(VAR_23);
                            if (!VAR_24) {
                                if ((VAR_12->frameSummary.lz4FrameInfo.blockSizeID != VAR_17.lz4FrameInfo.blockSizeID ||
                                        VAR_12->frameSummary.lz4FrameInfo.blockMode != VAR_17.lz4FrameInfo.blockMode)
                                        && VAR_12->frameCount != 0)
                                    VAR_12->eqBlockTypes = 0;
                                { const unsigned long long VAR_25 = FUNC_11(VAR_16,
                                            VAR_17.lz4FrameInfo.blockChecksumFlag,
                                            VAR_17.lz4FrameInfo.contentChecksumFlag);
                                    if (VAR_25) {
                                        char VAR_26[5];
                                        FUNC_7(VAR_17.lz4FrameInfo.blockSizeID, VAR_17.lz4FrameInfo.blockMode, VAR_26);
                                        FUNC_0(3, "    %6llu %14s %5s %8s",
                                                     VAR_12->frameCount + 1,
                                                     VAR_6[VAR_17.frameType],
                                                     VAR_26,
                                                     VAR_17.lz4FrameInfo.contentChecksumFlag ? "XXH32" : "-");
                                        if (VAR_17.lz4FrameInfo.contentSize) {
                                            { double const VAR_27 = (double)(VAR_25 + VAR_21) / VAR_17.lz4FrameInfo.contentSize * 100;
                                                FUNC_0(3, " %20llu %20llu %9.2f%%\n",
                                                             VAR_25 + VAR_21,
                                                             VAR_17.lz4FrameInfo.contentSize,
                                                             VAR_27);
                                            }

                                            VAR_17.lz4FrameInfo.contentSize += VAR_12->frameSummary.lz4FrameInfo.contentSize;
                                        }
                                        else {
                                            FUNC_0(3, " %20llu %20s %9s \n", VAR_25 + VAR_21, "-", "-");
                                            VAR_12->allContentSize = 0;
                                        }
                                        VAR_14 = VAR_4;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        case 130:
            VAR_17.frameType = VAR_9;
            if (VAR_12->frameSummary.frameType != VAR_9 && VAR_12->frameCount != 0) VAR_12->eqFrameTypes = 0;
            VAR_12->eqBlockTypes = 0;
            VAR_12->allContentSize = 0;
            { const unsigned long long VAR_28 = FUNC_12(VAR_16);
                if (VAR_28) {
                    FUNC_0(3, "    %6llu %14s %5s %8s %20llu %20s %9s\n",
                                 VAR_12->frameCount + 1,
                                 VAR_6[VAR_17.frameType],
                                 "-", "-",
                                 VAR_28 + 4,
                                 "-", "-");
                    VAR_14 = VAR_4;
                }
            }
            break;
        case 128:
            VAR_17.frameType = VAR_11;
            if (VAR_12->frameSummary.frameType != VAR_11 && VAR_12->frameCount != 0) VAR_12->eqFrameTypes = 0;
            VAR_12->eqBlockTypes = 0;
            VAR_12->allContentSize = 0;
            { VAR_19 = FUNC_17(VAR_15, 1, 4, VAR_16);
                if (VAR_19 != 4)
                    FUNC_1(42, "Stream error : skippable size unreadable");
            }
            { unsigned const VAR_29 = FUNC_10(VAR_15);
                int const VAR_30 = FUNC_18(VAR_16, VAR_29, VAR_8);
                if (VAR_30 != 0)
                    FUNC_1(43, "Stream error : cannot skip skippable area");
                FUNC_0(3, "    %6llu %14s %5s %8s %20u %20s %9s\n",
                             VAR_12->frameCount + 1,
                             "SkippableFrame",
                             "-", "-", VAR_29 + 8, "-", "-");

                VAR_14 = VAR_4;
            }
            break;
        default:
            { long int const VAR_31 = FUNC_19(VAR_16);
                FUNC_0(3, "Stream followed by undecodable data ");
                if (VAR_31 != -1L)
                    FUNC_0(3, "at position %i ", (int)VAR_31);
                FUNC_0(3, "\n");
            }
        break;
        }
        if (VAR_14 != VAR_4) {
            break;
        }
        VAR_12->frameSummary = VAR_17;
        VAR_12->frameCount++;
    }
    FUNC_14(VAR_16);
    return VAR_14;
}
