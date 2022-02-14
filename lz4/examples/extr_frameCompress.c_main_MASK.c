
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; double size_in; scalar_t__ size_out; } ;
typedef TYPE_1__ compressResult_t ;
typedef int FILE ;


 int FUNC_0 (int * const,int * const) ;
 TYPE_1__ FUNC_1 (int * const,int * const) ;
 int FUNC_2 (int * const,int * const) ;
 int FUNC_3 (int * const) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int,char*,char const*) ;

int FUNC_7(int VAR_0, const char **VAR_1) {
    char VAR_2[256] = { 0 };
    char VAR_3[256] = { 0 };
    char VAR_4[256] = { 0 };

    if (VAR_0 < 2) {
        FUNC_5("Please specify input filename\n");
        return 0;
    }

    FUNC_6(VAR_2, 256, "%s", VAR_1[1]);
    FUNC_6(VAR_3, 256, "%s.lz4", VAR_1[1]);
    FUNC_6(VAR_4, 256, "%s.lz4.dec", VAR_1[1]);

    FUNC_5("inp = [%s]\n", VAR_2);
    FUNC_5("lz4 = [%s]\n", VAR_3);
    FUNC_5("dec = [%s]\n", VAR_4);


    { FILE* const VAR_5 = FUNC_4(VAR_2, "rb");
        FILE* const VAR_6 = FUNC_4(VAR_3, "wb");

        FUNC_5("compress : %s -> %s\n", VAR_2, VAR_3);
        compressResult_t const VAR_7 = FUNC_1(VAR_5, VAR_6);

        FUNC_3(VAR_6);
        FUNC_3(VAR_5);

        if (VAR_7.error) {
            FUNC_5("compress : failed with code %i\n", VAR_7.error);
            return VAR_7.error;
        }
        FUNC_5("%s: %zu → %zu bytes, %.1f%%\n",
            VAR_2,
            (size_t)VAR_7.size_in, (size_t)VAR_7.size_out,
            (double)VAR_7.size_out / VAR_7.size_in * 100);
        FUNC_5("compress : done\n");
    }


    { FILE* const VAR_8 = FUNC_4(VAR_3, "rb");
        FILE* const VAR_9 = FUNC_4(VAR_4, "wb");

        FUNC_5("decompress : %s -> %s\n", VAR_3, VAR_4);
        int const VAR_10 = FUNC_2(VAR_8, VAR_9);

        FUNC_3(VAR_9);
        FUNC_3(VAR_8);

        if (VAR_10) {
            FUNC_5("decompress : failed with code %i\n", VAR_10);
            return VAR_10;
        }
        FUNC_5("decompress : done\n");
    }


    { FILE* const VAR_11 = FUNC_4(VAR_2, "rb");
        FILE* const VAR_12 = FUNC_4(VAR_4, "rb");

        FUNC_5("verify : %s <-> %s\n", VAR_2, VAR_4);
        int const VAR_13 = FUNC_0(VAR_11, VAR_12);

        FUNC_3(VAR_12);
        FUNC_3(VAR_11);

        if (VAR_13) {
            FUNC_5("corruption detected : decompressed file differs from original\n");
            return VAR_13;
        }
        FUNC_5("verify : OK\n");
    }

    return 0;
}
