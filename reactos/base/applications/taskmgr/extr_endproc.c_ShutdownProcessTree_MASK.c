
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;

BOOL FUNC_3(HANDLE VAR_2, DWORD VAR_3)
{
    HANDLE VAR_4 = FUNC_1(VAR_1, 0);
    BOOL VAR_5;

    if (!VAR_4)
    {
        return VAR_0;
    }

    VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_3);
    FUNC_0(VAR_4);
    return VAR_5;
}
