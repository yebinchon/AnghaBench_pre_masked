
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__ const*,int,char*,int,int *,int *) ;
 int FUNC_1 (scalar_t__*,scalar_t__ const*) ;
 int FUNC_2 (scalar_t__ const*) ;

__attribute__((used)) static DWORD FUNC_3(const WCHAR *VAR_3, void *VAR_4, DWORD *VAR_5, BOOL VAR_6)
{
    int VAR_7;
    if (VAR_6)
    {
        WCHAR *VAR_8 = VAR_4;

        if (VAR_3) VAR_7 = FUNC_2(VAR_3);
        else VAR_7 = 0;
        if (*VAR_5 < (VAR_7 + 1) * sizeof(WCHAR))
        {
            *VAR_5 = (VAR_7 + 1) * sizeof(WCHAR);
            return VAR_1;
        }
        if (VAR_3) FUNC_1(VAR_8, VAR_3);
        else VAR_8[0] = 0;

        *VAR_5 = VAR_7;
        return VAR_2;
    }
    else
    {
        char *VAR_9 = VAR_4;

        if (VAR_3) VAR_7 = FUNC_0(VAR_0, 0, VAR_3, -1, ((void*)0), 0, ((void*)0), ((void*)0));
        else VAR_7 = 1;
        if (*VAR_5 < VAR_7)
        {
            *VAR_5 = VAR_7;
            return VAR_1;
        }
        if (VAR_3) FUNC_0(VAR_0, 0, VAR_3, -1, VAR_9, *VAR_5, ((void*)0), ((void*)0));
        else VAR_9[0] = 0;

        *VAR_5 = VAR_7 - 1;
        return VAR_2;
    }
}
