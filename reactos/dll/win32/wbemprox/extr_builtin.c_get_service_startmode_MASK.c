
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;






__attribute__((used)) static const WCHAR *FUNC_1( DWORD VAR_0 )
{
    static const WCHAR VAR_1[] = {'B','o','o','t',0};
    static const WCHAR VAR_2[] = {'S','y','s','t','e','m',0};
    static const WCHAR VAR_3[] = {'A','u','t','o',0};
    static const WCHAR VAR_4[] = {'M','a','n','u','a','l',0};
    static const WCHAR VAR_5[] = {'D','i','s','a','b','l','e','d',0};
    static const WCHAR VAR_6[] = {'U','n','k','n','o','w','n',0};

    switch (VAR_0)
    {
    case 131: return VAR_1;
    case 128: return VAR_2;
    case 132: return VAR_3;
    case 130: return VAR_4;
    case 129: return VAR_5;
    default:
        FUNC_0("unknown mode 0x%x\n", VAR_0);
        return VAR_6;
    }
}
