
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_8__** sect_in; } ;
typedef TYPE_4__ sec_build ;
typedef int sec ;
struct TYPE_11__ {size_t VirtualSize; } ;
struct TYPE_17__ {size_t VirtualAddress; size_t SizeOfRawData; size_t PointerToRawData; TYPE_2__ Misc; } ;
struct TYPE_16__ {int e_lfanew; int e_magic; } ;
struct TYPE_12__ {int NumberOfSections; int SizeOfOptionalHeader; int Characteristics; int Machine; } ;
struct TYPE_14__ {int MajorLinkerVersion; int BaseOfCode; int ImageBase; int MajorOperatingSystemVersion; int MajorImageVersion; int MajorSubsystemVersion; int SizeOfHeaders; int SizeOfImage; int SectionAlignment; int FileAlignment; TYPE_1__* DataDirectory; int Subsystem; int Magic; } ;
struct TYPE_15__ {TYPE_3__ FileHeader; TYPE_5__ OptionalHeader; int Signature; } ;
struct TYPE_10__ {int Size; int VirtualAddress; } ;
typedef int IMAGE_SECTION_HEADER ;
typedef TYPE_5__ IMAGE_OPTIONAL_HEADER ;
typedef TYPE_6__ IMAGE_NT_HEADERS ;
typedef TYPE_7__ IMAGE_DOS_HEADER ;
typedef scalar_t__ HANDLE ;
typedef size_t DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (scalar_t__,int *,size_t,size_t*,int *) ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_3 (int *,TYPE_8__*,int) ;
 int FUNC_4 (int *,int ,int) ;
 size_t FUNC_5 (int,size_t) ;
 int FUNC_6 (int,char*) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_7( const sec_build* VAR_15 )
{
    IMAGE_DOS_HEADER *VAR_16;
    IMAGE_NT_HEADERS *VAR_17;
    IMAGE_SECTION_HEADER *VAR_18;
    IMAGE_OPTIONAL_HEADER *VAR_19;
    HANDLE VAR_20;
    DWORD VAR_21, VAR_22, VAR_23;
    BYTE VAR_24[VAR_13];

    FUNC_4( VAR_24, 0, sizeof VAR_24 );

    VAR_16 = (void*) VAR_24;
    VAR_16->e_magic = VAR_2;
    VAR_16->e_lfanew = sizeof *VAR_16;

    VAR_17 = (void*) &VAR_16[1];

    VAR_17->Signature = VAR_8;
    VAR_17->FileHeader.Machine = VAR_5;
    VAR_17->FileHeader.NumberOfSections = 0;
    VAR_17->FileHeader.SizeOfOptionalHeader = sizeof VAR_17->OptionalHeader;
    VAR_17->FileHeader.Characteristics = VAR_4 | VAR_3;

    VAR_19 = &VAR_17->OptionalHeader;

    VAR_19->Magic = VAR_7;
    VAR_19->MajorLinkerVersion = 1;
    VAR_19->BaseOfCode = 0x10;
    VAR_19->ImageBase = 0x10000000;
    VAR_19->MajorOperatingSystemVersion = 4;
    VAR_19->MajorImageVersion = 1;
    VAR_19->MajorSubsystemVersion = 4;
    VAR_19->SizeOfHeaders = sizeof *VAR_16 + sizeof *VAR_17 + sizeof *VAR_18 * 2;
    VAR_19->SizeOfImage = VAR_13;
    VAR_19->Subsystem = VAR_9;



    VAR_19->SectionAlignment = VAR_13;
    VAR_19->FileAlignment = VAR_13;

    VAR_19->DataDirectory[VAR_6].VirtualAddress = VAR_14;
    VAR_19->DataDirectory[VAR_6].Size = VAR_13;

    VAR_18 = (void*) &VAR_17[1];

    VAR_23 = 0;
    for ( VAR_22 = 0; VAR_22 < VAR_12; VAR_22++ )
        if ( VAR_15->sect_in[VAR_22] )
        {
            DWORD VAR_25 = VAR_15->sect_in[VAR_22]->Misc.VirtualSize +
                VAR_15->sect_in[VAR_22]->VirtualAddress;
            DWORD VAR_26 = VAR_15->sect_in[VAR_22]->SizeOfRawData +
                VAR_15->sect_in[VAR_22]->PointerToRawData;
            FUNC_3( VAR_18 + VAR_17->FileHeader.NumberOfSections, VAR_15->sect_in[VAR_22],
                    sizeof(VAR_18[0]) );
            VAR_17->FileHeader.NumberOfSections++;
            if ( VAR_19->SizeOfImage < VAR_25 )
                VAR_19->SizeOfImage = VAR_25;
            if ( VAR_23 < VAR_26 )
                VAR_23 = VAR_26;
        }

    VAR_20 = FUNC_1(VAR_11, VAR_1, 0, ((void*)0), VAR_0, 0, 0);
    FUNC_6 (VAR_20 != VAR_10, "failed to create file\n");


    FUNC_2( VAR_20, VAR_24, sizeof VAR_24, &VAR_21, ((void*)0) );


    FUNC_4( VAR_24, 0, sizeof VAR_24 );
    for ( VAR_22 = VAR_13; VAR_22 < VAR_23; VAR_22 += VAR_13 )
    {
 DWORD VAR_27 = FUNC_5(VAR_13, VAR_23 - VAR_22);
        FUNC_2( VAR_20, VAR_24, VAR_27, &VAR_21, ((void*)0) );
    }

    FUNC_0( VAR_20 );

    return 0;
}
