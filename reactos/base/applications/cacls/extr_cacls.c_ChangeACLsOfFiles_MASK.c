
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwFileAttributes; int cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
typedef int TCHAR ;
typedef int LPCTSTR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static BOOL
FUNC_7(LPCTSTR VAR_8)
{
    TCHAR VAR_9[VAR_5];
    HANDLE VAR_10;
    WIN32_FIND_DATA VAR_11;
    DWORD VAR_12;




    if (!FUNC_5(VAR_9, VAR_8))
        return VAR_2;




    VAR_10 = FUNC_2(VAR_8, &VAR_11);
    if (VAR_10 == VAR_4)
        return VAR_2;

    do
    {
        if (VAR_11.dwFileAttributes & VAR_3)
            continue;

        if (!FUNC_0(VAR_9, VAR_11.cFileName))
        {
            VAR_12 = FUNC_4();
            if (VAR_12 == VAR_0)
            {
                FUNC_6(VAR_12);
                if (!VAR_6)
                {
                    FUNC_1(VAR_10);
                    return VAR_2;
                }
            }
            else
                break;
        }
    } while(FUNC_3(VAR_10, &VAR_11));

    VAR_12 = FUNC_4();
    FUNC_1(VAR_10);

    if (VAR_12 != VAR_1)
    {
        FUNC_6(VAR_12);
        return VAR_2;
    }

    return VAR_7;
}
