
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPTSTR ;
typedef int * LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int *,int *,int *) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static LPTSTR
FUNC_7(LPTSTR VAR_4)
{
    HKEY VAR_5;
    LPTSTR VAR_6 = ((void*)0);
    DWORD VAR_7, VAR_8 = VAR_3;
    LONG VAR_9;

    VAR_9 = FUNC_4(VAR_1,
                       FUNC_6("Control Panel\\Desktop"),
                       0,
                       VAR_2,
                       &VAR_5);
    if (VAR_9 != VAR_0)
        return ((void*)0);

    VAR_9 = FUNC_5(VAR_5,
                          VAR_4,
                          0,
                          &VAR_8,
                          ((void*)0),
                          &VAR_7);
    if (VAR_9 == VAR_0)
    {
        VAR_6 = FUNC_1(FUNC_0(),
                          0,
                          VAR_7);
        if (VAR_6)
        {
            VAR_9 = FUNC_5(VAR_5,
                                  VAR_4,
                                  0,
                                  &VAR_8,
                                  (LPBYTE)VAR_6,
                                  &VAR_7);
            if (VAR_9 != VAR_0)
            {
                FUNC_2(FUNC_0(), 0, VAR_6);
                VAR_6 = ((void*)0);
            }
        }
    }

    FUNC_3(VAR_5);

    return VAR_6;
}
