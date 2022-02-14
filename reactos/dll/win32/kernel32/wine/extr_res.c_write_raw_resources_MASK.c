
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct resource_size_info {scalar_t__ total_size; } ;
struct mapping_info {scalar_t__ base; scalar_t__ size; } ;
typedef char WCHAR ;
struct TYPE_23__ {scalar_t__ SectionAlignment; scalar_t__ FileAlignment; scalar_t__ SizeOfImage; scalar_t__ NumberOfRvaAndSizes; TYPE_3__* DataDirectory; void* SizeOfInitializedData; } ;
struct TYPE_27__ {TYPE_5__ OptionalHeader; } ;
struct TYPE_20__ {scalar_t__ VirtualSize; } ;
struct TYPE_26__ {int Characteristics; int VirtualAddress; scalar_t__ PointerToRawData; scalar_t__ SizeOfRawData; TYPE_2__ Misc; int Name; } ;
struct TYPE_25__ {char* pFileName; int bDeleteExistingResources; } ;
struct TYPE_24__ {scalar_t__ Magic; scalar_t__ SectionAlignment; scalar_t__ FileAlignment; scalar_t__ SizeOfImage; scalar_t__ NumberOfRvaAndSizes; TYPE_4__* DataDirectory; void* SizeOfInitializedData; } ;
struct TYPE_22__ {scalar_t__ VirtualAddress; scalar_t__ Size; } ;
struct TYPE_21__ {int VirtualAddress; scalar_t__ Size; } ;
struct TYPE_19__ {int NumberOfSections; } ;
struct TYPE_18__ {TYPE_6__ OptionalHeader; TYPE_1__ FileHeader; } ;
typedef TYPE_7__ QUEUEDUPDATES ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef TYPE_8__ IMAGE_SECTION_HEADER ;
typedef TYPE_9__ IMAGE_NT_HEADERS64 ;
typedef TYPE_10__ IMAGE_NT_HEADERS32 ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int FUNC_3 (char*,char const*,int ,char*) ;
 int FUNC_4 (int,char*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,scalar_t__,...) ;
 int VAR_6 ;
 struct mapping_info* FUNC_6 (char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct mapping_info*) ;
 void* FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 TYPE_8__* FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (TYPE_7__*,struct resource_size_info*) ;
 TYPE_8__* FUNC_13 (scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 (char*,char*,scalar_t__) ;
 int FUNC_16 (TYPE_8__*,int ,int) ;
 int FUNC_17 (TYPE_7__*,scalar_t__,scalar_t__) ;
 int FUNC_18 (int *,scalar_t__) ;
 int FUNC_19 (struct mapping_info*,scalar_t__) ;
 int FUNC_20 (TYPE_7__*,int *,struct resource_size_info*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_21( QUEUEDUPDATES *VAR_7 )
{
    static const WCHAR VAR_8[] = { 'r','e','s','u',0 };
    WCHAR VAR_9[VAR_5], VAR_10[VAR_5];
    DWORD VAR_11, VAR_12;
    BOOL VAR_13 = VAR_0;
    IMAGE_SECTION_HEADER *VAR_14;
    IMAGE_NT_HEADERS32 *VAR_15;
    IMAGE_NT_HEADERS64 *VAR_16;
    struct resource_size_info VAR_17;
    BYTE *VAR_18;
    struct mapping_info *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
    DWORD VAR_21, VAR_22, VAR_23;


    VAR_9[0] = 0;
    if (!FUNC_4( VAR_5, VAR_9 ))
        return VAR_13;

    if (!FUNC_3( VAR_9, VAR_8, 0, VAR_10 ))
        return VAR_13;

    if (!FUNC_0( VAR_7->pFileName, VAR_10, VAR_0 ))
        goto done;

    FUNC_5("tempfile %s\n", FUNC_7(VAR_10));

    if (!VAR_7->bDeleteExistingResources)
    {
        VAR_19 = FUNC_6( VAR_7->pFileName, VAR_0 );
        if (!VAR_19)
            goto done;

        VAR_13 = FUNC_17( VAR_7, VAR_19->base, VAR_19->size );
        if (!VAR_13)
        {
            FUNC_2("failed to read existing resources\n");
            goto done;
        }
    }

    VAR_20 = FUNC_6( VAR_10, VAR_6 );
    if (!VAR_20)
        goto done;

    VAR_15 = (IMAGE_NT_HEADERS32*)FUNC_10( VAR_20->base, VAR_20->size );
    if (!VAR_15)
        goto done;

    VAR_16 = (IMAGE_NT_HEADERS64*)VAR_15;
    if (VAR_15->OptionalHeader.Magic == VAR_2) {
        VAR_21 = VAR_16->OptionalHeader.SectionAlignment;
        VAR_22 = VAR_16->OptionalHeader.FileAlignment;
        VAR_23 = VAR_16->OptionalHeader.SizeOfImage;
    } else {
        VAR_21 = VAR_15->OptionalHeader.SectionAlignment;
        VAR_22 = VAR_15->OptionalHeader.FileAlignment;
        VAR_23 = VAR_15->OptionalHeader.SizeOfImage;
    }

    if ((LONG)VAR_21 <= 0)
    {
        FUNC_2("invalid section alignment %08x\n", VAR_21);
        goto done;
    }

    if ((LONG)VAR_22 <= 0)
    {
        FUNC_2("invalid file alignment %08x\n", VAR_22);
        goto done;
    }

    VAR_14 = FUNC_11( VAR_20->base, VAR_20->size );
    if (!VAR_14)
    {
        DWORD VAR_24;

        VAR_14 = FUNC_13( VAR_20->base, VAR_20->size, &VAR_24 );
        if (!VAR_14)
            goto done;

        VAR_14 += VAR_24;
        VAR_15->FileHeader.NumberOfSections++;

        FUNC_16( VAR_14, 0, sizeof *VAR_14 );
        FUNC_14( VAR_14->Name, ".rsrc", 5 );
        VAR_14->Characteristics = VAR_3 | VAR_4;
        VAR_14->VirtualAddress = VAR_23;
    }

    if (!VAR_14->PointerToRawData)
    {
        VAR_14->PointerToRawData = VAR_20->size + (-VAR_20->size) % VAR_22;
        VAR_14->SizeOfRawData = 0;
    }

    FUNC_5("before .rsrc at %08x, size %08x\n", VAR_14->PointerToRawData, VAR_14->SizeOfRawData);

    FUNC_12( VAR_7, &VAR_17 );


    VAR_12 = VAR_17.total_size;
    VAR_12 += (-VAR_12) % VAR_22;

    FUNC_5("requires %08x (%08x) bytes\n", VAR_17.total_size, VAR_12 );


    if (VAR_12 != VAR_14->SizeOfRawData)
    {
        DWORD VAR_25 = VAR_20->size;
        DWORD VAR_26 = VAR_17.total_size + (-VAR_17.total_size) % VAR_21;
        int VAR_27 = VAR_12 - (VAR_14->SizeOfRawData + (-VAR_14->SizeOfRawData) % VAR_22);
        int VAR_28 = VAR_26 -
            (VAR_14->Misc.VirtualSize + (-VAR_14->Misc.VirtualSize) % VAR_21);

        BOOL VAR_29 = VAR_14->PointerToRawData + VAR_14->SizeOfRawData >= VAR_25;

        DWORD VAR_30 = VAR_29 ? VAR_14->PointerToRawData + VAR_12 : VAR_25 + VAR_27;


        BOOL VAR_31 = VAR_30 < VAR_25 && !VAR_29;

        FUNC_5("file size %08x -> %08x\n", VAR_25, VAR_30);

        if (!VAR_31)
        {

            VAR_13 = FUNC_19( VAR_20, VAR_30 );


            VAR_15 = (IMAGE_NT_HEADERS32*)FUNC_10( VAR_20->base, VAR_30 );
            if (!VAR_15)
            {
                FUNC_2("couldn't get NT header\n");
                goto done;
            }
            VAR_16 = (IMAGE_NT_HEADERS64*)VAR_15;

            VAR_14 = FUNC_11( VAR_20->base, VAR_30 );
            if (!VAR_14)
                 goto done;
        }

        if (!VAR_29)
        {
            IMAGE_SECTION_HEADER *VAR_32;
            DWORD VAR_33 = VAR_14->PointerToRawData + VAR_14->SizeOfRawData;
            DWORD VAR_34, VAR_35 = 0;

            FUNC_15( (char*)VAR_20->base + VAR_33 + VAR_27, (char*)VAR_20->base + VAR_33, VAR_25 - VAR_33 );

            VAR_32 = FUNC_13( VAR_20->base, VAR_30, &VAR_35 );

            for (VAR_34=0; VAR_34<VAR_35; VAR_34++)
            {
                if (VAR_32[VAR_34].PointerToRawData > VAR_14->PointerToRawData)
                {
                    VAR_32[VAR_34].PointerToRawData += VAR_27;
                    VAR_32[VAR_34].VirtualAddress += VAR_28;
                }
            }
        }

        if (VAR_31)
        {
            VAR_13 = FUNC_19( VAR_20, VAR_30 );

            VAR_15 = (IMAGE_NT_HEADERS32*)FUNC_10( VAR_20->base, VAR_30 );
            if (!VAR_15)
            {
                FUNC_2("couldn't get NT header\n");
                goto done;
            }
            VAR_16 = (IMAGE_NT_HEADERS64*)VAR_15;

            VAR_14 = FUNC_11( VAR_20->base, VAR_30 );
            if (!VAR_14)
                 goto done;
        }


        VAR_14->SizeOfRawData = VAR_12;
        VAR_14->Misc.VirtualSize = VAR_26;
        if (VAR_15->OptionalHeader.Magic == VAR_2) {
            VAR_16->OptionalHeader.SizeOfImage += VAR_28;
            VAR_16->OptionalHeader.DataDirectory[VAR_1].VirtualAddress = VAR_14->VirtualAddress;
            VAR_16->OptionalHeader.DataDirectory[VAR_1].Size = VAR_17.total_size;
            VAR_16->OptionalHeader.SizeOfInitializedData = FUNC_9( VAR_20->base, VAR_30 );

            for (VAR_11=0; VAR_11<VAR_16->OptionalHeader.NumberOfRvaAndSizes; VAR_11++)
                if (VAR_16->OptionalHeader.DataDirectory[VAR_11].VirtualAddress > VAR_14->VirtualAddress)
                    VAR_16->OptionalHeader.DataDirectory[VAR_11].VirtualAddress += VAR_28;
        } else {
            VAR_15->OptionalHeader.SizeOfImage += VAR_28;
            VAR_15->OptionalHeader.DataDirectory[VAR_1].VirtualAddress = VAR_14->VirtualAddress;
            VAR_15->OptionalHeader.DataDirectory[VAR_1].Size = VAR_17.total_size;
            VAR_15->OptionalHeader.SizeOfInitializedData = FUNC_9( VAR_20->base, VAR_30 );

            for (VAR_11=0; VAR_11<VAR_15->OptionalHeader.NumberOfRvaAndSizes; VAR_11++)
                if (VAR_15->OptionalHeader.DataDirectory[VAR_11].VirtualAddress > VAR_14->VirtualAddress)
                    VAR_15->OptionalHeader.DataDirectory[VAR_11].VirtualAddress += VAR_28;
        }
    }

    VAR_18 = (LPBYTE) VAR_20->base + VAR_14->PointerToRawData;

    FUNC_5("base = %p offset = %08x\n", VAR_20->base, VAR_14->PointerToRawData);

    VAR_13 = FUNC_20( VAR_7, VAR_18, &VAR_17, VAR_14->VirtualAddress );

    FUNC_18( VAR_18 + VAR_17.total_size, VAR_12 - VAR_17.total_size );

    FUNC_5("after  .rsrc at %08x, size %08x\n", VAR_14->PointerToRawData, VAR_14->SizeOfRawData);

done:
    FUNC_8( VAR_19 );
    FUNC_8( VAR_20 );

    if (VAR_13)
        VAR_13 = FUNC_0( VAR_10, VAR_7->pFileName, VAR_0 );

    FUNC_1( VAR_10 );

    return VAR_13;
}
