
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_3__ {int hSelf; } ;
typedef TYPE_1__* PCREATE_DATA ;
typedef int * LPWSTR ;
typedef int INT ;
typedef scalar_t__ HWND ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static LPWSTR
FUNC_4(PCREATE_DATA VAR_1,
                    UINT VAR_2)
{
    HWND VAR_3;
    LPWSTR VAR_4 = ((void*)0);
    INT VAR_5 = 0;

    VAR_3 = FUNC_0(VAR_1->hSelf,
                      VAR_2);
    if (VAR_3)
    {
        VAR_5 = FUNC_1(VAR_3);
        if (VAR_5)
        {
            VAR_4 = (LPWSTR)FUNC_3(VAR_0,
                                         0,
                                         (VAR_5 + 1) * sizeof(WCHAR));
            if (VAR_4)
            {
                FUNC_2(VAR_3,
                               VAR_4,
                               VAR_5 + 1);
            }
        }
    }

    return VAR_4;
}
