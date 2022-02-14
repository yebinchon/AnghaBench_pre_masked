
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef scalar_t__ BOOL ;



__attribute__((used)) static char *FUNC_0(DWORD VAR_0, BOOL VAR_1)
{
    static char VAR_2[14];
    unsigned VAR_3 = 13;
    do
    {
        if (VAR_3 % 4 == 2) VAR_2[--VAR_3] = ',';
        VAR_2[--VAR_3] = (char)(VAR_0 % 10 + '0');
    } while ((VAR_0/=10) != 0);
    if (VAR_1)
    {
        while (VAR_3 > 0) VAR_2[--VAR_3] = ' ';
    }
    return VAR_2 + VAR_3;
}
