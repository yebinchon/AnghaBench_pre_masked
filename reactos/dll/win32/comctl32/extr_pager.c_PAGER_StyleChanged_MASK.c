
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
struct TYPE_7__ {int dwStyle; } ;
struct TYPE_6__ {int styleNew; int styleOld; } ;
typedef TYPE_1__ STYLESTRUCT ;
typedef TYPE_2__ PAGER_INFO ;
typedef int LRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,scalar_t__,int ,int) ;

__attribute__((used)) static LRESULT
FUNC_2(PAGER_INFO *VAR_3, WPARAM VAR_4, const STYLESTRUCT *VAR_5)
{
    DWORD VAR_6 = VAR_3->dwStyle;

    FUNC_1("(styletype=%lx, styleOld=0x%08x, styleNew=0x%08x)\n",
          VAR_4, VAR_5->styleOld, VAR_5->styleNew);

    if (VAR_4 != VAR_0) return 0;

    VAR_3->dwStyle = VAR_5->styleNew;

    if ((VAR_6 ^ VAR_5->styleNew) & (VAR_1 | VAR_2))
    {
        FUNC_0(VAR_3);
    }

    return 0;
}
