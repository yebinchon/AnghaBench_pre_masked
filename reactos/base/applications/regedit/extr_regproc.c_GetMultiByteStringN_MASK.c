
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int const*,int,char*,scalar_t__,int *,int *) ;

__attribute__((used)) static char* FUNC_4(const WCHAR* VAR_1, int VAR_2, DWORD* VAR_3)
{
    if(VAR_1)
    {
        char* VAR_4;
        *VAR_3 = FUNC_3(VAR_0, 0, VAR_1, VAR_2, ((void*)0), 0, ((void*)0), ((void*)0));

        VAR_4 = FUNC_2(FUNC_1(), 0, *VAR_3);
        FUNC_0(VAR_4);
        FUNC_3(VAR_0, 0, VAR_1, VAR_2, VAR_4, *VAR_3, ((void*)0), ((void*)0));
        return VAR_4;
    }
    *VAR_3 = 0;
    return ((void*)0);
}
