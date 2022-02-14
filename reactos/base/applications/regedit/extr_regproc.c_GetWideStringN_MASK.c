
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char const*,int,int *,int) ;

__attribute__((used)) static WCHAR* FUNC_4(const char* VAR_1, int VAR_2, DWORD *VAR_3)
{
    if(VAR_1)
    {
        WCHAR* VAR_4;
        *VAR_3 = FUNC_3(VAR_0, 0, VAR_1, VAR_2, ((void*)0), 0);

        VAR_4 = FUNC_2(FUNC_1(), 0, *VAR_3 * sizeof(WCHAR));
        FUNC_0(VAR_4);
        FUNC_3(VAR_0, 0, VAR_1, VAR_2, VAR_4, *VAR_3);
        return VAR_4;
    }
    *VAR_3 = 0;
    return ((void*)0);
}
