
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPWSTR ;
typedef int INT ;
typedef int BOOL ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,char*) ;

BOOL
FUNC_6(
    INT VAR_3,
    LPWSTR *VAR_4)
{

    if (VAR_3 == 1)
    {
        FUNC_0(VAR_1, VAR_0);
        return VAR_2;
    }


    if (!FUNC_5(VAR_4[1], L"disk"))
        FUNC_1();
    else if (!FUNC_5(VAR_4[1], L"partition"))
        FUNC_2();
    else if (!FUNC_5(VAR_4[1], L"volume"))
        FUNC_4();
    else if (!FUNC_5(VAR_4[1], L"vdisk"))
        FUNC_3();
    else
        FUNC_0(VAR_1, VAR_0);

    return VAR_2;
}
