
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ UINT ;
typedef int LONGLONG ;
typedef scalar_t__ INT_PTR ;
typedef int HRESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,char const*) ;

__attribute__((used)) static HRESULT FUNC_2( UINT VAR_3, LONGLONG VAR_4, LONGLONG VAR_5, UINT VAR_6, UINT VAR_7, LONGLONG *VAR_8 )
{
    static const WCHAR VAR_9[] = {'T','r','u','e',0};

    if (VAR_6 == VAR_0) VAR_4 = !FUNC_1( (const WCHAR *)(INT_PTR)VAR_4, VAR_9 ) ? -1 : 0;
    else if (VAR_7 == VAR_0) VAR_5 = !FUNC_1( (const WCHAR *)(INT_PTR)VAR_5, VAR_9 ) ? -1 : 0;

    switch (VAR_3)
    {
    case 129:
        *VAR_8 = (VAR_4 == VAR_5);
        break;
    case 128:
        *VAR_8 = (VAR_4 != VAR_5);
        break;
    default:
        FUNC_0("unhandled operator %u\n", VAR_3);
        return VAR_2;
    }
    return VAR_1;
}
