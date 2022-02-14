
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Data1; int Data2; int Data3; int* Data4; } ;
typedef TYPE_1__* REFIID ;


 int FUNC_0 (char*,char*,int,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static const char *FUNC_1(REFIID VAR_0)
{
    static char VAR_1[50];

    if(!VAR_0)
        return "(null)";

    FUNC_0(VAR_1, "{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
            VAR_0->Data1, VAR_0->Data2, VAR_0->Data3, VAR_0->Data4[0],
            VAR_0->Data4[1], VAR_0->Data4[2], VAR_0->Data4[3], VAR_0->Data4[4],
            VAR_0->Data4[5], VAR_0->Data4[6], VAR_0->Data4[7]);

    return VAR_1;
}
