
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char**) ;
 char* FUNC_1 (unsigned int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_4(const WCHAR *VAR_2, WCHAR **VAR_3)
{
    const WCHAR *VAR_4, *VAR_5;
    WCHAR *VAR_6 = ((void*)0);
    HRESULT VAR_7;

    for(VAR_5 = VAR_2; *VAR_5; VAR_5++) {
        if(*VAR_5 == '?' || *VAR_5 == '#')
            break;
    }

    for(VAR_4 = VAR_5; VAR_4 >= VAR_2; VAR_4--) {
        if(*VAR_4 == '.')
            break;
    }

    if(VAR_4 < VAR_2)
        return VAR_0;

    if(*VAR_5) {
        unsigned VAR_8 = VAR_5-VAR_4;

        VAR_6 = FUNC_1((VAR_8+1)*sizeof(WCHAR));
        if(!VAR_6)
            return VAR_1;

        FUNC_3(VAR_6, VAR_4, VAR_8*sizeof(WCHAR));
        VAR_6[VAR_8] = 0;
    }

    VAR_7 = FUNC_0(VAR_6 ? VAR_6 : VAR_4, VAR_3);
    FUNC_2(VAR_6);
    return VAR_7;
}
