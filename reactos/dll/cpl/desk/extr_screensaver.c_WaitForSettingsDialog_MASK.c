
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ message; } ;
typedef TYPE_1__ MSG ;
typedef int HWND ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int,int *,scalar_t__,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static BOOL
FUNC_5(HWND VAR_7,
                      HANDLE VAR_8)
{
    DWORD VAR_9;
    MSG VAR_10;

    while (VAR_4)
    {
        VAR_9 = FUNC_2(1,
                                             &VAR_8,
                                             VAR_0,
                                             VAR_1,
                                             VAR_3);
        if (VAR_9 == VAR_5 + 1)
        {
            if (FUNC_3(&VAR_10, ((void*)0), 0, 0, VAR_2))
            {
                if (VAR_10.message == VAR_6)
                {
                    return VAR_0;
                }
                if (FUNC_1(VAR_7, &VAR_10))
                {
                    FUNC_4(&VAR_10);
                    FUNC_0(&VAR_10);
                }
            }
            else
            {
                return VAR_0;
            }
        }
        else if (VAR_9 == VAR_5)
        {
            return VAR_4;
        }
        else
        {
            return VAR_0;
        }
    }
}
