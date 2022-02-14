
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum platform { ____Placeholder_platform } platform ;
typedef int WCHAR ;
typedef int UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

UINT FUNC_5(const WCHAR *VAR_5, enum platform VAR_6)
{
    WCHAR VAR_7[0x200];

    FUNC_1("%s\n", FUNC_2(VAR_5));

    if (VAR_2 && VAR_6 == VAR_1)
    {
        FUNC_4(VAR_7, VAR_4);
        FUNC_3(VAR_7, VAR_5);
    }
    else
    {
        FUNC_4(VAR_7, VAR_3);
        FUNC_3(VAR_7, VAR_5);
    }
    return FUNC_0(VAR_0, VAR_7);
}
