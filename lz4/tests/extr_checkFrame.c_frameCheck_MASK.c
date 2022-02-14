
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t dstBufferSize; scalar_t__ srcBuffer; int dstBuffer; int ctx; int srcBufferSize; } ;
typedef TYPE_1__ cRess_t ;
struct TYPE_6__ {unsigned int blockSizeID; } ;
typedef TYPE_2__ LZ4F_frameInfo_t ;
typedef size_t LZ4F_errorCode_t ;
typedef int FILE ;


 int FUNC_0 (int,char*,...) ;
 size_t FUNC_1 (int ,int ,size_t*,char*,size_t*,int *) ;
 int FUNC_2 (size_t) ;
 size_t FUNC_3 (int ,TYPE_2__*,char*,size_t*) ;
 scalar_t__ FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (int * const) ;
 size_t FUNC_6 (scalar_t__,int,int ,int * const) ;

int FUNC_7(cRess_t VAR_0, FILE* const VAR_1, unsigned VAR_2, size_t VAR_3)
{
    LZ4F_errorCode_t VAR_4 = 0;
    size_t VAR_5 = 0;
    int VAR_6 = 0;


    for (;;) {
        size_t VAR_7;
        size_t VAR_8 = 0;
        size_t VAR_9 = VAR_0.dstBufferSize;
        size_t VAR_10;
        LZ4F_frameInfo_t VAR_11;


        VAR_7 = FUNC_6(VAR_0.srcBuffer, 1, VAR_0.srcBufferSize, VAR_1);
        if (!VAR_7) break;

        while (VAR_8 < VAR_7) {

            if (!VAR_4) {

                VAR_5 = 0;
                VAR_10 = VAR_7 - VAR_8;
                VAR_4 = FUNC_3(VAR_0.ctx, &VAR_11, (char*)(VAR_0.srcBuffer)+VAR_8, &VAR_10);
                if (FUNC_4(VAR_4))
                    FUNC_0(22, "Error getting frame info: %s",
                                FUNC_2(VAR_4));
                if (VAR_11.blockSizeID != VAR_2)
                    FUNC_0(23, "Block size ID %u != expected %u",
                                VAR_11.blockSizeID, VAR_2);
                VAR_8 += VAR_10;

                VAR_10 = VAR_4;
                VAR_9 = VAR_0.dstBufferSize;
                VAR_4 = FUNC_1(VAR_0.ctx, VAR_0.dstBuffer, &VAR_9, (char*)(VAR_0.srcBuffer)+VAR_8, &VAR_10, ((void*)0));
                if (FUNC_4(VAR_4)) FUNC_0(24, "Decompression error : %s", FUNC_2(VAR_4));
                VAR_8 += VAR_10;
            }
            VAR_9 = VAR_0.dstBufferSize;

            if (VAR_4 > (VAR_7 - VAR_8)) {

                VAR_6 = 1;
                VAR_10 = VAR_7 - VAR_8;
            } else {
                if (VAR_6) {
                    VAR_6 = 0;
                }
                VAR_10 = VAR_4;
            }
            VAR_4 = FUNC_1(VAR_0.ctx, VAR_0.dstBuffer, &VAR_9, (char*)(VAR_0.srcBuffer)+VAR_8, &VAR_10, ((void*)0));
            if (FUNC_4(VAR_4)) FUNC_0(24, "Decompression error : %s", FUNC_2(VAR_4));
            VAR_5 += VAR_9;
            VAR_8 += VAR_10;
            if (!VAR_6) {

                if ((VAR_5 != 0) && (VAR_4 > 4)) {
                    if (VAR_5 != VAR_3)
                        FUNC_0(25, "Block size %u != expected %u, pos %u\n",
                                    (unsigned)VAR_5, (unsigned)VAR_3, (unsigned)VAR_8);
                }
                VAR_5 = 0;
            }
        }
    }

    if (FUNC_5(VAR_1)) FUNC_0(26, "Read error");

    if (VAR_4!=0) FUNC_0(27, "Unfinished stream");

    return 0;
}
