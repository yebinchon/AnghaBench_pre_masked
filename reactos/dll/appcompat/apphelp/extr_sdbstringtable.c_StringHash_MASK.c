
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int ULONG ;
typedef int DWORD ;



__attribute__((used)) static DWORD FUNC_0(const WCHAR* VAR_0)
{
    DWORD VAR_1 = 0;
    for (; *VAR_0; VAR_0++)
    {
        VAR_1 = ((65599 * VAR_1) + (ULONG)(*VAR_0));
    }
    return VAR_1;
}
