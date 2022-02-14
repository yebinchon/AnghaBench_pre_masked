
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int dmBitsPerPel; } ;
typedef TYPE_1__* PDEVMODEW ;
typedef int * LPTSTR ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,scalar_t__,int *,int ) ;
 int FUNC_1 (char) ;
 int VAR_6 ;

__attribute__((used)) static VOID
FUNC_2(PDEVMODEW VAR_7,
                    LPTSTR VAR_8,
                    DWORD VAR_9)
{
    UINT VAR_10 = 0;

    switch (VAR_7->dmBitsPerPel)
    {
        case 4:
            VAR_10 = VAR_4;
            break;
        case 8:
            VAR_10 = VAR_5;
            break;
        case 15:
            VAR_10 = VAR_0;
            break;
        case 16:
            VAR_10 = VAR_1;
            break;
        case 24:
            VAR_10 = VAR_2;
            break;
        case 32:
            VAR_10 = VAR_3;
            break;
    }

    if (VAR_10 == 0 ||
        !FUNC_0(VAR_6,
                    VAR_10,
                    VAR_8,
                    VAR_9))
    {
        VAR_8[0] = FUNC_1('\0');
    }
}
