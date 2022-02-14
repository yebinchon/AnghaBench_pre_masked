
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* uint16_t ;
typedef int buf ;
struct TYPE_3__ {int HeaderSize; void* TransUniDefaultChar; void* UniDefaultChar; void* TransDefaultChar; void* DefaultChar; void* MaximumCharacterSize; void* CodePage; } ;
typedef TYPE_1__ NLS_FILE_HEADER ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char**,int) ;

int
FUNC_7(const char *VAR_0, NLS_FILE_HEADER *VAR_1)
{
    FILE *VAR_2;
    char *VAR_3;
    char VAR_4[256];
    uint32_t VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7;
    uint32_t VAR_8;

    VAR_2 = FUNC_2(VAR_0, "r");
    if (!VAR_2)
    {
        FUNC_4("Unable to read TXT file.\n");
        return 0;
    }


    VAR_7 = 0;
    while (FUNC_1(VAR_4, sizeof(VAR_4), VAR_2))
    {
        ++VAR_5;

        VAR_3 = FUNC_5(VAR_4, "CODEPAGE");
        if (VAR_3)
        {

            VAR_3 += 8;


            while (FUNC_3(*VAR_3)) ++VAR_3;


            VAR_8 = FUNC_6(VAR_3, &VAR_3, 10);


            if (VAR_8 > 0xFFFF)
            {
                FUNC_4("Wrong codepage: %u (line: %u)\n", VAR_8, VAR_5);
                goto Cleanup;
            }

            VAR_1->CodePage = (uint16_t)VAR_8;

            VAR_7 = 1;
            break;
        }
    }

    if (!VAR_7)
    {
        FUNC_4("CODEPAGE not found.\n");
        goto Cleanup;
    }


    VAR_7 = 0;
    while (FUNC_1(VAR_4, sizeof(VAR_4), VAR_2))
    {
        ++VAR_5;

        VAR_3 = FUNC_5(VAR_4, "CPINFO");
        if (VAR_3)
        {

            VAR_3 += 6;


            while (FUNC_3(*VAR_3)) ++VAR_3;


            VAR_8 = FUNC_6(VAR_3, &VAR_3, 10);


            if (VAR_8 != 1 && VAR_8 != 2)
            {
                FUNC_4("Wrong character size: %u (line: %u)\n", VAR_8, VAR_5);
                goto Cleanup;
            }

            VAR_1->MaximumCharacterSize = (uint16_t)VAR_8;


            while (FUNC_3(*VAR_3)) ++VAR_3;


            VAR_8 = FUNC_6(VAR_3, &VAR_3, 16);
            VAR_1->DefaultChar = (uint16_t)VAR_8;

            VAR_1->TransDefaultChar = (uint16_t)VAR_8;


            while (FUNC_3(*VAR_3)) ++VAR_3;


            VAR_8 = FUNC_6(VAR_3, &VAR_3, 16);
            VAR_1->UniDefaultChar = (uint16_t)VAR_8;

            VAR_1->TransUniDefaultChar = (uint16_t)VAR_8;

            VAR_7 = 1;
            break;
        }
    }

    if (!VAR_7)
    {
        FUNC_4("CPINFO not found.\n");
        goto Cleanup;
    }

    VAR_1->HeaderSize = sizeof(NLS_FILE_HEADER) / sizeof(uint16_t);

    VAR_6 = 1;

Cleanup:
    FUNC_0(VAR_2);

    return VAR_6;
}
