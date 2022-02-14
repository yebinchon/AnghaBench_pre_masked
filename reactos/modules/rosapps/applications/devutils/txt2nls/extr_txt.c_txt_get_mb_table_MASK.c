
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (char) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;
 char* FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char**,int) ;

uint16_t*
FUNC_9(const char *VAR_0, uint16_t VAR_1)
{
    uint16_t *VAR_2;
    char VAR_3[256];
    char *VAR_4;
    uint32_t VAR_5 = 0;
    uint32_t VAR_6;
    uint32_t VAR_7 = 0;
    int VAR_8;
    int VAR_9 = 0;
    FILE *VAR_10;

    VAR_2 = FUNC_5(256 * sizeof(uint16_t));
    if (!VAR_2)
    {
        FUNC_6("Memory allocation failure\n");
        return ((void*)0);
    }


    for (VAR_6 = 0; VAR_6 <= 255; VAR_6++)
        VAR_2[VAR_6] = VAR_1;

    VAR_10 = FUNC_2(VAR_0, "r");
    if (!VAR_10)
    {
        FUNC_6("Unable to read TXT file.\n");
        goto Cleanup;
    }


    VAR_8 = 0;
    while (FUNC_1(VAR_3, sizeof(VAR_3), VAR_10))
    {
        ++VAR_7;

        VAR_4 = FUNC_7(VAR_3, "MBTABLE");
        if (VAR_4)
        {
            VAR_4 += 7;


            while (FUNC_4(*VAR_4)) ++VAR_4;

            VAR_5 = FUNC_8(VAR_4, &VAR_4, 10);
            if (VAR_5 == 0 || VAR_5 > 256)
            {
                FUNC_6("Wrong MBTABLE size: %u (line: %u)\n", VAR_5, VAR_7);
                goto Cleanup;
            }

            VAR_8 = 1;
            break;
        }
    }

    if (!VAR_8)
    {
        FUNC_6("MBTABLE not found.\n");
        goto Cleanup;
    }


    while (FUNC_1(VAR_3, sizeof(VAR_3), VAR_10) && VAR_5)
    {
        uint32_t VAR_11;
        uint32_t VAR_12;

        ++VAR_7;

        VAR_4 = VAR_3;


        while (FUNC_4(*VAR_4)) ++VAR_4;

        if (!*VAR_4 || VAR_4[0] == ';')
            continue;

        VAR_11 = FUNC_8(VAR_4, &VAR_4, 16);
        if (VAR_11 > 0xFF)
        {
            FUNC_6("Wrong char value: %u (line: %u)\n", VAR_11, VAR_7);
            goto Cleanup;
        }


        while (FUNC_4(*VAR_4)) ++VAR_4;

        VAR_12 = FUNC_8(VAR_4, &VAR_4, 16);
        if (VAR_12 > 0xFFFF)
        {
            FUNC_6("Wrong unicode char value: %u (line: %u)\n", VAR_12, VAR_7);
            goto Cleanup;
        }

        VAR_2[VAR_11] = VAR_12;
        --VAR_5;
    }

    VAR_9 = 1;

Cleanup:
    if (!VAR_9)
    {
        FUNC_3(VAR_2);
        VAR_2 = ((void*)0);
    }

    FUNC_0(VAR_10);

    return VAR_2;
}
