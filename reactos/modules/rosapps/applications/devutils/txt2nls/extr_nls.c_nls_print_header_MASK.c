
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {int CodePage; int MaximumCharacterSize; int DefaultChar; int UniDefaultChar; int TransUniDefaultChar; int* LeadByte; } ;
typedef TYPE_1__ NLS_FILE_HEADER ;


 size_t VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(NLS_FILE_HEADER *VAR_1)
{
    uint32_t VAR_2;

    FUNC_0("HEADER:\n");
    FUNC_0("CodePage: %u\n", VAR_1->CodePage);
    FUNC_0("Character size: %u\n", VAR_1->MaximumCharacterSize);
    FUNC_0("Default char: 0x%02X\n", VAR_1->DefaultChar);
    FUNC_0("Default unicode char: 0x%04X\n", VAR_1->UniDefaultChar);
    FUNC_0("Trans default char: 0x%02X\n", VAR_1->TransUniDefaultChar);
    FUNC_0("Trans default unicode char: 0x%04X\n", VAR_1->TransUniDefaultChar);

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    {
        FUNC_0("LeadByte[%u] = 0x%02X\n", VAR_2, VAR_1->LeadByte[VAR_2]);
    }

    FUNC_0("\n");
}
