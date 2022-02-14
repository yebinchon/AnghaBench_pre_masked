
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char UINT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL
FUNC_0(WCHAR VAR_2, UINT *VAR_3)
{
    UINT VAR_4 = VAR_2;

    if (VAR_4 < '0')
        return VAR_0;
    if (VAR_4 <= '9') {
        *VAR_3 = VAR_4 - '0';
        return VAR_1;
    }
    VAR_4 |= 0x20;
    if (VAR_4 >= 'a' && VAR_4 <= 'f') {
        *VAR_3 = VAR_4 - 'a' + 10;
        return VAR_1;
    }
    return VAR_0;
}
