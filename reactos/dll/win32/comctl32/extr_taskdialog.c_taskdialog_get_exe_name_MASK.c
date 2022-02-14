
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int TASKDIALOGCONFIG ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int *,int *,scalar_t__) ;
 int * FUNC_1 (int *,char) ;

__attribute__((used)) static WCHAR *FUNC_2(const TASKDIALOGCONFIG *VAR_0, WCHAR *VAR_1, DWORD VAR_2)
{
    DWORD VAR_3 = FUNC_0(((void*)0), VAR_1, VAR_2);
    if (VAR_3 && VAR_3 < VAR_2)
    {
        WCHAR *VAR_4;
        if ((VAR_4 = FUNC_1(VAR_1, '/'))) VAR_1 = VAR_4 + 1;
        if ((VAR_4 = FUNC_1(VAR_1, '\\'))) VAR_1 = VAR_4 + 1;
        return VAR_1;
    }
    else
        return ((void*)0);
}
