
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int Data3; int* Data4; } ;
typedef TYPE_1__ GUID ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(ULONG *VAR_0, GUID *VAR_1)
{
    ULONG *VAR_2 = (ULONG*)VAR_1;
    int VAR_3;


    for (VAR_3 = 0; VAR_3 < sizeof(GUID)/sizeof(ULONG); VAR_3++, VAR_2++)
        *VAR_2 = FUNC_0(VAR_0);

    VAR_1->Data3 &= 0x0fff;
    VAR_1->Data3 |= (4 << 12);
    VAR_1->Data4[0] &= 0x3f;
    VAR_1->Data4[0] |= 0x80;
}
