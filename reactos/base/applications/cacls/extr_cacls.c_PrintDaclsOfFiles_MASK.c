
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


 int FUNC_0 (int ,char*) ;
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
 int FUNC_7 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static BOOL
FUNC_8(LPCTSTR VAR_9)
{
    TCHAR VAR_10[VAR_5];
    WIN32_FIND_DATA VAR_11;
    HANDLE VAR_12;
    DWORD VAR_13;




    if (!FUNC_5(VAR_10, VAR_9))
        return VAR_2;




    VAR_12 = FUNC_2(VAR_9, &VAR_11);
    if (VAR_12 == VAR_4)
        return VAR_2;

    do
    {
        if (VAR_11.dwFileAttributes & VAR_3)
            continue;

        if (!FUNC_7(VAR_10, VAR_11.cFileName))
        {
            VAR_13 = FUNC_4();
            if (VAR_13 == VAR_0)
            {
                FUNC_6(VAR_13);
                if (!VAR_6)
                {
                    FUNC_1(VAR_12);
                    return VAR_2;
                }
            }
            else
            {
                break;
            }
        }
        else
        {
            FUNC_0(VAR_7, L"\n");
        }
    } while(FUNC_3(VAR_12, &VAR_11));
    VAR_13 = FUNC_4();
    FUNC_1(VAR_12);

    if (VAR_13 != VAR_1)
    {
        FUNC_6(VAR_13);
        return VAR_2;
    }

    return VAR_8;
}
