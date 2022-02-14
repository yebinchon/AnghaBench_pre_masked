
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INFCONTEXT ;
typedef char const* DWORD ;


 char const* VAR_0 ;
 char* FUNC_0 () ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int,char*,char const*,...) ;
 int FUNC_3 (char const*,char const*) ;

__attribute__((used)) static const char *FUNC_4( INFCONTEXT *VAR_1, const char *VAR_2 )
{
    const char *VAR_3 = FUNC_1( VAR_1, 0 );
    DWORD VAR_4 = FUNC_0();

    if (!VAR_3)
    {
        FUNC_2( !VAR_2, "missing key %s\n", VAR_2 );
        FUNC_2( VAR_4 == 0 || VAR_4 == VAR_0, "last error set to %u\n", VAR_4 );
    }
    else
    {
        FUNC_2( !FUNC_3( VAR_3, VAR_2 ), "bad key %s/%s\n", VAR_3, VAR_2 );
        FUNC_2( VAR_4 == 0, "last error set to %u\n", VAR_4 );
    }
    return VAR_3;
}
