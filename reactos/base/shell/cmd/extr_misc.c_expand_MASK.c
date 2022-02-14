
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
typedef int TCHAR ;
typedef int * LPTSTR ;
typedef int LPINT ;
typedef int * LPCTSTR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int ,int ***,int *) ;
 int * FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int) ;

__attribute__((used)) static BOOL FUNC_13 (LPINT VAR_2, LPTSTR **VAR_3, LPCTSTR VAR_4)
{
    HANDLE VAR_5;
    WIN32_FIND_DATA VAR_6;
    BOOL VAR_7;
    LPCTSTR VAR_8;
    LPTSTR VAR_9, VAR_10;

    VAR_8 = FUNC_8 (VAR_4, FUNC_4('\\'));
    if (((void*)0) != VAR_8)
    {
        VAR_9 = FUNC_10((VAR_8 - VAR_4 + 2) * sizeof(TCHAR));
        if (!VAR_9)
        {
            FUNC_3("Cannot allocate memory for dirpart!\n");
            return VAR_0;
        }
        FUNC_12(VAR_9, VAR_4, VAR_8 - VAR_4 + 1);
        VAR_9[VAR_8 - VAR_4 + 1] = FUNC_4('\0');
    }
    else
    {
        VAR_9 = ((void*)0);
    }
    VAR_5 = FUNC_1 (VAR_4, &VAR_6);
    if (VAR_1 != VAR_5)
    {
        do
        {
            if (((void*)0) != VAR_9)
            {
                VAR_10 = FUNC_10((FUNC_7(VAR_9) + FUNC_7(VAR_6.cFileName) + 1) * sizeof(TCHAR));
                if (!VAR_10)
                {
                    FUNC_3("Cannot allocate memory for fullname!\n");
                    VAR_7 = VAR_0;
                }
                else
                {
                    FUNC_5 (FUNC_6 (VAR_10, VAR_9), VAR_6.cFileName);
                    VAR_7 = FUNC_9(VAR_2, VAR_3, VAR_10);
                    FUNC_11 (VAR_10);
                }
            }
            else
            {
                VAR_7 = FUNC_9(VAR_2, VAR_3, VAR_6.cFileName);
            }
        } while (FUNC_2 (VAR_5, &VAR_6) && VAR_7);
        FUNC_0 (VAR_5);
    }
    else
    {
        VAR_7 = FUNC_9(VAR_2, VAR_3, VAR_4);
    }

    if (((void*)0) != VAR_9)
    {
        FUNC_11 (VAR_9);
    }

    return VAR_7;
}
