
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SAFEARRAY ;
typedef int IWidget ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int *,int **,int **,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(IWidget *VAR_1, IDispatch *VAR_2)
{
    SAFEARRAY *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7;
    HRESULT VAR_8;

    VAR_3 = FUNC_3(3);
    VAR_4 = VAR_5 = FUNC_3(5);
    VAR_6 = FUNC_3(7);
    VAR_7 = FUNC_3(9);
    VAR_8 = FUNC_0(VAR_1, VAR_3, &VAR_4, &VAR_6, &VAR_7);
    FUNC_4(VAR_8 == VAR_0, "Got hr %#x.\n", VAR_8);
    FUNC_2(VAR_3, 3);
    FUNC_2(VAR_4, 4);
    FUNC_2(VAR_5, 5);
    FUNC_2(VAR_6, 7);
    FUNC_2(VAR_7, 6);

    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
    FUNC_1(VAR_5);
    FUNC_1(VAR_6);
    FUNC_1(VAR_7);
}
