
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LONGLONG ;
typedef int CIMTYPE ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char const*,int ) ;
 int FUNC_2 (char*,char const*,int ) ;

__attribute__((used)) static const WCHAR *FUNC_3( WCHAR *VAR_0, CIMTYPE VAR_1, LONGLONG VAR_2 )
{
    static const WCHAR VAR_3[] = {'%','d',0};
    static const WCHAR VAR_4[] = {'%','u',0};
    static const WCHAR VAR_5[] = {'%','I','6','4','d',0};
    static const WCHAR VAR_6[] = {'%','I','6','4','u',0};

    switch (VAR_1)
    {
    case 132:
    case 135:
    case 134:
        FUNC_1( VAR_0, VAR_3, VAR_2 );
        return VAR_0;

    case 128:
    case 131:
    case 130:
        FUNC_1( VAR_0, VAR_4, VAR_2 );
        return VAR_0;

    case 133:
        FUNC_2( VAR_0, VAR_5, VAR_2 );
        return VAR_0;

    case 129:
        FUNC_2( VAR_0, VAR_6, VAR_2 );
        return VAR_0;

    default:
        FUNC_0( "unhandled type %u\n", VAR_1 );
        return ((void*)0);
    }
}
