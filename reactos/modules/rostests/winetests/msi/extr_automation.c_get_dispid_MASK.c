
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int * LPOLESTR ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;
typedef int DISPID ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int **,int,int ,int*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,char const*,int,int *,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static DISPID FUNC_5( IDispatch *VAR_3, const char *VAR_4 )
{
    LPOLESTR VAR_5;
    UINT VAR_6;
    DISPID VAR_7 = -1;
    HRESULT VAR_8;

    VAR_6 = FUNC_4(VAR_0, 0, VAR_4, -1, ((void*)0), 0 );
    VAR_5 = FUNC_1(FUNC_0(), 0, VAR_6*sizeof(WCHAR) );
    if (VAR_5)
    {
        FUNC_4(VAR_0, 0, VAR_4, -1, VAR_5, VAR_6 );
        VAR_8 = FUNC_3( VAR_3, &VAR_1, &VAR_5, 1, 0, &VAR_7 );
        FUNC_2(FUNC_0(), 0, VAR_5);
        if (VAR_8 != VAR_2)
            return -1;
    }

    return VAR_7;
}
