
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsAString ;
typedef char PRUnichar ;
typedef int HRESULT ;
typedef scalar_t__ BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,int) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (int const*,char const**) ;

__attribute__((used)) static HRESULT FUNC_4(const nsAString *VAR_2, BSTR *VAR_3)
{
    const PRUnichar *VAR_4, *VAR_5, *VAR_6 = ((void*)0);
    BSTR VAR_7;

    FUNC_3(VAR_2, &VAR_4);

    for(VAR_5 = VAR_4; FUNC_2(*VAR_5); VAR_5++);
    if(*VAR_5 == '.') {
        for(VAR_6 = VAR_5++; FUNC_2(*VAR_5); VAR_5++);
        if(*VAR_5)
            VAR_6 = ((void*)0);
    }

    VAR_7 = VAR_6 ? FUNC_1(VAR_4, VAR_6-VAR_4) : FUNC_0(VAR_4);

    *VAR_3 = VAR_7;
    return VAR_7 ? VAR_1 : VAR_0;
}
