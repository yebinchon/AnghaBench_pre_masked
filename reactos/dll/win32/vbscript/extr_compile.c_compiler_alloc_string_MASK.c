
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbscode_t ;
typedef int WCHAR ;


 int * FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,int const*,size_t) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static WCHAR *FUNC_3(vbscode_t *VAR_0, const WCHAR *VAR_1)
{
    size_t VAR_2;
    WCHAR *VAR_3;

    VAR_2 = (FUNC_2(VAR_1)+1)*sizeof(WCHAR);
    VAR_3 = FUNC_0(VAR_0, VAR_2);
    if(VAR_3)
        FUNC_1(VAR_3, VAR_1, VAR_2);
    return VAR_3;
}
