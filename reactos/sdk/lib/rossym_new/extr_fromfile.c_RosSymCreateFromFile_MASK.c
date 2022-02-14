
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef scalar_t__ ULONG ;
struct TYPE_23__ {int MaximumLength; TYPE_4__* Buffer; void* Length; } ;
struct TYPE_20__ {unsigned int PointerToSymbolTable; unsigned int NumberOfSymbols; int NumberOfSections; } ;
struct TYPE_19__ {int BaseOfData; int BaseOfCode; int SizeOfImage; int ImageBase; } ;
struct TYPE_22__ {char* Name; TYPE_2__ FileHeader; TYPE_1__ OptionalHeader; scalar_t__ e_lfanew; } ;
struct TYPE_21__ {unsigned int nsections; int loadsection; int datastart; int codestart; int imagesize; int loadbase; int imagebase; TYPE_4__* sect; int e8; int e4; int e2; int fd; } ;
typedef TYPE_3__ Pe ;
typedef int PVOID ;
typedef int PROSSYM_INFO ;
typedef TYPE_4__* PIMAGE_SECTION_HEADER ;
typedef scalar_t__ PCSZ ;
typedef int NTSTATUS ;
typedef int IMAGE_SECTION_HEADER ;
typedef TYPE_4__ IMAGE_NT_HEADERS ;
typedef TYPE_4__ IMAGE_DOS_HEADER ;
typedef int BOOLEAN ;
typedef TYPE_7__ ANSI_STRING ;


 TYPE_7__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 void* FUNC_2 (TYPE_4__*,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ,TYPE_4__*,int) ;
 int FUNC_10 (int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int,scalar_t__*) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_16 (TYPE_4__*,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (char*,...) ;

BOOLEAN
FUNC_18(PVOID VAR_10, PROSSYM_INFO *VAR_11)
{
    IMAGE_DOS_HEADER VAR_12;
    IMAGE_NT_HEADERS VAR_13;
    PIMAGE_SECTION_HEADER VAR_14;
    unsigned VAR_15;
    unsigned VAR_16, VAR_17;


    if (! FUNC_10(VAR_10, 0))
    {
        FUNC_17("Could not rewind file\n");
        return VAR_0;
    }
    if (! FUNC_9(VAR_10, &VAR_12, sizeof(IMAGE_DOS_HEADER)))
    {
        FUNC_17("Failed to read DOS header %x\n", VAR_3);
        return VAR_0;
    }
    if (! FUNC_5(&VAR_12))
    {
        FUNC_17("Image doesn't have a valid DOS header\n");
        return VAR_0;
    }


    if (! FUNC_10(VAR_10, VAR_12.e_lfanew))
    {
        FUNC_17("Failed seeking to NT headers\n");
        return VAR_0;
    }
    if (! FUNC_9(VAR_10, &VAR_13, sizeof(IMAGE_NT_HEADERS)))
    {
        FUNC_17("Failed to read NT headers\n");
        return VAR_0;
    }
    if (! FUNC_6(&VAR_13))
    {
        FUNC_17("Image doesn't have a valid PE header\n");
        return VAR_0;
    }

    VAR_16 = VAR_13.FileHeader.PointerToSymbolTable;
    VAR_17 = VAR_13.FileHeader.NumberOfSymbols;

    if (!VAR_17)
    {
        FUNC_17("Image doesn't have debug symbols\n");
        return VAR_0;
    }

    FUNC_1("SymbolTable %x NumSymbols %x\n", VAR_16, VAR_17);


    if (! FUNC_10(VAR_10, (char *) FUNC_3(&VAR_13) -
                         (char *) &VAR_13 + VAR_12.e_lfanew))
    {
        FUNC_17("Failed seeking to section headers\n");
        return VAR_0;
    }
    FUNC_1("Alloc section headers\n");
    VAR_14 = FUNC_7(VAR_13.FileHeader.NumberOfSections
                                    * sizeof(IMAGE_SECTION_HEADER));
    if (((void*)0) == VAR_14)
    {
        FUNC_17("Failed to allocate memory for %u section headers\n",
                VAR_13.FileHeader.NumberOfSections);
        return VAR_0;
    }
    if (! FUNC_9(VAR_10, VAR_14,
                         VAR_13.FileHeader.NumberOfSections
                         * sizeof(IMAGE_SECTION_HEADER)))
    {
        FUNC_8(VAR_14);
        FUNC_17("Failed to read section headers\n");
        return VAR_0;
    }


    for (VAR_15 = 0; VAR_15 < VAR_13.FileHeader.NumberOfSections;
         VAR_15++)
    {
        ANSI_STRING VAR_18;
        if (VAR_14[VAR_15].Name[0] != '/') {
            FUNC_1("Short name string %d, %s\n", VAR_15, VAR_14[VAR_15].Name);
            VAR_18.Buffer = FUNC_7(VAR_1);
            FUNC_16(VAR_18.Buffer, VAR_14[VAR_15].Name, VAR_1);
            VAR_18.MaximumLength = VAR_1;
            VAR_18.Length = FUNC_2(VAR_18.Buffer, VAR_1);
        } else {
            UNICODE_STRING VAR_19;
            NTSTATUS VAR_20;
            ULONG VAR_21;

            if (!FUNC_11(&VAR_19, (PCSZ)VAR_14[VAR_15].Name + 1))
                goto freeall;
            VAR_20 = FUNC_14(&VAR_19, 10, &VAR_21);
            FUNC_13(&VAR_19);
            if (!FUNC_4(VAR_20)) goto freeall;
            if (!FUNC_10(VAR_10, VAR_16 + VAR_17 * VAR_4 + VAR_21))
                goto freeall;
            VAR_18.Buffer = FUNC_7(VAR_2);
            if (!FUNC_9(VAR_10, VAR_18.Buffer, VAR_2))
                goto freeall;
            VAR_18.Length = FUNC_2(VAR_18.Buffer, VAR_2);
            VAR_18.MaximumLength = VAR_2;
            FUNC_1("Long name %d, %s\n", VAR_15, VAR_18.Buffer);
        }
        *FUNC_0(&VAR_14[VAR_15]) = VAR_18;
    }

    FUNC_1("Done with sections\n");
    Pe *VAR_22 = FUNC_7(sizeof(*VAR_22));
    VAR_22->fd = VAR_10;
    VAR_22->e2 = VAR_7;
    VAR_22->e4 = VAR_8;
    VAR_22->e8 = VAR_9;
    VAR_22->nsections = VAR_13.FileHeader.NumberOfSections;
    VAR_22->sect = VAR_14;
    VAR_22->imagebase = VAR_22->loadbase = VAR_13.OptionalHeader.ImageBase;
    VAR_22->imagesize = VAR_13.OptionalHeader.SizeOfImage;
    VAR_22->codestart = VAR_13.OptionalHeader.BaseOfCode;
    VAR_22->datastart = VAR_13.OptionalHeader.BaseOfData;
    VAR_22->loadsection = VAR_6;
    *VAR_11 = FUNC_15(VAR_22);

    return VAR_5;

freeall:
    for (VAR_15 = 0; VAR_15 < VAR_13.FileHeader.NumberOfSections;
         VAR_15++)
        FUNC_12(FUNC_0(&VAR_14[VAR_15]));
    FUNC_8(VAR_14);

    return VAR_0;
}
