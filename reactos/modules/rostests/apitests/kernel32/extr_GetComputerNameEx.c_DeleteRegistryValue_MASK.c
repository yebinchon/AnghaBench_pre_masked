
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PCHAR ;
typedef scalar_t__ LSTATUS ;
typedef scalar_t__ INT ;
typedef int HKEY ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,int *) ;

__attribute__((used)) static
LSTATUS
FUNC_3(PCHAR VAR_3)
{
    INT VAR_4;
    HKEY VAR_5;


    VAR_4 = FUNC_2(VAR_0,
                              "System\\CurrentControlSet\\Services\\Tcpip\\Parameters",
                              0,
                              VAR_1,
                              &VAR_5);
    if (VAR_4 == VAR_2)
    {

        VAR_4 = FUNC_1(VAR_5, VAR_3);


        FUNC_0(VAR_5);
    }
    return VAR_4;
}
