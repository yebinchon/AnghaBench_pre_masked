
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct security_attributes {int sa; } ;
typedef int LPCTSTR ;
typedef int * HANDLE ;
typedef int BOOL ;


 int * FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct security_attributes*) ;

HANDLE
FUNC_2(LPCTSTR VAR_0, bool VAR_1, bool VAR_2, bool VAR_3)
{
    if (VAR_1)
    {
        struct security_attributes VAR_4;
        if (!FUNC_1(&VAR_4))
        {
            return ((void*)0);
        }
        return FUNC_0(&VAR_4.sa, (BOOL)VAR_3, (BOOL)VAR_2, VAR_0);
    }
    else
    {
        return FUNC_0(((void*)0), (BOOL)VAR_3, (BOOL)VAR_2, VAR_0);
    }
}
