
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PCHAR ;
typedef scalar_t__ LSTATUS ;
typedef int LPBYTE ;
typedef scalar_t__ INT ;
typedef int HKEY ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static
LSTATUS
FUNC_4(PCHAR VAR_4, PCHAR VAR_5)
{
    INT VAR_6;
    HKEY VAR_7;


    VAR_6 = FUNC_1(VAR_0,
                              "System\\CurrentControlSet\\Services\\Tcpip\\Parameters",
                              0,
                              VAR_1,
                              &VAR_7);
    if (VAR_6 == VAR_2)
    {

        VAR_6 = FUNC_2(VAR_7,
                                   VAR_4,
                                   0,
                                   VAR_3,
                                   (LPBYTE)VAR_5,
                                   FUNC_3(VAR_5) + 1);


        FUNC_0(VAR_7);
    }
    return VAR_6;
}
