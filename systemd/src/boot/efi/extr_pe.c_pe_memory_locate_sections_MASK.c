
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PeSectionHeader {scalar_t__ VirtualSize; scalar_t__ PointerToRawData; scalar_t__ VirtualAddress; int Name; } ;
struct TYPE_2__ {scalar_t__ Machine; int NumberOfSections; size_t SizeOfOptionalHeader; } ;
struct PeHeader {TYPE_1__ FileHeader; int Magic; } ;
struct DosFileHeader {size_t ExeHeader; int Magic; } ;
typedef size_t UINTN ;
typedef int EFI_STATUS ;
typedef char CHAR8 ;


 scalar_t__ FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;

EFI_STATUS FUNC_2(CHAR8 *VAR_5, CHAR8 **VAR_6, UINTN *VAR_7, UINTN *VAR_8, UINTN *VAR_9) {
        struct DosFileHeader *VAR_10;
        struct PeHeader *VAR_11;
        UINTN VAR_12;
        UINTN VAR_13;

        VAR_10 = (struct DosFileHeader *)VAR_5;

        if (FUNC_0(VAR_10->Magic, "MZ", 2) != 0)
                return VAR_0;

        VAR_11 = (struct PeHeader *)&VAR_5[VAR_10->ExeHeader];
        if (FUNC_0(VAR_11->Magic, "PE\0\0", 4) != 0)
                return VAR_0;


        if (VAR_11->FileHeader.Machine != VAR_4 &&
            VAR_11->FileHeader.Machine != VAR_2 &&
            VAR_11->FileHeader.Machine != VAR_3)
                return VAR_0;

        if (VAR_11->FileHeader.NumberOfSections > 96)
                return VAR_0;

        VAR_13 = VAR_10->ExeHeader + sizeof(*VAR_11) + VAR_11->FileHeader.SizeOfOptionalHeader;

        for (VAR_12 = 0; VAR_12 < VAR_11->FileHeader.NumberOfSections; VAR_12++) {
                struct PeSectionHeader *VAR_14;
                UINTN VAR_15;

                VAR_14 = (struct PeSectionHeader *)&VAR_5[VAR_13];
                for (VAR_15 = 0; VAR_6[VAR_15]; VAR_15++) {
                        if (FUNC_0(VAR_14->Name, VAR_6[VAR_15], FUNC_1(VAR_6[VAR_15])) != 0)
                                continue;

                        if (VAR_7)
                                VAR_7[VAR_15] = (UINTN)VAR_14->VirtualAddress;
                        if (VAR_8)
                                VAR_8[VAR_15] = (UINTN)VAR_14->PointerToRawData;
                        if (VAR_9)
                                VAR_9[VAR_15] = (UINTN)VAR_14->VirtualSize;
                }
                VAR_13 += sizeof(*VAR_14);
        }

        return VAR_1;
}
