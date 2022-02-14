
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int VARIANT ;
typedef int LONG ;
typedef int HRESULT ;
typedef int HKEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int const*,int ,int *,int ,int ,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,int ,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_6( HKEY VAR_2, const WCHAR *VAR_3, VARIANT *VAR_4 )
{
    LONG VAR_5;
    HKEY VAR_6;

    FUNC_3("%p, %s\n", VAR_2, FUNC_4(VAR_3));

    VAR_5 = FUNC_2( VAR_2, VAR_3, 0, ((void*)0), 0, 0, ((void*)0), &VAR_6, ((void*)0) );
    FUNC_5( VAR_1, VAR_5, ((void*)0), VAR_4 );
    if (!VAR_5)
    {
        FUNC_1( VAR_6 );
        return VAR_0;
    }
    return FUNC_0( VAR_5 );
}
