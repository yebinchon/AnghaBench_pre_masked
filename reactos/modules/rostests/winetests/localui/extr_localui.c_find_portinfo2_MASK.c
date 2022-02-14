
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pPortName; } ;
typedef TYPE_1__ PORT_INFO_2W ;
typedef int LPCWSTR ;
typedef int DWORD ;


 int FUNC_0 (int *,int,int *,int ,int *,int*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int,char*,int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static PORT_INFO_2W * FUNC_7(LPCWSTR VAR_4)
{
    PORT_INFO_2W * VAR_5;
    DWORD VAR_6;

    if (!VAR_1) {
        VAR_6 = FUNC_0(((void*)0), 2, ((void*)0), 0, &VAR_2, &VAR_3);
        if (!VAR_6 && (FUNC_1() == VAR_0)) {
            FUNC_6("The service 'Spooler' is required for many tests\n");
            return ((void*)0);
        }
        FUNC_5(!VAR_6, "EnumPorts succeeded: got %d\n", VAR_6);
        VAR_1 = FUNC_3(FUNC_2(), 0, VAR_2);
        VAR_6 = FUNC_0(((void*)0), 2, VAR_1, VAR_2, &VAR_2, &VAR_3);
        FUNC_5(VAR_6 == 1, "EnumPorts failed: got %d\n", VAR_6);
    }
    if (VAR_1) {
        VAR_5 = (PORT_INFO_2W *) VAR_1;
        VAR_6 = 0;
        while (VAR_3 > VAR_6) {
            if (FUNC_4(VAR_5->pPortName, VAR_4) == 0) {
                return VAR_5;
            }
            VAR_5++;
            VAR_6++;
        }
    }
    return ((void*)0);
}
