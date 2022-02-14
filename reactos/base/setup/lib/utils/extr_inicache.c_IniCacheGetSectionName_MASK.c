
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef size_t* PULONG ;
typedef char* PCHAR ;
typedef scalar_t__ CHAR ;


 int FUNC_0 (char*,scalar_t__*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (scalar_t__*,char*,size_t) ;

__attribute__((used)) static
PCHAR
FUNC_3(
    PCHAR VAR_0,
    PCHAR *VAR_1,
    PULONG VAR_2)
{
    ULONG VAR_3 = 0;
    CHAR VAR_4[256];

    *VAR_1 = ((void*)0);
    *VAR_2 = 0;


    while (*VAR_0 != 0 && FUNC_1(*VAR_0))
    {
        VAR_0++;
    }

    *VAR_1 = VAR_0;

    while (*VAR_0 != 0 && *VAR_0 != ']')
    {
        VAR_3++;
        VAR_0++;
    }
    VAR_0++;

    while (*VAR_0 != 0 && *VAR_0 != L'\n')
    {
        VAR_0++;
    }
    VAR_0++;

    *VAR_2 = VAR_3;

    FUNC_2(VAR_4, *VAR_1, VAR_3);
    VAR_4[VAR_3] = 0;

    FUNC_0("SectionName: '%s'\n", VAR_4);

    return VAR_0;
}
