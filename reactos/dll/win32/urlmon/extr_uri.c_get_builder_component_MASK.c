
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef char* LPWSTR ;
typedef char* LPCWSTR ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static HRESULT FUNC_2(LPWSTR *VAR_4, DWORD *VAR_5,
                                     LPCWSTR VAR_6, DWORD VAR_7,
                                     LPCWSTR *VAR_8, DWORD *VAR_9)
{
    if(!VAR_9) {
        if(VAR_8)
            *VAR_8 = ((void*)0);
        return VAR_1;
    }

    if(!VAR_8) {
        *VAR_9 = 0;
        return VAR_1;
    }

    if(!(*VAR_4) && VAR_6) {



        *VAR_4 = FUNC_0((VAR_7+1)*sizeof(WCHAR));
        if(!(*VAR_4))
            return VAR_0;

        FUNC_1(*VAR_4, VAR_6, VAR_7*sizeof(WCHAR));
        (*VAR_4)[VAR_7] = '\0';
        *VAR_5 = VAR_7;
    }

    *VAR_8 = *VAR_4;
    *VAR_9 = *VAR_5;
    return *VAR_8 ? VAR_3 : VAR_2;
}
