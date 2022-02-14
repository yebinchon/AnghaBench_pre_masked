
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;
typedef int DWORD ;



__attribute__((used)) static UINT FUNC_0(const WCHAR *VAR_0, DWORD VAR_1) {
    UINT VAR_2 = 0;
    DWORD VAR_3 = 0;
    const WCHAR *VAR_4;

    for(VAR_4 = VAR_0; VAR_4 < VAR_0+VAR_1; ++VAR_4) {
        if(*VAR_4 == '.') {
            VAR_2 <<= 8;
            VAR_2 += VAR_3;
            VAR_3 = 0;
        } else
            VAR_3 = VAR_3*10 + (*VAR_4-'0');
    }

    VAR_2 <<= 8;
    VAR_2 += VAR_3;

    return VAR_2;
}
