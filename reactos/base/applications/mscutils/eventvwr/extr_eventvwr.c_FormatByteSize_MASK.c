
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef scalar_t__ LPWSTR ;
typedef int LONGLONG ;


 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,char*,scalar_t__*,size_t*,int ) ;
 int VAR_1 ;

UINT
FUNC_3(LONGLONG VAR_2, LPWSTR VAR_3, UINT VAR_4)
{
    UINT VAR_5, VAR_6;
    LPWSTR VAR_7;
    size_t VAR_8;


    VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
    if (!VAR_5)
        return 0;


    VAR_7 = VAR_3 + VAR_5;
    VAR_6 = VAR_4 - VAR_5;
    FUNC_2(VAR_7, VAR_6, L" ", &VAR_7, &VAR_8, 0);
    VAR_6 = (UINT)VAR_8;
    VAR_5 = FUNC_1(VAR_1, VAR_0, VAR_7, VAR_6);
    VAR_6 -= VAR_5;

    return VAR_4 - VAR_6;
}
