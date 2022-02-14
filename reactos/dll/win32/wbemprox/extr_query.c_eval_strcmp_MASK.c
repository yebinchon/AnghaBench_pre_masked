
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int LONGLONG ;
typedef int HRESULT ;


 int FUNC_0 (char*,int) ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*,int const*) ;
 int FUNC_2 (int const*,int const*) ;

__attribute__((used)) static HRESULT FUNC_3( UINT VAR_2, const WCHAR *VAR_3, const WCHAR *VAR_4, LONGLONG *VAR_5 )
{
    if (!VAR_3 || !VAR_4)
    {
        *VAR_5 = 0;
        return VAR_0;
    }
    switch (VAR_2)
    {
    case 134:
        *VAR_5 = !FUNC_2( VAR_3, VAR_4 );
        break;
    case 132:
        *VAR_5 = FUNC_2( VAR_3, VAR_4 ) > 0;
        break;
    case 129:
        *VAR_5 = FUNC_2( VAR_3, VAR_4 ) < 0;
        break;
    case 131:
        *VAR_5 = FUNC_2( VAR_3, VAR_4 ) <= 0;
        break;
    case 133:
        *VAR_5 = FUNC_2( VAR_3, VAR_4 ) >= 0;
        break;
    case 128:
        *VAR_5 = FUNC_2( VAR_3, VAR_4 );
        break;
    case 130:
        *VAR_5 = FUNC_1( VAR_3, VAR_4 );
        break;
    default:
        FUNC_0("unhandled operator %u\n", VAR_2);
        return VAR_1;
    }
    return VAR_0;
}
