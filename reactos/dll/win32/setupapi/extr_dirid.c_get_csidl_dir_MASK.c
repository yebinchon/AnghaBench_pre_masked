
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const WCHAR ;
typedef int DWORD ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int const* FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int const*,int ,int ) ;
 int VAR_1 ;
 int const* FUNC_4 () ;
 int FUNC_5 (int const*,int const*,int) ;
 int FUNC_6 (int const*) ;

__attribute__((used)) static const WCHAR *FUNC_7( DWORD VAR_2 )
{
    WCHAR VAR_3[VAR_0], *VAR_4;
    int VAR_5;

    if (!FUNC_3( ((void*)0), VAR_3, VAR_2, VAR_1 ))
    {
        FUNC_0( "CSIDL %x not found\n", VAR_2 );
        return FUNC_4();
    }
    VAR_5 = (FUNC_6(VAR_3) + 1) * sizeof(WCHAR);
    if ((VAR_4 = FUNC_2( FUNC_1(), 0, VAR_5 ))) FUNC_5( VAR_4, VAR_3, VAR_5 );
    return VAR_4;
}
