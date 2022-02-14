
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int * LPWSTR ;
typedef int EXTENDED_NAME_FORMAT ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int VAR_0 ;
 int * FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int VAR_1 ;

LPWSTR FUNC_5(EXTENDED_NAME_FORMAT VAR_2)
{
    LPWSTR VAR_3 = FUNC_3(FUNC_1(), VAR_0, VAR_1);
    ULONG VAR_4 = VAR_1;

    if (VAR_3 == ((void*)0))
        return ((void*)0);

    if (FUNC_2(VAR_2, VAR_3, &VAR_4))
    {
        FUNC_0(VAR_3);
        return VAR_3;
    }

    FUNC_4(FUNC_1(), 0, VAR_3);
    return ((void*)0);
}
