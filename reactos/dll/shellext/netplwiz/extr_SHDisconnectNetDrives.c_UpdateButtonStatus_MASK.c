
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_2__ {scalar_t__ hwndFrom; int code; } ;
typedef TYPE_1__* LPNMHDR ;
typedef int LPARAM ;
typedef scalar_t__ HWND ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;

VOID FUNC_3(WPARAM VAR_4, LPARAM VAR_5, HWND VAR_6)
{
    LPNMHDR VAR_7 = (LPNMHDR)VAR_5;
    HWND VAR_8 = FUNC_1(VAR_6, VAR_1);
    HWND VAR_9 = FUNC_1(VAR_6, VAR_2);

    if (VAR_7->hwndFrom == VAR_8)
    {
        switch (VAR_7->code)
        {
            case 128:
                if (FUNC_2(VAR_8))
                {
                    FUNC_0(VAR_9, VAR_3);
                }
                else
                {
                    FUNC_0(VAR_9, VAR_0);
                }
                break;
        }
    }
}
