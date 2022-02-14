
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int szBuf ;
typedef int WPARAM ;
typedef int WCHAR ;
typedef int VOID ;
typedef int UINT ;
struct TYPE_3__ {scalar_t__ wMonth; int member_0; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int LPARAM ;
typedef int INT ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,scalar_t__,int *,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static VOID
FUNC_3(HWND VAR_8)
{
    SYSTEMTIME VAR_9 = {0};
    WCHAR VAR_10[64];
    INT VAR_11;
    UINT VAR_12;

    FUNC_0(&VAR_9);

    FUNC_2(VAR_8,
                 VAR_2,
                 0,
                 0);

    for (VAR_12 = 1;
         VAR_12 <= 13;
         VAR_12++)
    {
        VAR_11 = FUNC_1(VAR_7,
                           ((VAR_12 < 13) ? VAR_5 + VAR_12 - 1 : VAR_6),
                           VAR_10,
                           sizeof(VAR_10) / sizeof(VAR_10[0]));
        if (VAR_11 > 1)
        {
            VAR_11 = (INT)FUNC_2(VAR_8,
                                  VAR_0,
                                  0,
                                  (LPARAM)VAR_10);
            if (VAR_11 != VAR_1)
            {
                FUNC_2(VAR_8,
                             VAR_4,
                             (WPARAM)VAR_11,
                             VAR_12);

                if (VAR_12 == (UINT)VAR_9.wMonth)
                {
                    FUNC_2(VAR_8,
                                 VAR_3,
                                 (WPARAM)VAR_11,
                                 0);
                }
            }
        }
    }
}
