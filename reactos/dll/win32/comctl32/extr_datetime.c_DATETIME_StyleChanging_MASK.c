
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_3__ {int styleOld; int styleNew; } ;
typedef TYPE_1__ STYLESTRUCT ;
typedef int LRESULT ;
typedef int DATETIME_INFO ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int,int) ;

__attribute__((used)) static LRESULT
FUNC_1(DATETIME_INFO *VAR_1, WPARAM VAR_2, STYLESTRUCT *VAR_3)
{
    FUNC_0("(styletype=%lx, styleOld=0x%08x, styleNew=0x%08x)\n",
          VAR_2, VAR_3->styleOld, VAR_3->styleNew);


    if ((VAR_3->styleNew ^ VAR_3->styleOld) & VAR_0)
    {
        if (VAR_3->styleOld & VAR_0)
            VAR_3->styleNew |= VAR_0;
        else
            VAR_3->styleNew &= ~VAR_0;
    }

    return 0;
}
