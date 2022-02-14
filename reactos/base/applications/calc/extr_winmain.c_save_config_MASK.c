
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int osvi ;
struct TYPE_5__ {int usesep; int layout; } ;
struct TYPE_4__ {int dwOSVersionInfoSize; int dwPlatformId; } ;
typedef int TCHAR ;
typedef TYPE_1__ OSVERSIONINFO ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;


 int FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *,int *,int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_5(void)
{
    TCHAR VAR_2[32];
    OSVERSIONINFO VAR_3;

    VAR_3.dwOSVersionInfoSize = sizeof(VAR_3);
    FUNC_0(&VAR_3);

    switch (VAR_3.dwPlatformId) {
    case 128:
    case 129:
        FUNC_4(VAR_2, FUNC_3("%lu"), VAR_1.layout);
        FUNC_2(FUNC_3("SciCalc"), FUNC_3("layout"), VAR_2);
        FUNC_2(FUNC_3("SciCalc"), FUNC_3("UseSep"), (VAR_1.usesep==VAR_0) ? FUNC_3("1") : FUNC_3("0"));
        break;

    default:
        FUNC_1(FUNC_3("SOFTWARE\\Microsoft\\Calc"), FUNC_3("layout"), VAR_1.layout);
        FUNC_1(FUNC_3("SOFTWARE\\Microsoft\\Calc"), FUNC_3("UseSep"), VAR_1.usesep);
        break;
    }
}
