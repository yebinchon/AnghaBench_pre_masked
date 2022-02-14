
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int INT ;
typedef int DWORD ;



__attribute__((used)) static INT FUNC_0(const WCHAR *VAR_0, DWORD VAR_1) {
    const WCHAR *VAR_2;

    for(VAR_2 = VAR_0+VAR_1-1; VAR_2 >= VAR_0 && *VAR_2 != '/' && *VAR_2 != '\\'; --VAR_2) {
        if(*VAR_2 == '.')
            return VAR_2-VAR_0;
    }

    return -1;
}
