
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int const*,int) ;
 int * FUNC_1 (int const*,char) ;

__attribute__((used)) static HRESULT FUNC_2(const WCHAR *VAR_3, const WCHAR *VAR_4, char **VAR_5)
{
    VAR_3 = FUNC_1(VAR_3 + 1, ' ');
    if(!VAR_3 || VAR_3 >= VAR_4)
        return VAR_0;
    VAR_3 = FUNC_1(VAR_3 + 1, ' ');
    if(!VAR_3 || VAR_3 >= VAR_4)
        return VAR_0;
    ++VAR_3;

    *VAR_5 = FUNC_0(VAR_3, VAR_4 - VAR_3);

    if(!*VAR_5)
        return VAR_1;

    return VAR_2;
}
