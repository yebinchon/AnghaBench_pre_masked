
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dd ;
typedef int WCHAR ;
struct TYPE_3__ {int cb; int DeviceName; } ;
typedef int * PWSTR ;
typedef TYPE_1__ DISPLAY_DEVICEW ;


 scalar_t__ FUNC_0 (int const*,int ,TYPE_1__*,int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static PWSTR
FUNC_4(const WCHAR *VAR_1)
{
    DISPLAY_DEVICEW VAR_2;
    PWSTR VAR_3 = ((void*)0);

    VAR_2.cb = sizeof(VAR_2);
    if (FUNC_0(VAR_1,
                            0,
                            &VAR_2,
                            0))
    {
        VAR_3 = FUNC_1(VAR_0,
                         (FUNC_3(VAR_2.DeviceName) + 1) * sizeof(WCHAR));
        if (VAR_3 != ((void*)0))
        {
            FUNC_2(VAR_3,
                   VAR_2.DeviceName);
        }
    }

    return VAR_3;
}
