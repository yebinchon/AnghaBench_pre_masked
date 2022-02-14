
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwFileAttributes; int * cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
typedef int TCHAR ;
typedef int LPCTSTR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_1__*) ;
 int FUNC_5 (int,int *) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_7 ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int *,int ) ;

__attribute__((used)) static BOOL
FUNC_11(LPCTSTR VAR_8)
{
    HANDLE VAR_9;
    WIN32_FIND_DATA VAR_10;
    TCHAR VAR_11[VAR_5];
    DWORD VAR_12;




    FUNC_5(VAR_5, VAR_11);
    FUNC_0(VAR_11);




    VAR_9 = FUNC_3(VAR_8, &VAR_10);
    if (VAR_9 == VAR_4)
        return VAR_2;

    do
    {
        if (VAR_10.dwFileAttributes & VAR_3)
            continue;

        if (!FUNC_1(VAR_11, VAR_10.cFileName))
        {
            VAR_12 = FUNC_6();
            if (VAR_12 == VAR_0)
            {
                FUNC_7(VAR_12);
                if (!VAR_6)
                {
                    FUNC_2(VAR_9);
                    return VAR_2;
                }
            }
            else
                break;
        }
    } while(FUNC_4(VAR_9, &VAR_10));

    VAR_12 = FUNC_6();
    FUNC_2(VAR_9);

    if (VAR_12 != VAR_1)
    {
        FUNC_7(VAR_12);
        return VAR_2;
    }




    VAR_9 = FUNC_3(FUNC_9("*"), &VAR_10);
    if (VAR_9 == VAR_4)
        return VAR_2;
    do
    {
        if (FUNC_10(VAR_10.cFileName, FUNC_9(".")) == 0 ||
            FUNC_10(VAR_10.cFileName, FUNC_9("..")) == 0)
            continue;

        if (VAR_10.dwFileAttributes & VAR_3)
        {
            FUNC_5(VAR_5, VAR_11);
            if (FUNC_8(VAR_10.cFileName))
            {
                FUNC_11(VAR_8);
                FUNC_8(VAR_11);
            }
            else
            {
                VAR_12 = FUNC_6();
                if (VAR_12 == VAR_0)
                {
                    FUNC_7(VAR_12);
                    if (!VAR_6)
                    {
                        FUNC_2(VAR_9);
                        return VAR_2;
                    }
                }
                else
                    break;
            }
        }
    } while(FUNC_4(VAR_9, &VAR_10));
    VAR_12 = FUNC_6();
    FUNC_2(VAR_9);

    if (VAR_12 != VAR_1)
    {
        FUNC_7(VAR_12);
        return VAR_2;
    }
    return VAR_7;
}
