
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int VARIANT ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int DWORD ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int const*,int const*,int ,int *,int *,int*) ;
 int VAR_2 ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,scalar_t__,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_6( HKEY VAR_5, const WCHAR *VAR_6, const WCHAR *VAR_7, VARIANT *VAR_8, VARIANT *VAR_9 )
{
    HRESULT VAR_10 = VAR_2;
    BSTR VAR_11 = ((void*)0);
    DWORD VAR_12;
    LONG VAR_13;

    FUNC_3("%p, %s, %s\n", VAR_5, FUNC_4(VAR_6), FUNC_4(VAR_7));

    if ((VAR_13 = FUNC_0( VAR_5, VAR_6, VAR_7, VAR_1, ((void*)0), ((void*)0), &VAR_12 ))) goto done;
    if (!(VAR_11 = FUNC_1( ((void*)0), VAR_12 / sizeof(WCHAR) - 1 )))
    {
        VAR_10 = VAR_0;
        goto done;
    }
    if (!(VAR_13 = FUNC_0( VAR_5, VAR_6, VAR_7, VAR_1, ((void*)0), VAR_11, &VAR_12 )))
        FUNC_5( VAR_3, 0, VAR_11, VAR_8 );

done:
    FUNC_5( VAR_4, VAR_13, ((void*)0), VAR_9 );
    if (VAR_13) FUNC_2( VAR_11 );
    return VAR_10;
}
