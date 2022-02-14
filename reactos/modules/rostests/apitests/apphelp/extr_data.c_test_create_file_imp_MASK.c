
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int const*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,char const*,int ,int *,int *) ;
 int FUNC_3 (int,char*) ;

void FUNC_4(const WCHAR* VAR_4, const char* VAR_5, size_t VAR_6)
{
    HANDLE VAR_7 = FUNC_1(VAR_4, VAR_2, 0, ((void*)0), VAR_0, VAR_1, ((void*)0));
    FUNC_3(VAR_7 != VAR_3, "can't create file\n");
    if (VAR_7 != VAR_3)
    {
        if (VAR_5 && VAR_6)
        {
            DWORD VAR_8;
            FUNC_2(VAR_7, VAR_5, (DWORD)VAR_6, &VAR_8, ((void*)0));
        }
        FUNC_0(VAR_7);
    }
}
