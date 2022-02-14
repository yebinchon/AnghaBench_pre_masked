
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SC_HANDLE ;
typedef int LPCWSTR ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

BOOL
FUNC_4(LPCWSTR VAR_3)
{
    SC_HANDLE VAR_4;
    SC_HANDLE VAR_5;
    BOOL VAR_6;

    VAR_5 = FUNC_2(((void*)0),
                                ((void*)0),
                                VAR_1);
    if (!VAR_5)
        return VAR_0;

    VAR_4 = FUNC_3(VAR_5,
                            VAR_3,
                            VAR_2);
    if (!VAR_4)
    {
        FUNC_0(VAR_5);
        return VAR_0;
    }

    VAR_6 = FUNC_1(VAR_4);

    FUNC_0(VAR_4);
    FUNC_0(VAR_5);

    return VAR_6;
}
