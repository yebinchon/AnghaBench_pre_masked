
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int osvi ;
struct TYPE_5__ {void* is_memory; void* usesep; int layout; } ;
struct TYPE_4__ {int dwOSVersionInfoSize; int dwPlatformId; } ;
typedef TYPE_1__ OSVERSIONINFO ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,int ,void*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,void*) ;
 void* VAR_2 ;
 int FUNC_3 () ;


 int FUNC_4 (char*) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void FUNC_5(void)
{
    OSVERSIONINFO VAR_4;

    VAR_4.dwOSVersionInfoSize = sizeof(VAR_4);
    FUNC_1(&VAR_4);

    switch (VAR_4.dwPlatformId) {
    case 128:
    case 129:

        VAR_3.layout = FUNC_0(FUNC_4("SciCalc"), FUNC_4("layout"), VAR_0);


        VAR_3.usesep = (FUNC_0(FUNC_4("SciCalc"), FUNC_4("UseSep"), VAR_1)) ? VAR_2 : VAR_1;
        break;

    default:

        VAR_3.layout = FUNC_2(FUNC_4("SOFTWARE\\Microsoft\\Calc"), FUNC_4("layout"), VAR_0);


        VAR_3.usesep = (FUNC_2(FUNC_4("SOFTWARE\\Microsoft\\Calc"), FUNC_4("UseSep"), VAR_1)) ? VAR_2 : VAR_1;
        break;
    }


    VAR_3.is_memory = VAR_1;


    FUNC_3();
}
