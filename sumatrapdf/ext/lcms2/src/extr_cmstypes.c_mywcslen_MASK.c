
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef int cmsUInt32Number ;



__attribute__((used)) static
cmsUInt32Number FUNC_0(const wchar_t *VAR_0)
{
    const wchar_t *VAR_1;

    VAR_1 = VAR_0;
    while (*VAR_1)
        VAR_1++;

    return (cmsUInt32Number)(VAR_1 - VAR_0);
}
