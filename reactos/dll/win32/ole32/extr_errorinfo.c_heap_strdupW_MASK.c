
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int * FUNC_0 (size_t) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int const*,size_t) ;

__attribute__((used)) static inline WCHAR *FUNC_3(const WCHAR *VAR_0)
{
    WCHAR *VAR_1 = ((void*)0);

    if(VAR_0) {
        size_t VAR_2;

        VAR_2 = (FUNC_1(VAR_0)+1)*sizeof(WCHAR);
        VAR_1 = FUNC_0(VAR_2);
        if(VAR_1)
            FUNC_2(VAR_1, VAR_0, VAR_2);
    }

    return VAR_1;
}
