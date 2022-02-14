
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (int *,int *,int,int) ;
 int FUNC_6 (int *,int *,int,int) ;

int FUNC_7(int VAR_0, char* VAR_1[])
{
    enum {
        MESSAGE_MAX_BYTES = 1024,
        RING_BUFFER_BYTES = 1024 * 256 + MESSAGE_MAX_BYTES,
    };

    char VAR_2[256] = { 0 };
    char VAR_3[256] = { 0 };
    char VAR_4[256] = { 0 };

    if (VAR_0 < 2)
    {
        FUNC_3("Please specify input filename\n");
        return 0;
    }

    FUNC_4(VAR_2, 256, "%s", VAR_1[1]);
    FUNC_4(VAR_3, 256, "%s.lz4s", VAR_1[1]);
    FUNC_4(VAR_4, 256, "%s.lz4s.dec", VAR_1[1]);

    FUNC_3("inp = [%s]\n", VAR_2);
    FUNC_3("lz4 = [%s]\n", VAR_3);
    FUNC_3("dec = [%s]\n", VAR_4);


    {
        FILE* VAR_5 = FUNC_2(VAR_2, "rb");
        FILE* VAR_6 = FUNC_2(VAR_3, "wb");

        FUNC_5(VAR_6, VAR_5, MESSAGE_MAX_BYTES, RING_BUFFER_BYTES);

        FUNC_1(VAR_6);
        FUNC_1(VAR_5);
    }


    {
        FILE* VAR_7 = FUNC_2(VAR_3, "rb");
        FILE* VAR_8 = FUNC_2(VAR_4, "wb");

        FUNC_6(VAR_8, VAR_7, MESSAGE_MAX_BYTES, RING_BUFFER_BYTES);

        FUNC_1(VAR_8);
        FUNC_1(VAR_7);
    }


    {
        FILE* VAR_9 = FUNC_2(VAR_2, "rb");
        FILE* VAR_10 = FUNC_2(VAR_4, "rb");

        const int VAR_11 = FUNC_0(VAR_9, VAR_10);
        if (0 == VAR_11)
            FUNC_3("Verify : OK\n");
        else
            FUNC_3("Verify : NG\n");

        FUNC_1(VAR_10);
        FUNC_1(VAR_9);
    }

    return 0;
}
