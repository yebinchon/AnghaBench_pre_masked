
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (int ,int const*,int *,int *,int *,int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static BYTE *FUNC_2( HKEY VAR_0, const WCHAR *VAR_1, DWORD *VAR_2, DWORD *VAR_3 )
{
    BYTE *VAR_4;
    if (FUNC_0( VAR_0, VAR_1, ((void*)0), ((void*)0), ((void*)0), VAR_3 )) return ((void*)0);
    if (!(VAR_4 = FUNC_1( *VAR_3 ))) return ((void*)0);
    FUNC_0( VAR_0, VAR_1, ((void*)0), VAR_2, VAR_4, VAR_3 );
    return VAR_4;
}
