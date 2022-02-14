
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int elfhdr ;
typedef scalar_t__ ULONG ;
struct TYPE_16__ {scalar_t__ e_magic; long e_lfanew; } ;
struct TYPE_15__ {int SizeOfOptionalHeader; } ;
struct TYPE_14__ {scalar_t__ ImageBase; } ;
struct TYPE_13__ {int SymbolsOffset; int StringsOffset; scalar_t__ StringsLength; scalar_t__ SymbolsLength; } ;
typedef int SYMBOLFILE_HEADER ;
typedef int ROSSYM_ENTRY ;
typedef TYPE_1__* PSYMBOLFILE_HEADER ;
typedef void* PROSSYM_ENTRY ;
typedef scalar_t__ PIMAGE_SECTION_HEADER ;
typedef TYPE_2__* PIMAGE_OPTIONAL_HEADER ;
typedef TYPE_3__* PIMAGE_FILE_HEADER ;
typedef TYPE_4__* PIMAGE_DOS_HEADER ;
typedef int FILE ;
typedef int DWORD ;
typedef int BOOLEAN ;


 scalar_t__ FUNC_0 (scalar_t__*,void**,scalar_t__*,void*,scalar_t__,void*,scalar_t__,void*,scalar_t__,TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_1 (void*,int,char*,scalar_t__*,void**,scalar_t__*,void**) ;
 scalar_t__ FUNC_2 (scalar_t__*,void**,scalar_t__*,void*,scalar_t__,void*,scalar_t__,void*,scalar_t__,TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,void*,TYPE_4__*,TYPE_3__*,TYPE_2__*,scalar_t__,scalar_t__,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (void*,TYPE_3__*,scalar_t__,scalar_t__*,void**,scalar_t__*,void**) ;
 scalar_t__ FUNC_5 (void*,TYPE_3__*,scalar_t__,scalar_t__*,void**,scalar_t__*,void**) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__*,void**,scalar_t__,void*,scalar_t__,void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*,char*,int ) ;
 int FUNC_9 (void*,void*,char*,char*,int ,size_t) ;
 int FUNC_10 (int) ;
 int FUNC_11 (void*,int) ;
 int VAR_3 ;
 int FUNC_12 (int) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 void* FUNC_16 (char*,char*) ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (void*) ;
 void* FUNC_19 (char*,size_t*) ;
 void* FUNC_20 (scalar_t__) ;
 int FUNC_21 (TYPE_4__*,char*,int) ;
 int FUNC_22 (char*,void*,scalar_t__) ;
 int FUNC_23 (void*,char,scalar_t__) ;
 int FUNC_24 (char*) ;
 void* FUNC_25 (void*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_26 (char*,char*) ;
 char* FUNC_27 (char*) ;

int FUNC_28(int VAR_5, char* VAR_6[])
{
    PSYMBOLFILE_HEADER VAR_7;
    PIMAGE_DOS_HEADER VAR_8;
    PIMAGE_FILE_HEADER VAR_9;
    PIMAGE_OPTIONAL_HEADER VAR_10;
    PIMAGE_SECTION_HEADER VAR_11;
    ULONG VAR_12;
    void *VAR_13;
    ULONG VAR_14;
    void *VAR_15;
    ULONG VAR_16;
    void *VAR_17 = ((void*)0);
    ULONG VAR_18;
    void *VAR_19 = ((void*)0);
    ULONG VAR_20;
    char* VAR_21;
    char* VAR_22;
    FILE* VAR_23;
    void *VAR_24 = ((void*)0);
    ULONG VAR_25 = 0;
    ULONG VAR_26 = 0;
    PROSSYM_ENTRY VAR_27 = ((void*)0);
    ULONG VAR_28 = 0;
    PROSSYM_ENTRY VAR_29 = ((void*)0);
    ULONG VAR_30 = 0;
    PROSSYM_ENTRY VAR_31 = ((void*)0);
    size_t VAR_32;
    void *VAR_33;
    ULONG VAR_34;
    void *VAR_35;
    DWORD VAR_36;
    void *VAR_37;
    char VAR_38[4] = { '\177', 'E', 'L', 'F' };
    BOOLEAN VAR_39 = VAR_1;
    int VAR_40, VAR_41 = 0;
    char *VAR_42 = ((void*)0);

    for (VAR_40 = 1; VAR_40 < VAR_5; VAR_40++)
    {
        switch (VAR_41)
        {
            default:
                VAR_41 = -1;
                break;

            case 0:
                if (!FUNC_26(VAR_6[VAR_40], "-s"))
                {
                    VAR_41 = 1;
                }
                else
                {
                    VAR_41 = 2;
                    VAR_21 = FUNC_13(VAR_6[VAR_40]);
                }
            break;

            case 1:
                FUNC_18(VAR_42);
                VAR_42 = FUNC_27(VAR_6[VAR_40]);
                VAR_41 = 0;
                break;

            case 2:
                VAR_22 = FUNC_13(VAR_6[VAR_40]);
                VAR_41 = 3;
                break;
        }
    }

    if (VAR_41 != 3)
    {
        FUNC_17(VAR_4, "Usage: rsym [-s <sources>] <input> <output>\n");
        FUNC_14(1);
    }

    VAR_33 = FUNC_19(VAR_21, &VAR_32);
    if (!VAR_33)
    {
        FUNC_17(VAR_4, "An error occured loading '%s'\n", VAR_21);
        FUNC_14(1);
    }

    VAR_37 = FUNC_16(VAR_21, "rb");


    VAR_8 = (PIMAGE_DOS_HEADER) VAR_33;
    if (VAR_8->e_magic != VAR_2 ||
        VAR_8->e_lfanew == 0L)
    {

        if (!FUNC_21(VAR_8, VAR_38, sizeof(VAR_38)))
            FUNC_14(0);
        FUNC_24("Input file is not a PE image.\n");
        FUNC_18(VAR_33);
        FUNC_14(1);
    }



    VAR_9 = (PIMAGE_FILE_HEADER)((char *) VAR_33 + VAR_8->e_lfanew + sizeof(ULONG));


    FUNC_12(sizeof(ULONG) == 4);
    VAR_10 = (PIMAGE_OPTIONAL_HEADER)(VAR_9 + 1);
    VAR_12 = VAR_10->ImageBase;


    VAR_11 = (PIMAGE_SECTION_HEADER)((char *) VAR_10 + VAR_9->SizeOfOptionalHeader);

    if (FUNC_5(VAR_33,
                    VAR_9,
                    VAR_11,
                    &VAR_14,
                    &VAR_13,
                    &VAR_16,
                    &VAR_15))
    {
        FUNC_18(VAR_33);
        FUNC_14(1);
    }

    if (VAR_14 == 0)
    {




        FUNC_10(0x10000 | 0x800000 | 0x40 | 0x10);
        FUNC_8(VAR_33, ".", 0);

        VAR_36 = FUNC_9(VAR_33, VAR_37, VAR_21, VAR_21, 0, VAR_32) & 0xffffffff;

        if (FUNC_1(VAR_33,
                           VAR_36,
                           VAR_42,
                           &VAR_26,
                           &VAR_27,
                           &VAR_25,
                           &VAR_24))
        {
            FUNC_18(VAR_33);
            FUNC_14(1);
        }

        VAR_39 = VAR_3;
        FUNC_11(VAR_33, VAR_36);
        FUNC_7(VAR_33);
    }

    if (FUNC_4(VAR_33,
                    VAR_9,
                    VAR_11,
                    &VAR_18,
                    &VAR_17,
                    &VAR_20,
                    &VAR_19))
    {
        FUNC_18(VAR_33);
        FUNC_14(1);
    }

    if (!VAR_39)
    {
        VAR_24 = FUNC_20(1 + VAR_25 + VAR_20 +
                            (VAR_18 / sizeof(ROSSYM_ENTRY)) * (VAR_0 + 1));
        if (VAR_24 == ((void*)0))
        {
            FUNC_18(VAR_33);
            FUNC_17(VAR_4, "Failed to allocate memory for strings table\n");
            FUNC_14(1);
        }

        *((char *) VAR_24) = '\0';
        VAR_25 = 1;

        if (FUNC_2(&VAR_26,
                         &VAR_27,
                         &VAR_25,
                         VAR_24,
                         VAR_14,
                         VAR_13,
                         VAR_16,
                         VAR_15,
                         VAR_12,
                         VAR_9,
                         VAR_11))
        {
            FUNC_18(VAR_24);
            FUNC_18(VAR_33);
            FUNC_17(VAR_4, "Failed to allocate memory for strings table\n");
            FUNC_14(1);
        }
    }
    else
    {
        VAR_24 = FUNC_25(VAR_24, VAR_25 + VAR_20);
        if (!VAR_24)
        {
            FUNC_18(VAR_33);
            FUNC_17(VAR_4, "Failed to allocate memory for strings table\n");
            FUNC_14(1);
        }
    }

    if (FUNC_0(&VAR_28,
                     &VAR_29,
                     &VAR_25,
                     VAR_24,
                     VAR_18,
                     VAR_17,
                     VAR_20,
                     VAR_19,
                     VAR_12,
                     VAR_9,
                     VAR_11))
    {
        if (VAR_27)
        {
            FUNC_18(VAR_27);
        }
        FUNC_18(VAR_24);
        FUNC_18(VAR_33);
        FUNC_14(1);
    }

    if (FUNC_6(&VAR_30,
                           &VAR_31,
                           VAR_26,
                           VAR_27,
                           VAR_28,
                           VAR_29))
    {
        if (VAR_29)
        {
            FUNC_18(VAR_29);
        }
        if (VAR_27)
        {
            FUNC_18(VAR_27);
        }
        FUNC_18(VAR_24);
        FUNC_18(VAR_33);
        FUNC_14(1);
    }

    if (VAR_29)
    {
        FUNC_18(VAR_29);
    }
    if (VAR_27)
    {
        FUNC_18(VAR_27);
    }
    if (VAR_30 == 0)
    {
        VAR_34 = 0;
        VAR_35 = ((void*)0);
    }
    else
    {
        VAR_34 = sizeof(SYMBOLFILE_HEADER) +
                       VAR_30 * sizeof(ROSSYM_ENTRY) +
                       VAR_25;

        VAR_35 = FUNC_20(VAR_34);
        if (VAR_35 == ((void*)0))
        {
            FUNC_18(VAR_31);
            FUNC_18(VAR_24);
            FUNC_18(VAR_33);
            FUNC_17(VAR_4, "Unable to allocate memory for .rossym section\n");
            FUNC_14(1);
        }
        FUNC_23(VAR_35, '\0', VAR_34);

        VAR_7 = (PSYMBOLFILE_HEADER)VAR_35;
        VAR_7->SymbolsOffset = sizeof(SYMBOLFILE_HEADER);
        VAR_7->SymbolsLength = VAR_30 * sizeof(ROSSYM_ENTRY);
        VAR_7->StringsOffset = VAR_7->SymbolsOffset +
                                          VAR_7->SymbolsLength;
        VAR_7->StringsLength = VAR_25;

        FUNC_22((char *) VAR_35 + VAR_7->SymbolsOffset,
               VAR_31,
               VAR_7->SymbolsLength);

        FUNC_22((char *) VAR_35 + VAR_7->StringsOffset,
               VAR_24,
               VAR_7->StringsLength);

        FUNC_18(VAR_31);
    }

    FUNC_18(VAR_24);
    VAR_23 = FUNC_16(VAR_22, "wb");
    if (VAR_23 == ((void*)0))
    {
        FUNC_24("Cannot open output file");
        FUNC_18(VAR_35);
        FUNC_18(VAR_33);
        FUNC_14(1);
    }

    if (FUNC_3(VAR_23,
                         VAR_33,
                         VAR_8,
                         VAR_9,
                         VAR_10,
                         VAR_11,
                         VAR_34,
                         VAR_35))
    {
        FUNC_15(VAR_23);
        if (VAR_35)
        {
            FUNC_18(VAR_35);
        }
        FUNC_18(VAR_33);
        FUNC_14(1);
    }

    FUNC_15(VAR_23);
    if (VAR_35)
    {
        FUNC_18(VAR_35);
    }
    FUNC_18(VAR_33);

    return 0;
}
