
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HRESULT ;


 int * FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static inline HRESULT FUNC_3(const WCHAR *VAR_3, WCHAR **VAR_4)
{
    int VAR_5;

    if (!VAR_4) return VAR_0;

    VAR_5 = FUNC_2(VAR_3);
    *VAR_4 = FUNC_0((VAR_5+1)*sizeof(WCHAR));
    if (!*VAR_4) return VAR_1;
    FUNC_1(*VAR_4, VAR_3);
    return VAR_2;
}
