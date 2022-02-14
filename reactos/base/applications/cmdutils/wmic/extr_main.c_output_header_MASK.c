
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bomW ;
typedef int WCHAR ;
typedef int ULONG ;
typedef int DWORD ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int*,int,int*,int *) ;
 int FUNC_3 (int ,int const*,int,int*,int ) ;
 int FUNC_4 (int*,int ,int const*,int ,int const*) ;

__attribute__((used)) static int FUNC_5( const WCHAR *VAR_2, ULONG VAR_3 )
{
    static const WCHAR VAR_4[] = {0xfeff}, VAR_5[] = {'%','-','*','s','\r','\n',0};
    int VAR_6;
    DWORD VAR_7;
    WCHAR VAR_8[8192];

    VAR_6 = FUNC_4( VAR_8, FUNC_0(VAR_8), VAR_5, VAR_3, VAR_2 );

    if (!FUNC_2( FUNC_1(VAR_1), VAR_8, VAR_6, &VAR_7, ((void*)0) ))
    {
        FUNC_3( FUNC_1(VAR_1), VAR_4, sizeof(VAR_4), &VAR_7, VAR_0 );
        FUNC_3( FUNC_1(VAR_1), VAR_8, VAR_6 * sizeof(WCHAR), &VAR_7, VAR_0 );
        VAR_7 += sizeof(VAR_4);
    }

    return VAR_7;
}
