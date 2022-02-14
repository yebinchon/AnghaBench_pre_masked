
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int,char*,char*,...) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;

int FUNC_7(int VAR_1, char* VAR_2[])
{
    char VAR_3[256] = { 0 };
    char VAR_4[256] = { 0 };
    char VAR_5[256] = { 0 };

    if(VAR_1 < 2) {
        FUNC_3("Please specify input filename\n");
        return 0;
    }

    FUNC_4(VAR_3, 256, "%s", VAR_2[1]);
    FUNC_4(VAR_4, 256, "%s.lz4s-%d", VAR_2[1], VAR_0);
    FUNC_4(VAR_5, 256, "%s.lz4s-%d.dec", VAR_2[1], VAR_0);

    FUNC_3("inp = [%s]\n", VAR_3);
    FUNC_3("lz4 = [%s]\n", VAR_4);
    FUNC_3("dec = [%s]\n", VAR_5);


    {
        FILE* VAR_6 = FUNC_2(VAR_3, "rb");
        FILE* VAR_7 = FUNC_2(VAR_4, "wb");

        FUNC_3("compress : %s -> %s\n", VAR_3, VAR_4);
        FUNC_5(VAR_7, VAR_6);
        FUNC_3("compress : done\n");

        FUNC_1(VAR_7);
        FUNC_1(VAR_6);
    }


    {
        FILE* VAR_8 = FUNC_2(VAR_4, "rb");
        FILE* VAR_9 = FUNC_2(VAR_5, "wb");

        FUNC_3("decompress : %s -> %s\n", VAR_4, VAR_5);
        FUNC_6(VAR_9, VAR_8);
        FUNC_3("decompress : done\n");

        FUNC_1(VAR_9);
        FUNC_1(VAR_8);
    }


    {
        FILE* VAR_10 = FUNC_2(VAR_3, "rb");
        FILE* VAR_11 = FUNC_2(VAR_5, "rb");

        FUNC_3("verify : %s <-> %s\n", VAR_3, VAR_5);
        const int VAR_12 = FUNC_0(VAR_10, VAR_11);
        if(0 == VAR_12) {
            FUNC_3("verify : OK\n");
        } else {
            FUNC_3("verify : NG\n");
        }

        FUNC_1(VAR_11);
        FUNC_1(VAR_10);
    }

    return 0;
}
