
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int urlW ;
typedef unsigned char WCHAR ;
typedef unsigned char* LPWSTR ;
typedef int LPCWSTR ;


 unsigned char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char) ;
 scalar_t__ FUNC_2 (int ,unsigned char const*,int) ;

__attribute__((used)) static LPWSTR FUNC_3(LPCWSTR VAR_0)
{
    WCHAR *VAR_1, *VAR_2;

    static const WCHAR VAR_3[] = {'u','r','l','('};

    if(FUNC_2(VAR_0, VAR_3, sizeof(VAR_3)/sizeof(WCHAR)) || !FUNC_1(VAR_0, '\\'))
        return ((void*)0);

    VAR_1 = FUNC_0(VAR_0);

    for(VAR_2 = VAR_1; *VAR_2; VAR_2++) {
        if(*VAR_2 == '\\')
            *VAR_2 = '/';
    }

    return VAR_1;
}
