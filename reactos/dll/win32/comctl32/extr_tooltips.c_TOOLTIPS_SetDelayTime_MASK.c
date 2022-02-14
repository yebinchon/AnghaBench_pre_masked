
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nReshowTime; int nAutoPopTime; int nInitialTime; } ;
typedef TYPE_1__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef int INT ;
typedef int DWORD ;


 int FUNC_0 () ;




 int FUNC_1 (char*,int) ;

__attribute__((used)) static LRESULT
FUNC_2 (TOOLTIPS_INFO *VAR_0, DWORD VAR_1, INT VAR_2)
{
    switch (VAR_1) {
    case 131:
        if (VAR_2 <= 0)
     VAR_2 = FUNC_0();
 VAR_0->nReshowTime = VAR_2 / 5;
 VAR_0->nAutoPopTime = VAR_2 * 10;
 VAR_0->nInitialTime = VAR_2;
 break;

    case 128:
        if(VAR_2 < 0)
     VAR_2 = FUNC_0() / 5;
 VAR_0->nReshowTime = VAR_2;
 break;

    case 130:
        if(VAR_2 < 0)
     VAR_2 = FUNC_0() * 10;
 VAR_0->nAutoPopTime = VAR_2;
 break;

    case 129:
        if(VAR_2 < 0)
     VAR_2 = FUNC_0();
 VAR_0->nInitialTime = VAR_2;
     break;

    default:
        FUNC_1("Invalid duration flag %x\n", VAR_1);
 break;
    }

    return 0;
}
