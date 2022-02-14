
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;





__attribute__((used)) static const WCHAR *FUNC_1( DWORD VAR_0 )
{
    static const WCHAR VAR_1[] =
        {'R','u','n','n','i','n','g',0};
    static const WCHAR VAR_2[] =
        {'S','t','a','r','t',' ','P','e','n','d','i','n','g',0};
    static const WCHAR VAR_3[] =
        {'S','t','o','p',' ','P','e','n','d','i','n','g',0};
    static const WCHAR VAR_4[] =
        {'S','t','o','p','p','e','d',0};
    static const WCHAR VAR_5[] =
        {'U','n','k','n','o','w','n',0};

    switch (VAR_0)
    {
    case 129: return VAR_4;
    case 130: return VAR_2;
    case 128: return VAR_3;
    case 131: return VAR_1;
    default:
        FUNC_0("unknown state %u\n", VAR_0);
        return VAR_5;
    }
}
