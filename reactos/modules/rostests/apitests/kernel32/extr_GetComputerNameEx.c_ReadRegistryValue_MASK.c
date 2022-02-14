
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PCHAR ;
typedef scalar_t__ LSTATUS ;
typedef int * LPBYTE ;
typedef scalar_t__ INT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int *,scalar_t__*,int *,scalar_t__*) ;

__attribute__((used)) static
LSTATUS
FUNC_3(PCHAR VAR_3, PCHAR VAR_4)
{
    INT VAR_5;
    HKEY VAR_6;
    DWORD VAR_7;
    DWORD VAR_8 = 0;


    VAR_5 = FUNC_1(VAR_0,
                              "System\\CurrentControlSet\\Services\\Tcpip\\Parameters",
                              0,
                              VAR_1,
                              &VAR_6);
    if (VAR_5 == VAR_2)
    {

        VAR_5 = FUNC_2(VAR_6,
                                     VAR_3,
                                     ((void*)0),
                                     &VAR_7,
                                     ((void*)0),
                                     &VAR_8);
        if (VAR_8)
        {

            VAR_5 = FUNC_2(VAR_6,
                                         VAR_3,
                                         ((void*)0),
                                         &VAR_7,
                                         (LPBYTE)VAR_4,
                                         &VAR_8);
        }


        FUNC_0(VAR_6);
    }
    return VAR_5;
}
