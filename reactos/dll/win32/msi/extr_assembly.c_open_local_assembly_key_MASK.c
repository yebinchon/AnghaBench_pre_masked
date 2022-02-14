
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int LONG ;
typedef int HKEY ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static LONG FUNC_5( UINT VAR_1, BOOL VAR_2, const WCHAR *VAR_3, HKEY *VAR_4 )
{
    LONG VAR_5;
    HKEY VAR_6;
    WCHAR *VAR_7;

    if (!(VAR_7 = FUNC_2( VAR_3 )))
        return VAR_0;

    if ((VAR_5 = FUNC_4( VAR_1, VAR_2, &VAR_6 )))
    {
        FUNC_3( VAR_7 );
        return VAR_5;
    }
    VAR_5 = FUNC_1( VAR_6, VAR_7, VAR_4 );
    FUNC_0( VAR_6 );
    FUNC_3( VAR_7 );
    return VAR_5;
}
