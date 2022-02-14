
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; unsigned long long size_in; unsigned long long size_out; scalar_t__ error; int member_2; int member_1; } ;
typedef TYPE_1__ compressResult_t ;
typedef int * LZ4F_compressionContext_t ;
typedef int FILE ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int *,void*,size_t,int *) ;
 size_t FUNC_1 (size_t,int *) ;
 size_t FUNC_2 (int *,void*,size_t,int *) ;
 size_t FUNC_3 (int *,void*,size_t,void*,size_t const,int *) ;
 scalar_t__ FUNC_4 (size_t const) ;
 int FUNC_5 (int) ;
 size_t FUNC_6 (void*,int,int ,int *) ;
 int VAR_2 ;
 int FUNC_7 (char*,unsigned int,...) ;
 int FUNC_8 (void*,int,size_t const,int *) ;

__attribute__((used)) static compressResult_t
FUNC_9(FILE* VAR_3, FILE* VAR_4,
                       LZ4F_compressionContext_t VAR_5,
                       void* VAR_6, size_t VAR_7,
                       void* VAR_8, size_t VAR_9)
{
    compressResult_t VAR_10 = { 1, 0, 0 };
    unsigned long long VAR_11 = 0, VAR_12;

    FUNC_5(VAR_3 != ((void*)0)); FUNC_5(VAR_4 != ((void*)0));
    FUNC_5(VAR_5 != ((void*)0));
    FUNC_5(VAR_9 >= VAR_1);
    FUNC_5(VAR_9 >= FUNC_1(VAR_7, &VAR_2));


    { size_t const VAR_13 = FUNC_0(VAR_5, VAR_8, VAR_9, &VAR_2);
        if (FUNC_4(VAR_13)) {
            FUNC_7("Failed to start compression: error %u \n", (unsigned)VAR_13);
            return VAR_10;
        }
        VAR_12 = VAR_13;
        FUNC_7("Buffer size is %u bytes, header size %u bytes \n",
                (unsigned)VAR_9, (unsigned)VAR_13);
        FUNC_8(VAR_8, 1, VAR_13, VAR_4);
    }


    for (;;) {
        size_t const VAR_14 = FUNC_6(VAR_6, 1, VAR_0, VAR_3);
        if (VAR_14 == 0) break;
        VAR_11 += VAR_14;

        size_t const VAR_15 = FUNC_3(VAR_5,
                                                VAR_8, VAR_9,
                                                VAR_6, VAR_14,
                                                ((void*)0));
        if (FUNC_4(VAR_15)) {
            FUNC_7("Compression failed: error %u \n", (unsigned)VAR_15);
            return VAR_10;
        }

        FUNC_7("Writing %u bytes\n", (unsigned)VAR_15);
        FUNC_8(VAR_8, 1, VAR_15, VAR_4);
        VAR_12 += VAR_15;
    }


    { size_t const VAR_16 = FUNC_2(VAR_5,
                                                VAR_8, VAR_9,
                                                ((void*)0));
        if (FUNC_4(VAR_16)) {
            FUNC_7("Failed to end compression: error %u \n", (unsigned)VAR_16);
            return VAR_10;
        }

        FUNC_7("Writing %u bytes \n", (unsigned)VAR_16);
        FUNC_8(VAR_8, 1, VAR_16, VAR_4);
        VAR_12 += VAR_16;
    }

    VAR_10.size_in = VAR_11;
    VAR_10.size_out = VAR_12;
    VAR_10.error = 0;
    return VAR_10;
}
