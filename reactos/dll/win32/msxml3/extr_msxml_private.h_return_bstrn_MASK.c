
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int const*,int) ;

__attribute__((used)) static inline HRESULT FUNC_1(const WCHAR *VAR_2, int VAR_3, BSTR *VAR_4)
{
    if(VAR_2) {
        *VAR_4 = FUNC_0(VAR_2, VAR_3);
        if(!*VAR_4)
            return VAR_0;
    }else
        *VAR_4 = ((void*)0);

    return VAR_1;
}
