
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ length; size_t rsrc_section; int NumberOfNamedEntries; int NumberOfIdEntries; TYPE_1__** sect_out; } ;
typedef TYPE_4__ sec_verify ;
struct TYPE_21__ {int e_lfanew; } ;
struct TYPE_14__ {scalar_t__ NumberOfSections; } ;
struct TYPE_19__ {TYPE_3__* DataDirectory; } ;
struct TYPE_20__ {TYPE_2__ FileHeader; TYPE_7__ OptionalHeader; } ;
struct TYPE_18__ {scalar_t__ Characteristics; int MajorVersion; scalar_t__ MinorVersion; int NumberOfNamedEntries; int NumberOfIdEntries; int TimeDateStamp; } ;
struct TYPE_17__ {int VirtualAddress; scalar_t__ SizeOfRawData; scalar_t__ PointerToRawData; scalar_t__ Characteristics; int Name; } ;
struct TYPE_15__ {int VirtualAddress; } ;
struct TYPE_13__ {int VirtualAddress; scalar_t__ SizeOfRawData; scalar_t__ PointerToRawData; scalar_t__ Characteristics; int Name; } ;
typedef TYPE_5__ IMAGE_SECTION_HEADER ;
typedef TYPE_6__ IMAGE_RESOURCE_DIRECTORY ;
typedef TYPE_7__ IMAGE_OPTIONAL_HEADER ;
typedef TYPE_8__ IMAGE_NT_HEADERS ;
typedef TYPE_9__ IMAGE_DOS_HEADER ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,int ,int *,int ,int ,int ) ;
 int * FUNC_2 (int *,int *,int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 size_t VAR_2 ;
 int * VAR_3 ;
 TYPE_9__* FUNC_6 (int *,int ,int ,int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11( const sec_verify *VAR_8 )
{
    int VAR_9;
    IMAGE_DOS_HEADER *VAR_10;
    IMAGE_NT_HEADERS *VAR_11;
    IMAGE_OPTIONAL_HEADER *VAR_12;
    IMAGE_SECTION_HEADER *VAR_13;
    IMAGE_RESOURCE_DIRECTORY *VAR_14;
    HANDLE VAR_15, VAR_16;
    DWORD VAR_17, VAR_18 = 0;

    VAR_15 = FUNC_1(VAR_6, VAR_1, 0, ((void*)0), VAR_4, 0, 0);
    FUNC_10 (VAR_15 != VAR_3, "failed to create file (%d)\n", FUNC_4());

    VAR_17 = FUNC_3( VAR_15, ((void*)0) );
    FUNC_10( VAR_17 >= VAR_8->length, "file size wrong\n");

    VAR_16 = FUNC_2( VAR_15, ((void*)0), VAR_5, 0, 0, ((void*)0) );
    FUNC_10 (VAR_16 != ((void*)0), "failed to create file\n");

    VAR_10 = FUNC_6( VAR_16, VAR_0, 0, 0, VAR_17 );
    FUNC_10( VAR_10 != ((void*)0), "failed to map file\n");

    if (!VAR_10)
        goto end;

    VAR_11 = (void*) ((BYTE*) VAR_10 + VAR_10->e_lfanew);
    VAR_12 = &VAR_11->OptionalHeader;
    VAR_13 = (void*) &VAR_11[1];

    for(VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
        if (VAR_8->sect_out[VAR_9])
        {
            FUNC_10( !FUNC_9(&VAR_8->sect_out[VAR_9]->Name, &VAR_13[VAR_18].Name, 8), "section %d name wrong\n", VAR_18);
            FUNC_10( VAR_8->sect_out[VAR_9]->VirtualAddress == VAR_13[VAR_18].VirtualAddress, "section %d vaddr wrong\n", VAR_18);
            FUNC_10( VAR_8->sect_out[VAR_9]->SizeOfRawData <= VAR_13[VAR_18].SizeOfRawData, "section %d SizeOfRawData wrong (%d vs %d)\n", VAR_18, VAR_8->sect_out[VAR_9]->SizeOfRawData ,VAR_13[VAR_18].SizeOfRawData);
            FUNC_10( VAR_8->sect_out[VAR_9]->PointerToRawData == VAR_13[VAR_18].PointerToRawData, "section %d PointerToRawData wrong\n", VAR_18);
            FUNC_10( VAR_8->sect_out[VAR_9]->Characteristics == VAR_13[VAR_18].Characteristics , "section %d characteristics wrong\n", VAR_18);
            VAR_18++;
        }

    FUNC_10( VAR_11->FileHeader.NumberOfSections == VAR_18, "number of sections wrong\n" );

    if (VAR_8->rsrc_section >= 0 && VAR_8->rsrc_section < VAR_11->FileHeader.NumberOfSections)
    {
        VAR_14 = (void*) ((BYTE*) VAR_10 + VAR_13[VAR_8->rsrc_section].VirtualAddress);

        FUNC_10( VAR_14->Characteristics == 0, "Characteristics wrong\n");
        FUNC_10( VAR_14->TimeDateStamp == 0 || FUNC_8( VAR_14->TimeDateStamp - FUNC_5() ) < 1000 ,
            "TimeDateStamp wrong %u\n", VAR_14->TimeDateStamp);
        FUNC_10( VAR_14->MajorVersion == 4, "MajorVersion wrong\n");
        FUNC_10( VAR_14->MinorVersion == 0, "MinorVersion wrong\n");

        FUNC_10( VAR_14->NumberOfNamedEntries == VAR_8->NumberOfNamedEntries, "NumberOfNamedEntries should be %d instead of %d\n",
                VAR_8->NumberOfNamedEntries, VAR_14->NumberOfNamedEntries);
        FUNC_10( VAR_14->NumberOfIdEntries == VAR_8->NumberOfIdEntries, "NumberOfIdEntries should be %d instead of %d\n",
                VAR_8->NumberOfIdEntries, VAR_14->NumberOfIdEntries);

        FUNC_10(VAR_12->DataDirectory[VAR_2].VirtualAddress == VAR_13[VAR_8->rsrc_section].VirtualAddress,
                "VirtualAddress in optional header should be %d instead of %d\n",
                VAR_13[VAR_8->rsrc_section].VirtualAddress, VAR_12->DataDirectory[VAR_2].VirtualAddress);
    }

end:
    FUNC_7( VAR_10 );

    FUNC_0( VAR_16 );

    FUNC_0( VAR_15 );
}
