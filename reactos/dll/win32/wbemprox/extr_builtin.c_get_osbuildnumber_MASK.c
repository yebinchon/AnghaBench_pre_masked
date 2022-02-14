
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int dwBuildNumber; } ;
typedef TYPE_1__ OSVERSIONINFOEXW ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int ) ;

__attribute__((used)) static WCHAR *FUNC_2( OSVERSIONINFOEXW *VAR_0 )
{
    static const WCHAR VAR_1[] = {'%','u',0};
    WCHAR *VAR_2 = FUNC_0( 11 * sizeof(WCHAR) );
    if (VAR_2) FUNC_1( VAR_2, VAR_1, VAR_0->dwBuildNumber );
    return VAR_2;
}
