
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPWSTR ;
typedef int * HANDLE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int * FUNC_0 (scalar_t__,int ,int ,int *,int ,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static HANDLE
FUNC_1(LPWSTR VAR_6, BOOL VAR_7)
{
    HANDLE VAR_8 = ((void*)0);

    if (VAR_6)
    {
        VAR_8 = FUNC_0(VAR_6,
                            VAR_7 ? VAR_4 : VAR_3,
                            0,
                            ((void*)0),
                            VAR_7 ? VAR_0 : VAR_5,
                            VAR_2 | VAR_1,
                            ((void*)0));
    }

    return VAR_8;
}
