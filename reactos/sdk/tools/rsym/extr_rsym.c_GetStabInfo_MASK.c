
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_6__ {size_t NumberOfSections; } ;
struct TYPE_5__ {scalar_t__* Name; size_t SizeOfRawData; int PointerToRawData; } ;
typedef TYPE_1__* PIMAGE_SECTION_HEADER ;
typedef TYPE_2__* PIMAGE_FILE_HEADER ;


 scalar_t__ FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, PIMAGE_FILE_HEADER VAR_1,
            PIMAGE_SECTION_HEADER VAR_2,
            ULONG *VAR_3, void **VAR_4,
            ULONG *VAR_5, void **VAR_6)
{
    ULONG VAR_7;


    *VAR_4 = ((void*)0);
    *VAR_3 = 0;
    *VAR_6 = ((void*)0);
    *VAR_5 = 0;

    for (VAR_7 = 0; VAR_7 < VAR_1->NumberOfSections; VAR_7++)
    {

        if ((FUNC_0((char *) VAR_2[VAR_7].Name, ".stab", 5) == 0)
            && (VAR_2[VAR_7].Name[5] == 0))
        {


            *VAR_3 = VAR_2[VAR_7].SizeOfRawData;
            *VAR_4 = (void *)((char *) VAR_0 + VAR_2[VAR_7].PointerToRawData);
        }

        if (FUNC_0((char *) VAR_2[VAR_7].Name, ".stabstr", 8) == 0)
        {


            *VAR_5 = VAR_2[VAR_7].SizeOfRawData;
            *VAR_6 = (void *)((char *) VAR_0 + VAR_2[VAR_7].PointerToRawData);
        }
    }

    return 0;
}
