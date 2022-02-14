
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int const*) ;

__attribute__((used)) static inline HRESULT FUNC_1(const WCHAR *VAR_3, BSTR *VAR_4)
{
    if(!VAR_4)
        return VAR_0;

    if(VAR_3) {
        *VAR_4 = FUNC_0(VAR_3);
        if(!*VAR_4)
            return VAR_1;
    }else {
        *VAR_4 = ((void*)0);
    }

    return VAR_2;
}
