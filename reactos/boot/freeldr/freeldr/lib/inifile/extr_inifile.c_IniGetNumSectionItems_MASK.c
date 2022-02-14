
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef int ULONG ;
struct TYPE_2__ {int SectionItemCount; } ;
typedef TYPE_1__* PINI_SECTION ;


 int FUNC_0 (char*,int ) ;

ULONG FUNC_1(ULONG_PTR VAR_0)
{
    PINI_SECTION VAR_1 = (PINI_SECTION)VAR_0;

    FUNC_0("IniGetNumSectionItems() SectionId = 0x%x\n", VAR_0);
    FUNC_0("IniGetNumSectionItems() Item count = %d\n", VAR_1->SectionItemCount);

    return VAR_1->SectionItemCount;
}
