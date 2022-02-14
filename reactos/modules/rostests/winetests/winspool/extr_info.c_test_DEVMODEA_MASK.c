
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dmDriverExtra; scalar_t__ dmDeviceName; scalar_t__ dmSize; int dmFields; scalar_t__ dmDriverVersion; scalar_t__ dmSpecVersion; } ;
typedef scalar_t__ LPCSTR ;
typedef scalar_t__ LONG ;
typedef TYPE_1__ DEVMODEA ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(const DEVMODEA *VAR_1, LONG VAR_2, LPCSTR VAR_3)
{



    if (VAR_1->dmSpecVersion || VAR_1->dmDriverVersion || VAR_1->dmDriverExtra) {

        FUNC_0(!FUNC_1(VAR_3, (LPCSTR)VAR_1->dmDeviceName, VAR_0 -1) ||
           !FUNC_1(VAR_3, (LPCSTR)VAR_1->dmDeviceName, VAR_0 -2),
            "expected '%s', got '%s'\n", VAR_3, VAR_1->dmDeviceName);
        FUNC_0(VAR_1->dmSize + VAR_1->dmDriverExtra == VAR_2,
            "%u != %d\n", VAR_1->dmSize + VAR_1->dmDriverExtra, VAR_2);
    }
    FUNC_2("dmFields %08x\n", VAR_1->dmFields);
}
