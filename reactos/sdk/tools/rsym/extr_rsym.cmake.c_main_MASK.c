
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int elfhdr ;
struct TYPE_14__ {scalar_t__ e_magic; long e_lfanew; } ;
struct TYPE_13__ {int SizeOfOptionalHeader; unsigned int NumberOfSections; } ;
struct TYPE_11__ {scalar_t__ SizeOfImage; int SectionAlignment; } ;
struct TYPE_12__ {TYPE_3__ OptionalHeader; TYPE_5__ FileHeader; } ;
struct TYPE_9__ {scalar_t__ VirtualSize; } ;
struct TYPE_10__ {int Characteristics; scalar_t__ SizeOfRawData; scalar_t__ PointerToRawData; scalar_t__ VirtualAddress; TYPE_1__ Misc; } ;
typedef int PSYMBOLFILE_HEADER ;
typedef TYPE_2__* PIMAGE_SECTION_HEADER ;
typedef TYPE_3__* PIMAGE_OPTIONAL_HEADER ;
typedef TYPE_4__* PIMAGE_NT_HEADERS ;
typedef TYPE_5__* PIMAGE_FILE_HEADER ;
typedef TYPE_6__* PIMAGE_DOS_HEADER ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*,int,size_t,int *) ;
 void* FUNC_9 (char*,size_t*) ;
 int FUNC_10 (TYPE_6__*,char*,int) ;
 int FUNC_11 (char*) ;
 int VAR_4 ;

int FUNC_12(int VAR_5, char* VAR_6[])
{
    unsigned int VAR_7;
    PSYMBOLFILE_HEADER VAR_8;
    PIMAGE_NT_HEADERS VAR_9;
    PIMAGE_DOS_HEADER VAR_10;
    PIMAGE_FILE_HEADER VAR_11;
    PIMAGE_OPTIONAL_HEADER VAR_12;
    PIMAGE_SECTION_HEADER VAR_13, VAR_14;
    char* VAR_15;
    char* VAR_16;
    FILE* VAR_17;
    size_t VAR_18;
    void *VAR_19;
    char VAR_20[] = { '\377', 'E', 'L', 'F' };

    if (VAR_5 != 3)
    {
        FUNC_6(VAR_4, "Usage: rsym <exefile> <symfile>\n");
        FUNC_3(1);
    }

    VAR_15 = FUNC_2(VAR_6[1]);
    VAR_16 = FUNC_2(VAR_6[2]);


    VAR_19 = FUNC_9( VAR_15, &VAR_18);
    if ( !VAR_19 )
    {
        FUNC_6(VAR_4, "An error occured loading '%s'\n", VAR_15);
        FUNC_3(1);
    }


    VAR_10 = (PIMAGE_DOS_HEADER) VAR_19;
    if (VAR_10->e_magic != VAR_0 || VAR_10->e_lfanew == 0L)
    {

        if (!FUNC_10(VAR_10, VAR_20, sizeof(VAR_20)))
            FUNC_3(0);
        FUNC_11("Input file is not a PE image.\n");
        FUNC_7(VAR_19);
        FUNC_3(1);
    }


    VAR_9 = (PIMAGE_NT_HEADERS)((char*)VAR_19 + VAR_10->e_lfanew);
    VAR_11 = &VAR_9->FileHeader;
    VAR_12 = &VAR_9->OptionalHeader;


    VAR_13 = (PIMAGE_SECTION_HEADER)((char*)VAR_12 +
                                             VAR_11->SizeOfOptionalHeader);


    for (VAR_7 = 0; VAR_7 < VAR_11->NumberOfSections; VAR_7++)
    {

        if (FUNC_0(&VAR_13[VAR_7]))
        {

            VAR_13[VAR_7].Characteristics |= VAR_1;
            VAR_13[VAR_7].Characteristics &= ~(VAR_3 | VAR_2);
        }
    }


    VAR_14 = &VAR_13[VAR_11->NumberOfSections - 1];


    VAR_14->SizeOfRawData = VAR_18 - VAR_14->PointerToRawData;


    if (VAR_14->Misc.VirtualSize < VAR_14->SizeOfRawData)
    {

        VAR_14->Misc.VirtualSize = FUNC_1(VAR_14->SizeOfRawData,
                                                 VAR_12->SectionAlignment);


        VAR_12->SizeOfImage = VAR_14->VirtualAddress +
                                      VAR_14->Misc.VirtualSize;
    }


    VAR_17 = FUNC_5(VAR_16, "wb");
    if (VAR_17 == ((void*)0))
    {
        FUNC_11("Cannot open output file");
        FUNC_7(VAR_19);
        FUNC_3(1);
    }


    FUNC_8(VAR_19, 1, VAR_18, VAR_17);
    FUNC_4(VAR_17);
    FUNC_7(VAR_19);

    return 0;
}
