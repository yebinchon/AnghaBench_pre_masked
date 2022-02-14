
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int szFormat ;
typedef int VOID ;
struct TYPE_3__ {int dmDisplayFrequency; } ;
typedef int TCHAR ;
typedef TYPE_1__* PDEVMODEW ;
typedef int * LPTSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int *,int,int *,int) ;
 int VAR_2 ;

__attribute__((used)) static VOID
FUNC_3(PDEVMODEW VAR_3,
                          LPTSTR VAR_4,
                          DWORD VAR_5)
{
    TCHAR VAR_6[64];

    if (VAR_3->dmDisplayFrequency <= 1)
    {
        if (!FUNC_0(VAR_2,
                        VAR_1,
                        VAR_4,
                        VAR_5))
        {
            VAR_4[0] = FUNC_1('\0');
        }
    }
    else
    {
        if (!FUNC_0(VAR_2,
                        VAR_0,
                        VAR_6,
                        sizeof(VAR_6) / sizeof(VAR_6[0])))
        {
            VAR_6[0] = FUNC_1('\0');
        }

        FUNC_2(VAR_4,
                   VAR_5,
                   VAR_6,
                   VAR_3->dmDisplayFrequency);
    }
}
