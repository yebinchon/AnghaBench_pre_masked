
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_2 (int const*,int *,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_3( const WCHAR *VAR_2, DWORD VAR_3 )
{
    WCHAR VAR_4[VAR_1 + 1];
    DWORD VAR_5 = FUNC_0(VAR_4);

    if (!FUNC_1( VAR_4, &VAR_5 )) return VAR_0;
    return VAR_3 == VAR_5 && !FUNC_2( VAR_2, VAR_4, VAR_5 );
}
