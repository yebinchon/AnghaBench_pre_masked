
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPWSTR ;
typedef int INT ;
typedef int BOOL ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;

BOOL
FUNC_4(
    INT VAR_3,
    LPWSTR *VAR_4)
{

    if (VAR_3 == 1)
    {
        FUNC_0(VAR_1, VAR_0);
        return VAR_2;
    }


    if (!FUNC_3(VAR_4[1], L"disk"))
        FUNC_1(VAR_3, VAR_4);
    else if (!FUNC_3(VAR_4[1], L"partition"))
        FUNC_2(VAR_3, VAR_4);
    else
        FUNC_0(VAR_1, VAR_0);

    return VAR_2;
}
