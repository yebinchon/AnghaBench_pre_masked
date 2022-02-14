
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum platform { ____Placeholder_platform } platform ;
typedef int WCHAR ;
typedef int UINT ;
typedef int HKEY ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,int *,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int *,int ,int ,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;

UINT FUNC_6(const WCHAR *VAR_6, enum platform VAR_7, HKEY *VAR_8, BOOL VAR_9)
{
    WCHAR VAR_10[0x200];

    FUNC_2("%s\n", FUNC_3(VAR_6));

    if (VAR_3 && VAR_7 == VAR_2)
    {
        FUNC_5(VAR_10, VAR_5);
        FUNC_4(VAR_10, VAR_6);
    }
    else
    {
        FUNC_5(VAR_10, VAR_4);
        FUNC_4(VAR_10, VAR_6);
    }
    if (VAR_9) return FUNC_0(VAR_0, VAR_10, 0, ((void*)0), 0, VAR_1, ((void*)0), VAR_8, ((void*)0));
    return FUNC_1(VAR_0, VAR_10, 0, VAR_1, VAR_8);
}
