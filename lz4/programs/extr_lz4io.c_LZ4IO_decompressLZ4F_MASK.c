
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* srcBuffer; size_t dstBufferSize; scalar_t__ srcBufferSize; int dstBuffer; int dictBufferSize; int dictBuffer; int dCtx; } ;
typedef TYPE_1__ dRess_t ;
struct TYPE_7__ {int testMode; } ;
typedef TYPE_2__ LZ4IO_prefs_t ;
typedef scalar_t__ LZ4F_errorCode_t ;
typedef int FILE ;


 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int ,int ,size_t*,char*,size_t*,int ,int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 unsigned int FUNC_5 (TYPE_2__* const,int *,int ,size_t,unsigned int) ;
 int FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (char*,int ) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_8 (int *) ;
 size_t FUNC_9 (char*,int,scalar_t__,int *) ;

__attribute__((used)) static unsigned long long FUNC_10(LZ4IO_prefs_t* const VAR_2, dRess_t VAR_3, FILE* VAR_4, FILE* VAR_5)
{
    unsigned long long VAR_6 = 0;
    LZ4F_errorCode_t VAR_7;
    unsigned VAR_8 = 0;


    { size_t VAR_9 = VAR_1;
        size_t VAR_10= 0;
        FUNC_7(VAR_3.srcBuffer, VAR_0);
        VAR_7 = FUNC_2(VAR_3.dCtx, VAR_3.dstBuffer, &VAR_10, VAR_3.srcBuffer, &VAR_9, VAR_3.dictBuffer, VAR_3.dictBufferSize, ((void*)0));
        if (FUNC_4(VAR_7)) FUNC_1(62, "Header error : %s", FUNC_3(VAR_7));
    }


    for (;VAR_7;) {
        size_t VAR_11;
        size_t VAR_12 = 0;
        size_t VAR_13 = VAR_3.dstBufferSize;


        if (VAR_7 > VAR_3.srcBufferSize) VAR_7 = VAR_3.srcBufferSize;
        VAR_11 = FUNC_9(VAR_3.srcBuffer, 1, VAR_7, VAR_4);
        if (!VAR_11) break;

        while ((VAR_12 < VAR_11) || (VAR_13 == VAR_3.dstBufferSize)) {

            size_t VAR_14 = VAR_11 - VAR_12;
            VAR_13 = VAR_3.dstBufferSize;
            VAR_7 = FUNC_2(VAR_3.dCtx, VAR_3.dstBuffer, &VAR_13, (char*)(VAR_3.srcBuffer)+VAR_12, &VAR_14, VAR_3.dictBuffer, VAR_3.dictBufferSize, ((void*)0));
            if (FUNC_4(VAR_7)) FUNC_1(66, "Decompression error : %s", FUNC_3(VAR_7));
            VAR_12 += VAR_14;


            if (VAR_13) {
                if (!VAR_2->testMode)
                    VAR_8 = FUNC_5(VAR_2, VAR_5, VAR_3.dstBuffer, VAR_13, VAR_8);
                VAR_6 += VAR_13;
                FUNC_0(2, "\rDecompressed : %u MB  ", (unsigned)(VAR_6>>20));
            }

            if (!VAR_7) break;
        }
    }

    if (FUNC_8(VAR_4)) FUNC_1(67, "Read error");

    if (!VAR_2->testMode) FUNC_6(VAR_5, VAR_8);
    if (VAR_7!=0) FUNC_1(68, "Unfinished stream");

    return VAR_6;
}
