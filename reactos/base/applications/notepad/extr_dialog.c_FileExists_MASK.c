
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WIN32_FIND_DATA ;
typedef int LPCTSTR ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ VAR_0 ;

BOOL FUNC_2(LPCTSTR VAR_1)
{
    WIN32_FIND_DATA VAR_2;
    HANDLE VAR_3;

    VAR_3 = FUNC_1(VAR_1, &VAR_2);
    FUNC_0(VAR_3);

    return (VAR_3 != VAR_0);
}
