
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;
typedef int BYTE ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int const,int const,int const,int const,int const,int const) ;

__attribute__((used)) static WCHAR *FUNC_2( const BYTE *VAR_0, DWORD VAR_1 )
{
    static const WCHAR VAR_2[] =
        {'%','0','2','x',':','%','0','2','x',':','%','0','2','x',':',
         '%','0','2','x',':','%','0','2','x',':','%','0','2','x',0};
    WCHAR *VAR_3;

    if (VAR_1 != 6 || !(VAR_3 = FUNC_0( 18 * sizeof(WCHAR) ))) return ((void*)0);
    FUNC_1( VAR_3, VAR_2, VAR_0[0], VAR_0[1], VAR_0[2], VAR_0[3], VAR_0[4], VAR_0[5] );
    return VAR_3;
}
