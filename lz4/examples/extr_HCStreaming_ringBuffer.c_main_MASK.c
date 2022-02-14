
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 size_t FUNC_0 (int * const,int * const) ;
 int FUNC_1 (int * const) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int,char*,char const*,...) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (int * const,int * const) ;
 int FUNC_8 (int * const,int * const) ;

int FUNC_9(int VAR_0, const char** VAR_1)
{
    char VAR_2[256] = { 0 };
    char VAR_3[256] = { 0 };
    char VAR_4[256] = { 0 };
    unsigned VAR_5 = 1;
    unsigned VAR_6 = 0;


    if(VAR_0 < 2) {
        FUNC_4("Please specify input filename\n");
        return 0;
    }

    if (!FUNC_6(VAR_1[1], "-p")) { VAR_6 = 1; VAR_5 = 2; }

    FUNC_5(VAR_2, 256, "%s", VAR_1[VAR_5]);
    FUNC_5(VAR_3, 256, "%s.lz4s-%d", VAR_1[VAR_5], 9);
    FUNC_5(VAR_4, 256, "%s.lz4s-%d.dec", VAR_1[VAR_5], 9);

    FUNC_4("input   = [%s]\n", VAR_2);
    FUNC_4("lz4     = [%s]\n", VAR_3);
    FUNC_4("decoded = [%s]\n", VAR_4);


    { FILE* const VAR_7 = FUNC_2(VAR_2, "rb");
        FILE* const VAR_8 = FUNC_2(VAR_3, "wb");

        FUNC_7(VAR_8, VAR_7);

        FUNC_1(VAR_8);
        FUNC_1(VAR_7);
    }


    { FILE* const VAR_9 = FUNC_2(VAR_3, "rb");
        FILE* const VAR_10 = FUNC_2(VAR_4, "wb");

        FUNC_8(VAR_10, VAR_9);

        FUNC_1(VAR_10);
        FUNC_1(VAR_9);
    }


    { FILE* const VAR_11 = FUNC_2(VAR_2, "rb");
        FILE* const VAR_12 = FUNC_2(VAR_4, "rb");

        const size_t VAR_13 = FUNC_0(VAR_11, VAR_12);
        if(0 == VAR_13) {
            FUNC_4("Verify : OK\n");
        } else {
            FUNC_4("Verify : NG : error at pos %u\n", (unsigned)VAR_13-1);
        }

        FUNC_1(VAR_12);
        FUNC_1(VAR_11);
    }

    if (VAR_6) {
        int VAR_14;
        FUNC_4("Press enter to continue ...\n");
        VAR_14 = FUNC_3(); (void)VAR_14;
    }

    return 0;
}
