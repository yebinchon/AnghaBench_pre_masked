
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int INT ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOL
FUNC_1(INT* VAR_3, TCHAR VAR_4, INT VAR_5)
{
    switch ( VAR_4 )
    {
    case '*':
        *VAR_3 *= VAR_5;
        break;
    case '/':
        *VAR_3 /= VAR_5;
        break;
    case '%':
        *VAR_3 %= VAR_5;
        break;
    case '+':
        *VAR_3 += VAR_5;
        break;
    case '-':
        *VAR_3 -= VAR_5;
        break;
    case '&':
        *VAR_3 &= VAR_5;
        break;
    case '^':
        *VAR_3 ^= VAR_5;
        break;
    case '|':
        *VAR_3 |= VAR_5;
        break;
    default:
        FUNC_0 ( VAR_1 );
        return VAR_0;
    }
    return VAR_2;
}
