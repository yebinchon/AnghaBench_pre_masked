
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int offset_errors; } ;
struct TYPE_4__ {int PointerToRawData; } ;
typedef TYPE_1__* PIMAGE_SECTION_HEADER ;


 TYPE_1__* FUNC_0 (char*) ;
 int FUNC_1 (int,char*,unsigned int) ;
 int FUNC_2 (char*,size_t,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int
FUNC_5(const void *VAR_1, size_t VAR_2, char *VAR_3)
{
    int VAR_4;

    PIMAGE_SECTION_HEADER VAR_5 = FUNC_0((char *)VAR_1);
    if (!VAR_5)
        return 2;

    VAR_4 = FUNC_2((char *)VAR_1 + VAR_5->PointerToRawData, VAR_2, VAR_3);
    if (VAR_4)
    {
        if (VAR_3)
            FUNC_4(VAR_3, "??:0");
        else
            FUNC_3("??:0");
        FUNC_1(1, "Offset not found: %x\n", (unsigned int)VAR_2);
        VAR_0.offset_errors++;
    }

    return VAR_4;
}
