
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int DWORD ;



__attribute__((used)) static WCHAR *FUNC_0(DWORD VAR_0, WCHAR *VAR_1)
{
    if(!VAR_0) {
        *VAR_1 = '0';
        return VAR_1;
    }

    while(VAR_0) {
        *VAR_1-- = '0' + (VAR_0%10);
        VAR_0 /= 10;
    }

    return VAR_1+1;
}
