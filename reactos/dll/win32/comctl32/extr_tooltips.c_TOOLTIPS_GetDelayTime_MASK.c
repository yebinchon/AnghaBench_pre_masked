
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nReshowTime; int nAutoPopTime; int nInitialTime; } ;
typedef TYPE_1__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef int DWORD ;






 int FUNC_0 (char*,int) ;

__attribute__((used)) static LRESULT
FUNC_1 (const TOOLTIPS_INFO *VAR_0, DWORD VAR_1)
{
    switch (VAR_1) {
    case 128:
        return VAR_0->nReshowTime;

    case 130:
        return VAR_0->nAutoPopTime;

    case 129:
    case 131:
        return VAR_0->nInitialTime;

    default:
        FUNC_0("Invalid duration flag %x\n", VAR_1);
 break;
    }

    return -1;
}
