
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_4(LPCWSTR VAR_3, LPCWSTR VAR_4)
{
    if (VAR_2 & VAR_1)
    {
        if (VAR_2 & VAR_0)
            return FUNC_2(VAR_3, VAR_4) == 0;
        else
            return FUNC_0(VAR_3, VAR_4) == 0;
    }
    else
    {
        if (VAR_2 & VAR_0)
            return FUNC_3(VAR_3, VAR_4) != ((void*)0);
        else
            return FUNC_1(VAR_3, VAR_4) != ((void*)0);
    }
}
