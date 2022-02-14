
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int UINT ;
typedef int LPWSTR ;
typedef scalar_t__ LPVOID ;
typedef int LPSTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

VOID
FUNC_4(
    UINT VAR_1,
    LPVOID VAR_2,
    UINT VAR_3,
    LPVOID VAR_4,
    BOOL VAR_5)
{
    if (VAR_5)
    {

        if (!FUNC_1(VAR_0, VAR_1, (LPWSTR)VAR_2, VAR_3))
        {

            FUNC_3((LPWSTR)VAR_2, (LPWSTR)VAR_4);
        }
    }
    else
    {

        if (!FUNC_0(VAR_0, VAR_1, (LPSTR)VAR_2, VAR_3))
        {

            FUNC_2((LPSTR)VAR_2, (LPSTR)VAR_4);
        }
    }
}
