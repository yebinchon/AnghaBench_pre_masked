
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned char FUNC_1(WCHAR VAR_0)
{
    switch (FUNC_0(VAR_0))
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        return (VAR_0 - '0') & 0xf;
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
        return (VAR_0 - 'a' + 10) & 0xf;
    default:
        return 0;
    }
}
