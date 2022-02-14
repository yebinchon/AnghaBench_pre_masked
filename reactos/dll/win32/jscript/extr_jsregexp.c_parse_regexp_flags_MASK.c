
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int const) ;

HRESULT FUNC_1(const WCHAR *VAR_6, DWORD VAR_7, DWORD *VAR_8)
{
    const WCHAR *VAR_9;
    DWORD VAR_10 = 0;

    for (VAR_9 = VAR_6; VAR_9 < VAR_6+VAR_7; VAR_9++) {
        switch (*VAR_9) {
        case 'g':
            VAR_10 |= VAR_2;
            break;
        case 'i':
            VAR_10 |= VAR_1;
            break;
        case 'm':
            VAR_10 |= VAR_3;
            break;
        case 'y':
            VAR_10 |= VAR_4;
            break;
        default:
            FUNC_0("wrong flag %c\n", *VAR_9);
            return VAR_0;
        }
    }

    *VAR_8 = VAR_10;
    return VAR_5;
}
