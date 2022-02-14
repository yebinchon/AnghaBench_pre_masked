
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int TCHAR ;
typedef int PCON_PAGER ;
typedef int * LPTSTR ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;

BOOL FUNC_3(PCON_PAGER VAR_3, BOOL VAR_4, LPTSTR VAR_5, va_list VAR_6)
{

    TCHAR VAR_7[VAR_0];


    if (VAR_5 == ((void*)0))
        return VAR_2;

              FUNC_1(VAR_7, VAR_5, VAR_6);


    return FUNC_0(VAR_3, VAR_1, VAR_4,
                          VAR_7, FUNC_2(VAR_7));
}
