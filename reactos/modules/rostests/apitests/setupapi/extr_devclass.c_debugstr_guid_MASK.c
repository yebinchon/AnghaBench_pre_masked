
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int guidSTR1 ;
struct TYPE_3__ {int * Data4; int Data3; int Data2; int Data1; } ;
typedef TYPE_1__ GUID ;
typedef int BOOL ;


 int FUNC_0 (char*,int,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static const char *FUNC_1(const GUID *VAR_0)
{
    static char VAR_1[39];
    static char VAR_2[39];
    char* VAR_3;
    static BOOL VAR_4;

    if (!VAR_0) return ((void*)0);

    VAR_4 = !VAR_4;
    VAR_3 = VAR_4 ? VAR_1 : VAR_2;

    FUNC_0(VAR_3, sizeof(VAR_1),
     "{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
     VAR_0->Data1, VAR_0->Data2, VAR_0->Data3,
     VAR_0->Data4[0], VAR_0->Data4[1], VAR_0->Data4[2], VAR_0->Data4[3],
     VAR_0->Data4[4], VAR_0->Data4[5], VAR_0->Data4[6], VAR_0->Data4[7]);
    return VAR_3;
}
