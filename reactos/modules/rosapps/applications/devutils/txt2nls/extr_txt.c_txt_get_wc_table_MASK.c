
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
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
FUNC_9(const char *VAR_0, uint16_t VAR_1, int VAR_2)
{
    char VAR_3[256];
    char *VAR_4;
    uint16_t *VAR_5;
    uint32_t VAR_6;
    uint32_t VAR_7 = 0;
    uint32_t VAR_8 = 0;
    int VAR_9 = 0;
    int VAR_10;
    FILE *VAR_11;

    VAR_5 = FUNC_5(65536 * (VAR_2 ? sizeof(uint16_t) : sizeof(uint8_t)));
    if (!VAR_5)
    {
        FUNC_6("Memory allocation failure\n");
        return ((void*)0);
    }


    for (VAR_6 = 0; VAR_6 <= 65535; VAR_6++)
    {

        if (VAR_2)
        {
            uint16_t *VAR_12 = (uint16_t*)VAR_5;
            VAR_12[VAR_6] = VAR_1;
        }

        else
        {
            uint8_t *VAR_13 = (uint8_t*)VAR_5;
            VAR_13[VAR_6] = VAR_1;
        }
    }

    VAR_11 = FUNC_2(VAR_0, "r");
    if (!VAR_11)
    {
        FUNC_6("Unable to read TXT file.\n");
        goto Cleanup;
    }


    VAR_10 = 0;
    while (FUNC_1(VAR_3, sizeof(VAR_3), VAR_11))
    {
        ++VAR_8;

        VAR_4 = FUNC_7(VAR_3, "WCTABLE");
        if (VAR_4)
        {
            VAR_4 += 7;


            while (FUNC_4(*VAR_4)) ++VAR_4;

            VAR_7 = FUNC_8(VAR_4, &VAR_4, 10);
            if (VAR_7 == 0 || VAR_7 > 65536)
            {
                FUNC_6("Wrong WCTABLE size: %u (line: %u)\n", VAR_7, VAR_8);
                goto Cleanup;
            }

            VAR_10 = 1;
            break;
        }
    }

    if (!VAR_10)
    {
        FUNC_6("WCTABLE not found.\n");
        goto Cleanup;
    }


    while (FUNC_1(VAR_3, sizeof(VAR_3), VAR_11) && VAR_7)
    {
        uint32_t VAR_14;
        uint32_t VAR_15;

        ++VAR_8;

        VAR_4 = VAR_3;


        while (FUNC_4(*VAR_4)) ++VAR_4;

        if (!*VAR_4 || VAR_4[0] == ';')
            continue;

        VAR_15 = FUNC_8(VAR_4, &VAR_4, 16);
        if (VAR_15 > 0xFFFF)
        {
            FUNC_6("Wrong unicode char value: %u (line: %u)\n", VAR_15, VAR_8);
            goto Cleanup;
        }


        while (FUNC_4(*VAR_4)) ++VAR_4;

        VAR_14 = FUNC_8(VAR_4, &VAR_4, 16);
        if ((VAR_2 && VAR_14 > 0xFFFF) || (!VAR_2 && VAR_14 > 0xFF))
        {
            FUNC_6("Wrong char value: %u (line: %u)\n", VAR_14, VAR_8);
            goto Cleanup;
        }


        if (VAR_2)
        {
            uint16_t *VAR_16 = (uint16_t*)VAR_5;
            VAR_16[VAR_15] = VAR_14;
        }

        else
        {
            uint8_t *VAR_17 = (uint8_t*)VAR_5;
            VAR_17[VAR_15] = VAR_14;
        }

        --VAR_7;
    }

    VAR_9 = 1;

Cleanup:
    if (!VAR_9)
    {
        FUNC_3(VAR_5);
        VAR_5 = ((void*)0);
    }

    FUNC_0(VAR_11);

    return VAR_5;
}
