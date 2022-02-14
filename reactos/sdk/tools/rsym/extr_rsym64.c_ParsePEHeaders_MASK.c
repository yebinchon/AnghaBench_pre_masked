
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {int idx; int p; TYPE_2__* psh; } ;
struct TYPE_13__ {int FilePtr; int HeaderSize; int Symbols; char* Strings; int AllSections; int UsedSections; int* UseSection; int NewSectionHeaderSize; TYPE_1__ eh_frame; TYPE_2__* NewSectionHeaders; TYPE_2__* SectionHeaders; TYPE_3__* OptionalHeader; TYPE_4__* FileHeader; int ImageBase; TYPE_5__* DosHeader; scalar_t__ cbInFileSize; } ;
struct TYPE_12__ {scalar_t__ e_magic; long e_lfanew; } ;
struct TYPE_11__ {scalar_t__ Machine; int SizeOfOptionalHeader; int PointerToSymbolTable; int NumberOfSymbols; int NumberOfSections; } ;
struct TYPE_10__ {int CheckSum; int FileAlignment; int ImageBase; } ;
struct TYPE_9__ {int PointerToRawData; int SizeOfRawData; int Characteristics; scalar_t__ Name; } ;
typedef TYPE_2__* PIMAGE_SECTION_HEADER ;
typedef TYPE_3__* PIMAGE_OPTIONAL_HEADER64 ;
typedef TYPE_4__* PIMAGE_FILE_HEADER ;
typedef TYPE_5__* PIMAGE_DOS_HEADER ;
typedef TYPE_6__* PFILE_INFO ;
typedef int IMAGE_SECTION_HEADER ;
typedef int IMAGE_FILE_HEADER ;
typedef int DWORD ;


 int FUNC_0 (int ,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,...) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 unsigned long FUNC_6 (char*,int ,int) ;

int
FUNC_7(PFILE_INFO VAR_3)
{
    DWORD VAR_4, VAR_5;
    ULONG VAR_6, VAR_7;
    int VAR_8, VAR_9;


    VAR_3->DosHeader = (PIMAGE_DOS_HEADER)VAR_3->FilePtr;
    if ((VAR_3->DosHeader->e_magic != VAR_0) ||
        (VAR_3->DosHeader->e_lfanew == 0L))
    {
        FUNC_4("Input file is not a PE image.\n");
        return -1;
    }


    VAR_3->FileHeader = (PIMAGE_FILE_HEADER)(VAR_3->FilePtr +
                               VAR_3->DosHeader->e_lfanew + sizeof(ULONG));


    if (VAR_3->FileHeader->Machine != VAR_1)
    {
        FUNC_4("Input file is not an x64 image.\n");
        return -1;
    }


    VAR_3->OptionalHeader = (PIMAGE_OPTIONAL_HEADER64)(VAR_3->FileHeader + 1);


    VAR_4 = VAR_3->OptionalHeader->CheckSum;
    VAR_3->OptionalHeader->CheckSum = 0;
    VAR_5 = FUNC_0(0, VAR_3->FilePtr, VAR_3->cbInFileSize);
    VAR_5 += VAR_3->cbInFileSize;
    if ((VAR_5 & 0xffff) != (VAR_4 & 0xffff))
    {
        FUNC_2(VAR_2, "Input file has incorrect PE checksum: 0x%x (calculated: 0x%x)\n",
            VAR_4, VAR_5);

    }


    VAR_3->SectionHeaders = (PIMAGE_SECTION_HEADER)((char*)VAR_3->OptionalHeader
                           + VAR_3->FileHeader->SizeOfOptionalHeader);

    VAR_3->HeaderSize = VAR_3->DosHeader->e_lfanew
                       + sizeof(ULONG)
                       + sizeof(IMAGE_FILE_HEADER)
                       + VAR_3->FileHeader->SizeOfOptionalHeader;

    if (!VAR_3->FileHeader->PointerToSymbolTable)
    {
        FUNC_2(VAR_2, "No symbol table.\n");
        return -1;
    }


    VAR_3->ImageBase = VAR_3->OptionalHeader->ImageBase;
    VAR_3->Symbols = VAR_3->FilePtr + VAR_3->FileHeader->PointerToSymbolTable;
    VAR_3->Strings = (char*)VAR_3->Symbols + VAR_3->FileHeader->NumberOfSymbols * 18;


    VAR_3->AllSections = VAR_3->FileHeader->NumberOfSections;
    VAR_6 = VAR_3->OptionalHeader->FileAlignment;
    VAR_3->NewSectionHeaders = FUNC_3((VAR_3->AllSections+2) * sizeof(IMAGE_SECTION_HEADER));
    VAR_3->UsedSections = 0;
    VAR_3->eh_frame.idx = -1;


    VAR_3->UseSection = FUNC_3(VAR_3->AllSections);

    for (VAR_8 = 0; VAR_8 < VAR_3->AllSections; VAR_8++)
    {
        char *VAR_10 = (char*)VAR_3->SectionHeaders[VAR_8].Name;
        VAR_3->UseSection[VAR_8] = 1;


        if (VAR_10[0] == '/')
        {
            unsigned long VAR_11 = FUNC_6(VAR_10+1, 0, 10);
            VAR_10 = VAR_3->Strings + VAR_11;


            VAR_3->UseSection[VAR_8] = 0;
        }


        if (FUNC_5(VAR_10, ".eh_frame") == 0)
        {
            VAR_3->eh_frame.psh = &VAR_3->SectionHeaders[VAR_8];
            VAR_3->eh_frame.idx = VAR_8;
            VAR_3->eh_frame.p = VAR_3->FilePtr + VAR_3->eh_frame.psh->PointerToRawData;
        }


        if (VAR_3->UseSection[VAR_8])
            VAR_3->UsedSections = VAR_8+1;

    }


    VAR_3->NewSectionHeaderSize =
        (VAR_3->UsedSections+2) * sizeof(IMAGE_SECTION_HEADER);


    VAR_7 = VAR_3->HeaderSize + VAR_3->NewSectionHeaderSize;
    VAR_7 = FUNC_1(VAR_7, VAR_6);


    for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_3->UsedSections; VAR_8++)
    {

        VAR_3->NewSectionHeaders[VAR_9] = VAR_3->SectionHeaders[VAR_8];


        if (VAR_3->UseSection[VAR_8] == 0)
        {

            VAR_3->NewSectionHeaders[VAR_9].PointerToRawData = 0;
            VAR_3->NewSectionHeaders[VAR_9].SizeOfRawData = 0;
            VAR_3->NewSectionHeaders[VAR_9].Characteristics = 0xC0500080;
        }


        VAR_3->NewSectionHeaders[VAR_9].PointerToRawData =
              VAR_3->NewSectionHeaders[VAR_9].PointerToRawData ? VAR_7 : 0;
        VAR_7 += VAR_3->NewSectionHeaders[VAR_9].SizeOfRawData;
        VAR_9++;
    }

    if (VAR_3->eh_frame.idx == -1)
    {

        return 0;
    }

    return 1;
}
