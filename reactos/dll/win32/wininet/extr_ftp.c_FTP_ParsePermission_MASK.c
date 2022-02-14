
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bIsDirectory; unsigned short permissions; } ;
typedef TYPE_1__* LPFILEPROPERTIESW ;
typedef char* LPCSTR ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_1(LPCSTR VAR_2, LPFILEPROPERTIESW VAR_3)
{
    BOOL VAR_4 = VAR_1;
    unsigned short VAR_5 = 0;
    INT VAR_6 = 1;
    INT VAR_7 = 9;

    FUNC_0("\n");
    if ((*VAR_2 != 'd') && (*VAR_2 != '-') && (*VAR_2 != 'l'))
    {
        VAR_4 = VAR_0;
        return VAR_4;
    }

    VAR_3->bIsDirectory = (*VAR_2 == 'd');
    do
    {
        switch (VAR_6)
        {
            case 1:
                VAR_5 |= (*(VAR_2+1) == 'r' ? 1 : 0) << 8;
                break;
            case 2:
                VAR_5 |= (*(VAR_2+2) == 'w' ? 1 : 0) << 7;
                break;
            case 3:
                VAR_5 |= (*(VAR_2+3) == 'x' ? 1 : 0) << 6;
                break;
            case 4:
                VAR_5 |= (*(VAR_2+4) == 'r' ? 1 : 0) << 5;
                break;
            case 5:
                VAR_5 |= (*(VAR_2+5) == 'w' ? 1 : 0) << 4;
                break;
            case 6:
                VAR_5 |= (*(VAR_2+6) == 'x' ? 1 : 0) << 3;
                break;
            case 7:
                VAR_5 |= (*(VAR_2+7) == 'r' ? 1 : 0) << 2;
                break;
            case 8:
                VAR_5 |= (*(VAR_2+8) == 'w' ? 1 : 0) << 1;
                break;
            case 9:
                VAR_5 |= (*(VAR_2+9) == 'x' ? 1 : 0);
                break;
        }
        VAR_6++;
    }while (VAR_6 <= VAR_7);

    VAR_3->permissions = VAR_5;
    return VAR_4;
}
