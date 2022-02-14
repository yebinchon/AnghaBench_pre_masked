
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (char*,int,char*,char*,...) ;
 int FUNC_8 (int *,int *,char*,int) ;
 int FUNC_9 (int *,int *,char*,int,int,int) ;

int FUNC_10(int VAR_3, char* VAR_4[])
{
    char VAR_5[256] = { 0 };
    char VAR_6[256] = { 0 };
    char VAR_7[256] = { 0 };
    char VAR_8[256] = { 0 };
    int VAR_9;
    int VAR_10;
    char VAR_11[VAR_1];
    int VAR_12;

    if(VAR_3 < 5) {
        FUNC_4("Usage: %s input dictionary offset length", VAR_4[0]);
        return 0;
    }

    FUNC_7(VAR_5, 256, "%s", VAR_4[1]);
    FUNC_7(VAR_6, 256, "%s.lz4s-%d", VAR_4[1], VAR_0);
    FUNC_7(VAR_7, 256, "%s.lz4s-%d.dec", VAR_4[1], VAR_0);
    FUNC_7(VAR_8, 256, "%s", VAR_4[2]);
    VAR_9 = FUNC_0(VAR_4[3]);
    VAR_10 = FUNC_0(VAR_4[4]);

    FUNC_4("inp    = [%s]\n", VAR_5);
    FUNC_4("lz4    = [%s]\n", VAR_6);
    FUNC_4("dec    = [%s]\n", VAR_7);
    FUNC_4("dict   = [%s]\n", VAR_8);
    FUNC_4("offset = [%d]\n", VAR_9);
    FUNC_4("length = [%d]\n", VAR_10);


    {
        FILE* VAR_13 = FUNC_3(VAR_8, "rb");
        VAR_12 = (int)FUNC_5(VAR_13, VAR_11, VAR_1);
        FUNC_2(VAR_13);
    }


    {
        FILE* VAR_14 = FUNC_3(VAR_5, "rb");
        FILE* VAR_15 = FUNC_3(VAR_6, "wb");

        FUNC_4("compress : %s -> %s\n", VAR_5, VAR_6);
        FUNC_8(VAR_15, VAR_14, VAR_11, VAR_12);
        FUNC_4("compress : done\n");

        FUNC_2(VAR_15);
        FUNC_2(VAR_14);
    }


    {
        FILE* VAR_16 = FUNC_3(VAR_6, "rb");
        FILE* VAR_17 = FUNC_3(VAR_7, "wb");

        FUNC_4("decompress : %s -> %s\n", VAR_6, VAR_7);
        FUNC_9(VAR_17, VAR_16, VAR_11, VAR_1, VAR_9, VAR_10);
        FUNC_4("decompress : done\n");

        FUNC_2(VAR_17);
        FUNC_2(VAR_16);
    }


    {
        FILE* VAR_18 = FUNC_3(VAR_5, "rb");
        FILE* VAR_19 = FUNC_3(VAR_7, "rb");
        FUNC_6(VAR_18, VAR_9, VAR_2);

        FUNC_4("verify : %s <-> %s\n", VAR_5, VAR_7);
        const int VAR_20 = FUNC_1(VAR_18, VAR_19, VAR_10);
        if(0 == VAR_20) {
            FUNC_4("verify : OK\n");
        } else {
            FUNC_4("verify : NG\n");
        }

        FUNC_2(VAR_19);
        FUNC_2(VAR_18);
    }

    return 0;
}
