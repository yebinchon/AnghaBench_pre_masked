
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_9__ {int offset_errors; } ;
struct TYPE_8__ {scalar_t__ e_magic; long e_lfanew; } ;
struct TYPE_7__ {int SizeOfOptionalHeader; } ;
struct TYPE_6__ {size_t ImageBase; } ;
typedef int * PIMAGE_SECTION_HEADER ;
typedef TYPE_1__* PIMAGE_OPTIONAL_HEADER ;
typedef TYPE_2__* PIMAGE_FILE_HEADER ;
typedef TYPE_3__* PIMAGE_DOS_HEADER ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int ,char*) ;
 TYPE_4__ VAR_1 ;

PIMAGE_SECTION_HEADER
FUNC_2(const void *VAR_2)
{
    PIMAGE_DOS_HEADER VAR_3;
    PIMAGE_FILE_HEADER VAR_4;
    PIMAGE_OPTIONAL_HEADER VAR_5;
    PIMAGE_SECTION_HEADER VAR_6;
    PIMAGE_SECTION_HEADER VAR_7;
    size_t VAR_8;


    VAR_3 = (PIMAGE_DOS_HEADER)VAR_2;
    if (VAR_3->e_magic != VAR_0 || VAR_3->e_lfanew == 0L)
    {
        FUNC_1(0, "Input file is not a PE image.\n");
        VAR_1.offset_errors++;
        return ((void*)0);
    }



    VAR_4 = (PIMAGE_FILE_HEADER)((char *)VAR_2 + VAR_3->e_lfanew + sizeof(ULONG));


    VAR_5 = (PIMAGE_OPTIONAL_HEADER)(VAR_4 + 1);
    VAR_8 = VAR_5->ImageBase;


    VAR_6 = (PIMAGE_SECTION_HEADER)((char *)VAR_5 + VAR_4->SizeOfOptionalHeader);


    VAR_7 = FUNC_0(VAR_4, VAR_6);
    if (!VAR_7)
    {
        FUNC_1(0, "Couldn't find rossym section in executable\n");
        VAR_1.offset_errors++;
        return ((void*)0);
    }

    return VAR_7;
}
